#include <stdio.h>
//程式執行後，發現將要到x=40時，程式將跑不出結果來

int fib(int i) {
	if (i == 0) {
		return 0;
	}
	if (i == 1) {
		return 1;
	}
	if (i >= 2) {
		return fib(i - 2) + fib(i - 1);
	}
}

int main() {
	unsigned long int x;
	unsigned long long int result;
	printf("你想知道第幾個fib的值?");
	scanf_s("%d", &x);
	for (int i = 0; i < x; i++) 
	{
		fib(i);
		result = fib(i);
	}
	
	printf("第%d個的值為%d",x,result);
	return 0;
}