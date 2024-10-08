#include <stdlib.h>
#include <stdio.h>

char encryptAlgo(char in) {
    in = in - 1;
    return in;
}

int main() {
    #define CHUNK 200
    char tempBuffer[CHUNK], *input;
    printf("Please enter the string to be decrypted: ");
    if (scanf("%s", &tempBuffer) != -1) {
        
    } else {
        printf("String Longer than 200 chars");
    }
    input = tempBuffer;

    printf("%c", *input);//value at input[0]
    //encrypt
    for (int i = 0; i < sizeof(tempBuffer)/8; i++) {
        if (*input + i != ' ') {
            *(input + i) = encryptAlgo(*(input + i));
        } else {
            continue;
        }
    }  

    printf("%s", input);

    return 0;
}