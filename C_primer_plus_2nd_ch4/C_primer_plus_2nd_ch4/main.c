#include <stdio.h>

int main(void)
{
	/*
	* 1�� ����
	*/
	char first_name[20] = { 0, };
	char last_name[6] = { 0, };
	printf("�� �Է� : ");
	scanf_s("%s", last_name, sizeof(last_name));
	printf("�̸� �Է� : ");
	scanf_s("%s", first_name, sizeof(first_name));
	printf("%s%s \n", last_name, first_name);

	/*
	* 2�� ����
	*/
	char name[20] = { 0, };
	printf("�̸� �Է� : ");
	scanf_s("%s", name, sizeof(name));
	printf("\"%s\"\n", name);
	printf("\"%20s\"\n", name);
	printf("\"%-20s\"\n", name);

	/*
	* 3�� ����
	*/
	double num;
	printf("�Ǽ� �Է� : ");
	scanf_s("%lf", &num);
	printf("The input is %g or %e. \n", num, num);
	printf("The input is +%.3f or %E. \n", num, num);

	/*
	* 4�� ����
	*/
	const double FEET = 0.083;
	int input;
	double inch = 0;
	printf("��ġ �Է� : ");
	scanf_s("%d", &input);
	inch = input * FEET;
	printf("Dabney, you are %.3f feet tall\n", inch);

	/*
	* 5�� ����
	*/
	char first_name[20] = { 0, };
	char last_name[20] = { 0, };
	int first_length = 0;
	int last_length = 0;
	printf("�� �Է� : ");
	scanf_s("%s", last_name, sizeof(last_name));
	printf("�̸� �Է� : ");
	scanf_s("%s", first_name, sizeof(first_name));
	int idx = 0;
	while (1)
	{
		if (last_name[idx] != 0)
			idx++;
		else
		{
			last_length = idx;
			break;
		}
	}
	idx = 0;
	while (1)
	{
		if (first_name[idx] != 0)
			idx++;
		else
		{
			first_length = idx;
			break;
		}
	}
	printf("%10s %15s\n", last_name, first_name);
	printf("%10d %15d\n", last_length, first_length);
	printf("%-10s %-15s\n", last_name, first_name);
	printf("%-10d %-15d\n", last_length, first_length);
	return 0;
}