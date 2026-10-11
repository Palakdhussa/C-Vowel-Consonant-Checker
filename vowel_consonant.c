#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    printf("Enter an alphabet: ");
    scanf(" %c", &ch);

    ch = tolower((unsigned char)ch);

    if (ch < 'a' || ch > 'z') {
        printf("Invalid input! Please enter an alphabet.\n");
    }
    else if (ch == 'a' || ch == 'e' || ch == 'i' ||
             ch == 'o' || ch == 'u') {
        printf("It is a vowel.\n");
    }
    else {
        printf("It is a consonant.\n");
    }

    return 0;
}
