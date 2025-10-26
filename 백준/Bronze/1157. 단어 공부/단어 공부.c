#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char* a = (char*)malloc(1000001);
    int alpha[26] = {0,};
    int max = 0, max_indx=0;
    char answer = 0;
    int i = 0;
    
    scanf("%s", a);
    while(a[i]!='\0')
    {
       if(a[i]>='a')
           alpha[a[i]-'a']++;
        else
            alpha[a[i]-'A']++;
        i++;
    }

    for(int j = 0;j<26;j++)
    {
        if(alpha[j]==max)
        {
            answer = '?';
        }
        else if(alpha[j] > max)
        {
            max = alpha[j];
            max_indx = j;
            answer = 'A'+j;
        }
            
    }
    //printf("%d %d %c ", max_indx, alpha[max_indx], 'A'+max_indx);
    printf("%c", answer);
    free(a);
    return 0;
}