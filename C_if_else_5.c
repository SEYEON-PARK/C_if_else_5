#include <stdio.h>

int main(void)
{
	int score;

	printf("����� ������ �Է����ּ���. ");
	scanf_s("%d", &score);

    if (score >= 95)
        printf("����� ����� A+�Դϴ�.");
    else if (score >= 90)
        printf("����� ����� A�Դϴ�.");
    else if (score >= 85) 
        printf("����� ����� B+�Դϴ�.");
    else if(score >= 80) 
        printf("����� ����� B�Դϴ�.");
    else if(score >= 75) 
        printf("����� ����� C+�Դϴ�.");
    else if(score >= 70) 
        printf("����� ����� C�Դϴ�.");
    else
        printf("�ƽ����ϴ�. ������ϼž� �մϴ�.");

    return 0;
}