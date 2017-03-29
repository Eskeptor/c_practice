#include <stdio.h>
#include <math.h>

int main(void)
{
	/*
	 * 문제2
	 */
	int ch;
	printf("아스키코드 입력 : ");
	scanf("%d", &ch);
	printf("문자 변환 : %c \n\n", ch);

	/*
	* 문제3
	*/
	printf("\aStartled by the sudden sound, Sally shouted, \"By the Greate Pumpkin, what was that!\"\n\n");

	/*
	* 문제4
	*/
	double num;
	printf("실수 입력 : ");
	scanf("%lf", &num);
	printf("The input is %f or %e \n\n", num, num);

	/*
	* 문제5
	*/
	int age;
	printf("나이 입력 : ");
	scanf("%d", &age);
	printf("초 : %d \n\n", (int)(age * 3.156 * (int)(pow(10, 7))));

	/*
	* 문제6
	*/
	int water;
	printf("물의 양 : ");
	scanf("%d", &water);
	printf("물 분자수 : %d \n\n", (int)(water * 950 / (int)(3 * pow(10, -23))));
	return 0;
}