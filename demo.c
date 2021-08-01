#include <stdio.h>
int main(void)
{
	float weight;
	float value;
	printf("are you worth your weight in platinum?\n");
	printf("let's check it out.\n");
	printf("please enter your weight:");

	scanf_s ("%f", &weight);
	//%f用于处理浮点数，scanf()会读取用户输入数，&weight告诉scanf()把输入值赋给weight
	// '&'用于找到weight变量的地点
	//在高版本的 Visual Studio 编译器中，scanf 被认为是不安全的，被弃用，应当使用scanf_s代替 scanf

	value = 1700.0 * weight * 14.5833;
	printf("your weight in platinum is worth $%.2f.\n",value);
	//‘.2’用于精确控制输出(指定输出的浮点数只显示小数点后两位)
	printf("you are easily worth that ! if platinum prices drop,\n");
	printf("eat more to maintain your value.\n");

	return 0;
}