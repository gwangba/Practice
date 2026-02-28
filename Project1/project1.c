#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n;

	scanf("%d", &n);
	
	for (int i = 0; i <=(2 * n - 1)/2; i++) { //첫째줄부터 절반까지의 상단 부분
		
			for(int j =0; j<n-i-1; j++){
				printf(" ");
			}
			for (int j = 0; j < (i+1)*2-1; j++) {
				printf("*");
			}
			
		
		printf("\n");
	}

	for (int i = 0; i < 2 * n - 1;i++) { //절반부터 마지막 줄까지의 하단 부분
		
			for(int j =0; j<i+1; j++){
				printf(" ");
			}
			for (int j = 0; j < (2*n-1)-(i+1)*2; j++) {
				printf("*");
			}
			
		
		printf("\n");
	}


} // n-1 번 공백, 1번 별, n-1번 공백
// n-2 번 공백, 3번 별, n-2번 공백