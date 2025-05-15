#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main()
{
    char sentence[1000001];
    int result = 0;
    scanf("%[^\n]s", sentence);
   // printf("%s\n", sentence);
    char* word;
    word = strtok(sentence, " ");
    result++;
    while (word != NULL)
    {
        word = strtok(NULL, " ");
       // printf("%s\n", word);
        result++;
    }
    printf("%d", result-1);
    return 0;
}