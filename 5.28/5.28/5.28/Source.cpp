#include <stdio.h>

int main()
{
	char c;
	printf("請輸入一字母:");
	scanf_s("%c", &c);
	if ('A' <= c && c <= 'Z')
	{
		c = c + 32;
	}
	else
	{
		c = c - 32;
	}
	printf("該字母轉換大小寫為:%c\n", c);

	return 0;
}