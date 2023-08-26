#include "main.h"

#define BUF_SIZE 64

void display_error_and_exit(const char *error_msg)
{
    fprintf(stderr, "Error: %s\n", error_msg);
    exit(98);
}

void print_elf_header_info(Elf64_Ehdr *header)
{
	int i;
    printf("Magic:   ");
    for (i = 0; i < EI_NIDENT; i++)
    {
        printf("%02x ", header->e_ident[i]);
    }
    printf("\nClass:                             %s\n", header->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "Invalid");
    printf("Data:                              %s\n", header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "Invalid");
    printf("Version:                           %d\n", header->e_ident[EI_VERSION]);
    printf("OS/ABI:                            %s\n", header->e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" : "Invalid");
    printf("ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
    printf("Type:                              %s\n", header->e_type == ET_EXEC ? "EXEC (Executable file)" : "Invalid");
    printf("Entry point address:               0x%lx\n", header->e_entry);
}

int main(int argc, char *argv[])
{
	int fd;
	ssize_t bytes_read;
	Elf64_Ehdr header;
    if (argc != 2)
    {
        display_error_and_exit("Usage: elf_header elf_filename");
    }

    fd = open(argv[1], O_RDONLY);
    if (fd == -1)
    {
        display_error_and_exit("Can't open ELF file");
    }

    bytes_read = read(fd, &header, sizeof(header));
    if (bytes_read != sizeof(header) || header.e_ident[EI_MAG0] != ELFMAG0 || header.e_ident[EI_MAG1] != ELFMAG1 ||
        header.e_ident[EI_MAG2] != ELFMAG2 || header.e_ident[EI_MAG3] != ELFMAG3)
    {
        close(fd);
        display_error_and_exit("Not an ELF file");
    }

    print_elf_header_info(&header);

    close(fd);
    return 0;
}

