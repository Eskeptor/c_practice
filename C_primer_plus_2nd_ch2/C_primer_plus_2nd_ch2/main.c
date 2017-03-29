#include <stdio.h>
#include <math.h>

int main(void)
{
	/*
	* 1번 문제
	*/
	printf("Mae West \n");
	printf("Mae \nWest \n");
	printf("Mae ");
	printf("West \n\n");

	/*
	* 2번 문제
	*/
	printf("이름 : 홍길동 \n");
	printf("주소 : 대한민국 어딘가 \n\n");

	/*
	* 3번 문제(윤년 무시)
	*/
	int age = 24;
	int convert_days = age * 365;
	printf("나이(%d), 날(%d) \n\n", age, convert_days);

	/*
	* 4번 문제
	*/
	for (int i = 0; i < 3; i++)
		printf("For he\'s a jolly good fellow! \n");
	printf("Which nobody can deny! \n\n");

	/*
	* 5번 문제
	*/
	int toes = 10;
	printf("toes = %d \n", toes);
	printf("toes^2 = %d \n", (int)pow(toes, 2));
	printf("2toes = %d \n\n", toes * 2);
	return 0;
}