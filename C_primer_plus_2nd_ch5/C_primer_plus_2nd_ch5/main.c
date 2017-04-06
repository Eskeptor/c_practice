#include <stdio.h>
#define HOUR 60
#define WEEK 7

void cube(const int num)
{
	printf("%d 세제곱 : %d\n", num, num * num * num);
}

int main(void)
{
	/*
	* 1번 문제
	*/
	int input1;
	int hour, minuite;
	while (1)
	{
		hour = 0, minuite = 0;
		printf("분 입력(0 to exit) : ");
		scanf_s("%d", &input1);

		if (input1 == 0)
			break;
		hour = input1 / HOUR;
		minuite = input1 % HOUR;
		printf("%d시간 %d분 \n", hour, minuite);
	}

	/*
	* 2번 문제
	*/
	int input2;
	printf("정수 입력 : ");
	scanf_s("%d", &input2);
	for (int i = 0; i <= 10; i++)
	{
		printf("%d ", input2 + i);
	}
	printf("\n");

	/*
	* 3번 문제
	*/
	int input3;
	int days = 0, weeks = 0;
	printf("날 입력 : ");
	scanf_s("%d", &input3);
	weeks = input3 / WEEK;
	days = input3 % WEEK;
	printf("%d주 %d일\n", weeks, days);

	/*
	* 4번 문제
	*/
	int count1 = 0, sum1 = 0;
	int input4;
	printf("숫자 입력 : ");
	scanf_s("%d", &input4);
	while (count1++ < input4)
		sum1 += count1;
	printf("총 금액 : %d\n", sum1);

	/*
	* 5번 문제
	*/
	int count2 = 0, sum2 = 0;
	int input5;
	printf("숫자 입력 : ");
	scanf_s("%d", &input5);
	while (count2++ < input5)
		sum2 += (count2 * count2);
	printf("총 금액 : %d\n", sum2);

	/*
	* 6번 문제
	*/
	int input6;
	printf("숫자 입력 : ");
	scanf_s("%d", &input6);
	cube(input6);
	return 0;
}