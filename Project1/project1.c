#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
char A[1000001] = " ";
int alphabet[26] = { 0 }; // 알파벳 갯수 세기

int main(void) {
	scanf("%s", A);

	for (int i = 0; A[i] != '\0'; i++) {
		if (A[i] >= 'a' && A[i] <= 'z') { // 소문자 일 때
			alphabet[A[i] - 'a']++;
		}
		else // 대문자 일 때
			alphabet[A[i] - 'A']++;
	}

	int max = -1;
	char result = '?';

	for (int i = 0; i < 26; i++) {
		if (alphabet[i] > max) {
			max = alphabet[i];
			result = i + 'A';
		}
		else if (alphabet[i] == max) {
			result = '?';
		}
	}

	printf("%c", result);
}