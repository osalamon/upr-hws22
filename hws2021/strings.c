#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char inputStr[100];
    
    // načti řádek textu ze vstupu do řetězce `buf`
    fgets(inputStr, sizeof(inputStr), stdin);

    int len = strlen(inputStr);
    int outputLen = 0;
    
    for (int i = 0; i < len; i++) {
        if ((inputStr[i] >= 65 && inputStr[i] <= 90) || (inputStr[i] >= 97 && inputStr[i] <= 122)) {
            outputLen++;
        }
        // printf("%d\n", (int) inputStr[i]);
    }   


    // printf("outputLen::: %d\n", outputLen);


    char* output = (char*) malloc(outputLen * sizeof(char));

    for (int i = 0; i < len; i++) {
        if ((inputStr[i] >= 65 && inputStr[i] <= 90) || (inputStr[i] >= 97 && inputStr[i] <= 122)) {
            output[i] = inputStr[i];
            putchar(output[i]);
        }
        // putchar('\n');

        //if ((inputStr[i] >= 97 && inputStr[i] <= 122)) {
        //    output[i] = (char) inputStr[i];
        //    putchar(output[i]);
        //    
        //}
    }
    free(output);

    // printf("%s\n", &output);
    // putchar(inputStr[2]);
    // puts(output);

    return 0;
}