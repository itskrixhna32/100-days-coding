#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int start = 0, end = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (str[end] != '\0') {

        // If space or end of string found → reverse the word
        if (str[end] == ' ' || str[end] == '\n' || str[end] == '\0') {
            int i = start, j = end - 1;

            // Reverse the current word
            while (i < j) {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
                i++;
                j--;
            }

            start = end + 1;  // move start to next word
        }

        end++;
    }

    printf("Output: %s", str);
    return 0;
}
