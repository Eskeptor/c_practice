#include <stdio.h>
#include <math.h>

int main(void)
{
	/*
	 * ����2
	 */
	int ch;
	printf("�ƽ�Ű�ڵ� �Է� : ");
	scanf("%d", &ch);
	printf("���� ��ȯ : %c \n\n", ch);

	/*
	* ����3
	*/
	printf("\aStartled by the sudden sound, Sally shouted, \"By the Greate Pumpkin, what was that!\"\n\n");

	/*
	* ����4
	*/
	double num;
	printf("�Ǽ� �Է� : ");
	scanf("%lf", &num);
	printf("The input is %f or %e \n\n", num, num);

	/*
	* ����5
	*/
	int age;
	printf("���� �Է� : ");
	scanf("%d", &age);
	printf("�� : %d \n\n", (int)(age * 3.156 * (int)(pow(10, 7))));

	/*
	* ����6
	*/
	int water;
	printf("���� �� : ");
	scanf("%d", &water);
	printf("�� ���ڼ� : %d \n\n", (int)(water * 950 / (int)(3 * pow(10, -23))));
	return 0;
}