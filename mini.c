#include <stdio.h>
#include <ctype.h>

void capitalizeFirstLetter(char sentence[]) {
    int i;

    // Capitalize the first letter of the sentence
    sentence[0] = toupper(sentence[0]);

    // Iterate through the sentence and capitalize the first letter of each word
    for (i = 1; sentence[i] != '\0'; i++) {
        if (sentence[i - 1] == ' ' || sentence[i - 1] == '\t') {
            // Found a space or tab, capitalize the next letter
            sentence[i] = toupper(sentence[i]);
        }
    }
}

int main() {
    char sentence[100];

    // Input the sentence
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Call the function to capitalize the first letter of each word
    capitalizeFirstLetter(sentence);

    // Output the modified sentence
    printf("Output: %s\n", sentence);

    return 0;
}