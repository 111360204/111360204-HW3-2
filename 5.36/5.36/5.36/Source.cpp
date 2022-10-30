#include <stdio.h>
#include<math.h>

void hanoi(int n, char A, char B, char C) {
	if (n == 1) {
		printf("Move sheet from %c to %c\n", A, C);
	}
	else {
		hanoi(n - 1, A, C, B);
		hanoi(1, A, B, C);
		hanoi(n - 1, B, A, C);
	}
}

int main() {
	int n;
	int step;
	printf("請輸入盤數：");
	scanf_s("%d", &n);
	hanoi(n, 'A', 'B', 'C');
	step = pow(2, n) - 1;
	printf("總共花了%d步驟",step);
	return 0;
}