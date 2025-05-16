#include<stdlib.h>
#include<stdio.h>

int main()
{
    int N, i = 2,j=5, answer = 1;
    scanf("%d", &N);
    while (1)
    {
        if (N == 1) {
            printf("1");
            break;
        }
        else if (i<=N && N<=i+j)
        {
            answer++;
            printf("%d", answer);
            break;
        }
        answer++;
        i+=j+1;
        j += 6;
    }
    return 0;
}
//벌집 라인별 크기 1, 2~7(5), 8~19(11), ---
// 13 이면 1, 4, 13 3개 지남
// 어떤 범위에 N이 위치하는지 파악
// N->13 1, 2~7, 8~9 3개 구간 지나야함
//=>i = 2, j=5, answer = 1(1아닐때만 if문 들어가니까)
//=>i<=N&&N<=i+j
//=>i+=j+1=>2~7 다음 구간 8~19 => i는 i+j+1
//=>j+=6 => ``=>j는 j+6 => 구간별 크기 1, 6, 12 ,18 ```