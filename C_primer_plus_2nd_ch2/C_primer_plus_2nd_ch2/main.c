#include <stdio.h>
#include <math.h>

int main(void)
{
	/*
	* 1�� ����
	*/
	printf("Mae West \n");
	printf("Mae \nWest \n");
	printf("Mae ");
	printf("West \n\n");

	/*
	* 2�� ����
	*/
	printf("�̸� : ȫ�浿 \n");
	printf("�ּ� : ���ѹα� ��� \n\n");

	/*
	* 3�� ����(���� ����)
	*/
	int age = 24;
	int convert_days = age * 365;
	printf("����(%d), ��(%d) \n\n", age, convert_days);

	/*
	* 4�� ����
	*/
	for (int i = 0; i < 3; i++)
		printf("For he\'s a jolly good fellow! \n");
	printf("Which nobody can deny! \n\n");

	/*
	* 5�� ����
	*/
	int toes = 10;
	printf("toes = %d \n", toes);
	printf("toes^2 = %d \n", (int)pow(toes, 2));
	printf("2toes = %d \n\n", toes * 2);
	return 0;
}