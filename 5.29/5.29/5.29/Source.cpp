#include<stdio.h>

int main() 
{
	int m, n, num1, num2, temp,lcm; 
	printf("請輸入兩個數："); 
	scanf_s("%d %d", &num1, &num2);
	m = num1; 
	n = num2; 
	while (num2 != 0) 
	{
		temp = num1 % num2;
		num1 = num2;
		num2 = temp;
	}
	lcm = m * n / num1;
	printf("最小公倍數是：%d\n",lcm);
}