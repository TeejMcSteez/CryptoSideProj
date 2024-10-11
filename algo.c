#include <stdlib.h>
#include <stdio.h>

char encryptAlgo(char in) {
    in = in - 1;
    return in;
}

char decryptAlgo(char in) {
    in = in + 1;
    return in;
}

int main() {
    #define CHUNK 200
    char tempBuffer[CHUNK] = {"Hello message"}, *input;
    input = tempBuffer;

    //encrypt
    for (int i = 0; i < sizeof(tempBuffer)/8; i++) {
        if (*input + i != ' ') {
            *(input + i) = encryptAlgo(*(input + i));
        } else {
            continue;
        }
    }
    printf("Encrypted: %s\n", input);
    //decrypt
    for (int i = 0; i < sizeof(tempBuffer)/8; i++) {
        if (*input + i != ' ') {
            *(input + i) = decryptAlgo(*(input + i));
        } else {
            continue;
        }
    }

    printf("Decrypted: %s", input);

    return 0;
}