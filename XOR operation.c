#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello World";
    char encrypted[100], decrypted[100];
    int i, length;

    length = strlen(str);

    // Encryption
    for(i = 0; i < length; i++) {
        encrypted[i] = str[i] ^ 5;
    }
    encrypted[length] = '\0';

    printf("Encrypted: %s\n", encrypted);

    // Decryption
    for(i = 0; i < length; i++) {
        decrypted[i] = encrypted[i] ^ 5;
    }
    decrypted[length] = '\0';

    printf("Decrypted: %s\n", decrypted);

    return 0;
}