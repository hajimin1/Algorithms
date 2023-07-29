#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main(void) {
	char ori[1000000] = { 0, }; // 입력받은 문자열
	int count[26] = { 0, }; // A~Z 중 나온 것 count
	int max = 0;
	int len = 0;

	// 문자열 입력
	scanf("%s", &ori);
	len = strlen(ori); // 조건에 계속 돌리면 n타임이 계속 걸림
	
	// 입력받은 문자열의 소문자를 모두 대문자로 변환
	// 입력받은 문자열 중 알파벳이 각각 몇번 들어갔는지 카운팅
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