#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main(void) {
	char ori[1000000] = { 0, }; // �Է¹��� ���ڿ�
	int count[26] = { 0, }; // A~Z �� ���� �� count
	int max = 0;
	int len = 0;

	// ���ڿ� �Է�
	scanf("%s", &ori);
	len = strlen(ori); // ���ǿ� ��� ������ nŸ���� ��� �ɸ�
	
	// �Է¹��� ���ڿ��� �ҹ��ڸ� ��� �빮�ڷ� ��ȯ
	// �Է¹��� ���ڿ� �� ���ĺ��� ���� ��� ������ ī����
	for (int i = 0; i < len; i++) {
		if (ori[i] >= 'a' && ori[i] <= 'z') {
			ori[i] -= 32;
		}
		count[ori[i] - 65]++;
	}

	
	for (int i = 0; i < 26; i++) {
		if (count[max] < count[i]) {
			max = i;
		}
	}

	for (int i = 0; i < 26; i++) {
		if (max != i && count[max] == count[i]) {
			printf("?");
			return 0;
		}
	}
	printf("%c", max + 65);

	return 0;
}