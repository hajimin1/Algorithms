#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	long long int A = 0, B = 0, V = 0;
	scanf("%d %d %d", &A, &B, &V);
	if ((V - A) % (A - B) == 0) {
		printf("%d", (V - A) / (A - B) + 1);
	}
	else {
		printf("%d", (V - A) / (A - B) + 2);
	}
	
	return 0;
}