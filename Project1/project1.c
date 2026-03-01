#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
char subject_name[51] = " ";
char class[3] = " ";
int main(void) {

	float grade_avg_sum = 0; // 전공과목별 (학점 X 과목평점)의 합
	float grade = 0.0f; // 학점
	float sum_grade = 0.0f; //학점 합계
	float grade_avg = 0.0f; // 학점 X 과목평점

	for (int i = 0; i < 20; i++) {
		bool isP = false;
		grade_avg = 0.0f;
		float class_to_grade = 0.0f; // 과목평점
		scanf("%s %f %s", subject_name, &grade, class);

		if (class[0] == 'A') {
			if (class[1] == '+') class_to_grade = 4.5f;
			else class_to_grade = 4.0f;
		}
		else if (class[0] == 'B') {
			if (class[1] == '+') class_to_grade = 3.5f;
			else class_to_grade = 3.0f;
		}
		else if (class[0] == 'C') {
			if (class[1] == '+') class_to_grade = 2.5f;
			else class_to_grade = 2.0f;
		}
		else if (class[0] == 'D') {
			if (class[1] == '+') class_to_grade = 1.5f;
			else class_to_grade = 1.0f;
		}
		else if (class[0] == 'F') {
			class_to_grade = 0.0f;
		}
		else if (class[0] == 'P') {
			// *** 계산에서 제외되야함 ***
			isP = true;
		}
		
		if (!isP) { 
			grade_avg = grade * class_to_grade; //학점 X 과목평점
			sum_grade += grade;
		}
		
		grade_avg_sum += grade_avg;
	}
	printf("%f", grade_avg_sum / sum_grade);
	
}
// 전공평점은 전공과목별(학점 × 과목평점)의 합을 학점의 총합으로 나눈 값이다.