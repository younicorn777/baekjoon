#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a = 0, b = 0, c = 0;
	scanf("%d%d%d", &a, &b, &c);

	printf("%d\n", (a + b) % c);
	printf("%d\n", ((a % c) + (b % c)) % c);
	printf("%d\n", (a * b) % c);
	printf("%d", ((a % c) * (b % c)) % c);
	return 0;
}