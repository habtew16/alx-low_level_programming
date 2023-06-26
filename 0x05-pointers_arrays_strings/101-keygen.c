#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 8

char generateRandomChar() {
    // Generate a random character within the ASCII range of printable characters
    return (rand() % 94) + 33;  // Printable ASCII characters range from 33 to 126
}

void generateRandomPassword(char *password) {
    for (int i = 0; i < PASSWORD_LENGTH; i++) {
        password[i] = generateRandomChar();
    }
    password[PASSWORD_LENGTH] = '\0';  // Add null-terminating character
}

int main() {
    srand(time(NULL));  // Initialize the random number generator with the current time
    
    char password[PASSWORD_LENGTH + 1];  // +1 for the null-terminating character
    
    generateRandomPassword(password);
    
    printf("Random password: %s\n", password);
    
    return 0;
}

