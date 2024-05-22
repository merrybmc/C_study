#include <cstdio>

// 논리 연산자
// && : 논리적 and 연산 true
// || : 논리적 or 연산 false


// 비교 연산자
// ==, !=, >, <, <=, >=

void main() {
	int value1 = 1;
	int value2 = 2;

	int value3 = 10;
	int value4 = 20;

	if (value1 == value2 && value3 == value4) {
		printf("value1과 value2는 서로 같습니다. 그리고 value3과 value4는 같습니다.\n");
	}
	else if (value1 > value2 || value3 < value4) {
		printf("value1은 value2보다 크거나 value3은 value4보다 작습니다.\n");
	}
	else {
		printf("value1은 value2보다 작습니다.\n");
	}

	// 반복문 for

	int count = 0;

	int input;
	printf("숫자를 입력해주세요 : ");

	fseek(stdin, 0, SEEK_END);
	scanf_s("%d", &input);

	for (int i = 0; i < input; i++) {
		count = count + 10;
	}
	printf("count: %d\n", count);

	// 무한 반복문
	for (;;) {
		printf("반복문입니다. 숫자를 입력하세요 : ");
		int input;
		fseek(stdin, 0, SEEK_END);
		scanf_s("%d", &input);

		if (input == 0) {
			continue; // 반복문의 처음으로 돌아감
		}
		else if (input == 1) {
			break; // 반복문을 벗어남
		}
		printf("반복문의 마지막 입니다.\n");
	}

	// 정사각형
	for (int i = 0; i < 5; i++) {
		for (int k = 0; k < 5; k++) {
			printf("*");
		}
		printf("\n");
	}


	printf("\n");

	// 직각삼각형
	for (int i = 0; i < 5; i++) {
		for (int k = 0; k < i + 1; k++) {
			printf("*");
		}
		printf("\n");
	}

	printf("\n");

	// 역직각삼각형
	for (int i = 5; i >= 0; i--) {
		for (int k = 0; k < i - 1; k++) {
			printf("*");
		}
		printf("\n");
	}

	printf("\n");

	// 직각삼각형 2
	for (int i = 0; i < 5; i++) {
		for (int k = 0; k < 5 - i - 1; k++) {
			printf(" ");
		}
		for (int k = 0; k < i + 1; k++) {
			printf("*");
		}
		printf("\n");
	}
}