#include<stdio.h>
#include<stdlib.h>


int main(void) {
	int k, n, t;
	// ���� ȣ���� ���� �Ҵ�
	int** ap = (int**)calloc(sizeof(int*), 15);
	for (int i = 0; i < 15; i++) {
		ap[i] = (int*)calloc(sizeof(int), 15);
	}

	// 0���� �ִ� ���� iȣ���� i��
	for (int j = 0; j < 15; j++) {
		ap[0][j] = j;
	}



	for (int x = 1; x < 15; x++) {
		for (int y = 1; y < 15; y++) {
			ap[x][y] = ap[x - 1][y] + ap[x][y - 1];
		}
	}

	scanf_s("%d", &t);
	for (int m = 0; m < t; m++) {
		scanf_s("%d", &k);
		scanf_s("%d", &n);

		printf("%d\n", ap[k][n]);
	}
	return 0;
}