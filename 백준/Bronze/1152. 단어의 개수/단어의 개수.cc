#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main()
 {
    char sentence[1000001];
    scanf("%[^\n]s", sentence);
    char* word;
    int result = 0;
    word = strtok(sentence, " ");
    while (word != NULL)
    {
        if (word != "\n")
            result++;
        word = strtok(NULL, " ");
    }
    printf("%d", result);
    fflush(stdin);
    return 0;
}