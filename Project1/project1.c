#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
char A[101] = " ";
int alphabet[26] = { 0 };
int main(void) {

	int count =0;
	int n;
	scanf("%d", &n);
	

	for (int i = 0; i < n; i++) {
		bool isgroup = true;
		A[0] = '\0';
		memset(alphabet, 0, sizeof(alphabet));
		scanf("%s", A);
		for (int j = 0; A[j] != '\0'; j++) {
			
			if (alphabet[(int)A[j] - 'a'] != 0) {
				isgroup = false; // 2. 해당 인덱스가 이미 나온적 있으면 그룹단어가 아님
				break;
			}
			if (A[j] != A[j + 1]) { // 1. 만약 그 다음 인덱스에 다른 문자가 왔는데
				alphabet[(int)A[j] - 'a']++; // (해당 알파벳 이미 나왔음 alphabet[i] 가 1이라면 이미 나왔단 얘기)

			}


		}
		if(isgroup)
			count++;
		
	}
	printf("%d", count);
	
}
//만약 그 다음 인덱스에 다른 문자가 왔는데 또 같은 문자를 받는다면 그룹단어가 아님