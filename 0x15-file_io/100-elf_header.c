#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

void print_error(const char *message) {
    fprintf(stderr, "Error: %s\n", message);
    exit(98);
}

void print_elf_header_info(Elf64_Ehdr *elf_header) {
	int i;
    printf("Magic: ");
    for (i = 0; i < EI_NIDENT; ++i) {
        printf("%02x ", elf_header->e_ident[i]);
    }
    printf("\n");

    printf("Class: %s\n", (elf_header->e_ident[EI_CLASS] == ELFCLASS32) ? "ELF32" : "ELF64");
    printf("Data: %s\n", (elf_header->e_ident[EI_DATA] == ELFDATA2LSB) ? "2's complement, little endian" : "2's complement, big endian");
    printf("Version: %d\n", elf_header->e_ident[EI_VERSION]);

    printf("OS/ABI: %d\n", elf_header->e_ident[EI_OSABI]);
    printf("ABI Version: %d\n", elf_header->e_ident[EI_ABIVERSION]);

    printf("Type: %d\n", elf_header->e_type);
    printf("Entry point address: 0x%lx\n", (unsigned long)elf_header->e_entry);
}

int main(int argc, char **argv) {
	int fd;

	Elf64_Ehdr elf_header;

    if (argc != 2) {
        fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
        return 98;
    }

    fd = open(argv[1], O_RDONLY);
    if (fd == -1) {
        print_error("Cannot open file");
    }

    if (read(fd, &elf_header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr)) {
        print_error("Cannot read ELF header");
    }

    if (lseek(fd, (off_t)0, SEEK_SET) == -1) {
        print_error("lseek failed");
    }

    if (elf_header.e_ident[EI_MAG0] != ELFMAG0 || 
        elf_header.e_ident[EI_MAG1] != ELFMAG1 || 
        elf_header.e_ident[EI_MAG2] != ELFMAG2 || 
        elf_header.e_ident[EI_MAG3] != ELFMAG3) {
        print_error("Not an ELF file");
    }

    print_elf_header_info(&elf_header);

    close(fd);
    return 0;
}

