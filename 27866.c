#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	char S[1000];
	int i;
	scanf("%s", &S); // scanf_s로 했을 시 자꾸 예외발생
	scanf("%d", &i);

	printf("%c", S[i - 1]);
	return 0;
}