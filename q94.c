#include <stdio.h>
#include <string.h>

int splitWords(char sentence[], char words[100][100]) // char words[MAX_WORDS][MAX_LEN]
{
    int i = 0, j = 0, k = 0;
    while (1)
    {
        if (sentence[i] != ' ' && sentence[i] != '\0')
        {
            words[k][j] = sentence[i];
            j++;
        }
        else
        {
            words[k][j] = '\0';
            k++;
            j = 0;
        }
        if (sentence[i] == '\0')
            break;
        i++;
    }
    return k;
}

int find(char words[100][100], int count)
{
    int maxIndex = 0;
    for (int i = 1; i < count; i++)
    {
        if (strlen(words[i]) > strlen(words[maxIndex]))
            maxIndex = i;
    }
    return maxIndex;
}

int main()
{
    char sentence[1000];
    char words[100][100];

    printf("Enter a sentence:\n");
    gets(sentence); // input a string from the user

    int count = splitWords(sentence, words);
    int index = find(words, count);

    printf("Longest word: %s\n", words[index]);

    return 0;
}