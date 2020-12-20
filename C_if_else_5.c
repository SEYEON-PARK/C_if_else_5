#include <stdio.h>

int main(void)
{
	int score;

	printf("당신의 점수를 입력해주세요. ");
	scanf_s("%d", &score);

    if (score >= 95)
        printf("당신의 등급은 A+입니다.");
    else if (score >= 90)
        printf("당신의 등급은 A입니다.");
    else if (score >= 85) 
        printf("당신의 등급은 B+입니다.");
    else if(score >= 80) 
        printf("당신의 등급은 B입니다.");
    else if(score >= 75) 
        printf("당신의 등급은 C+입니다.");
    else if(score >= 70) 
        printf("당신의 등급은 C입니다.");
    else
        printf("아쉽습니다. 재수강하셔야 합니다.");

    return 0;
}