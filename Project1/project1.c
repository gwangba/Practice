#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
char A[1000001] = " ";

int main(void) {
	scanf("%s", A);
	int count = 0;
	for (int i = 0; A[i] != '\0'; i++) {

		if (A[i] == 'c' && A[i + 1] == '=')

			i++; // 다다음 인덱스로 점프
		else if (A[i] == 'c' && A[i + 1] == '-') i++;
		else if (A[i] == 'd' && A[i + 1] == 'z' && A[i + 2] == '=') {

			i = i + 2; // 다다다음 으로 점프
		}
		else if (A[i] == 'd' && A[i + 1] == '-') {

			i++;
		}
		else if (A[i] == 'l' && A[i + 1] == 'j') i++;
		else if (A[i] == 'n' && A[i + 1] == 'j') i++;
		else if (A[i] == 'n' && A[i + 1] == 'j') i++;
		else if (A[i] == 's' && A[i + 1] == '=') i++;
		else if (A[i] == 'z' && A[i + 1] == '=') i++;
		count++;
	}

	printf("%d", count);
}
/* č	c=
ć	c-
dž	dz=
đ	d-
lj	lj
nj	nj
š	s=
ž	z= */