#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	char S[1000];
	int i;
	scanf("%s", &S); // scanf_s�� ���� �� �ڲ� ���ܹ߻�
	scanf("%d", &i);

	printf("%c", S[i - 1]);
	return 0;
}