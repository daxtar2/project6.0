#include <stdio.h>
int main(void)
{
	float weight;
	float value;
	printf("are you worth your weight in platinum?\n");
	printf("let's check it out.\n");
	printf("please enter your weight:");

	scanf_s ("%f", &weight);
	//�ڸ߰汾�� Visual Studio �������У�scanf ����Ϊ�ǲ���ȫ�ģ������ã�Ӧ��ʹ��scanf_s���� scanf

	value = 1700.0 * weight * 14.5833;
	printf("your weight in platinum is worth $%.2f.\n",value);
	printf("you are easily worth that ! if platinum prices drop,\n");
	printf("eat more to maintain your value.\n");

	return 0;
}