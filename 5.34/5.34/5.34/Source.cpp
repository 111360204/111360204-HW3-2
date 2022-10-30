#include<stdio.h>
#include<math.h>
int power(int, int);

int main()
{
	int b,e,result;
	printf("請輸入兩個值:");
	scanf_s("%d %d", &b, &e);
	printf("%d的%d次方為", b, e);
	printf("%d", power(b, e));
	return 0;
}
int power(int b,int e)
{
	if ( e!= 0)
		return (b = b * power(b, e - 1));
	else
		return 1;
}
