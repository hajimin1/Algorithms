#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main(void) {
	char num[100000] = { 0, }; // ���ڿ��� �ִ� ���ڵ��� ��� �ϳ��ϳ� ���ؾ��ϱ� ������ char ���
	int len = 0, flat = 1;
	while (1) {
		scanf("%s", &num);
		int start = 0, end = 0;
		if (!strcmp(num, "0")) {
			break;
		}
		len = strlen(num);
		end = len - 1;
		
		for ( ; start <= end; ) {
			if (num[start] == num[end]) {
				flat = 1;
				start++;
				end--;
			}
			else {
				flat = 0;
				break;
			}
		}
		if (flat == 1) {
			printf("yes\n");
		}
		else if (flat == 0) {
			printf("no\n");
		}
		
	}

	

	return 0;

}