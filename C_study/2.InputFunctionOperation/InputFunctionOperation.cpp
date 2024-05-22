#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

void inputFunction() {

	// 사용자 입력 - scanf
	// C/C++ 에서는 사용자로부터 입력을 받기 위해 scanf라는 구문을 활용한다.
	// 활용법은 printf와 비슷하지만 변수의 앞에 &(앰퍼샌드)를 꼭 붙여줘야 한다.
	int input;

	printf("값을 입력하세요 : ");

	scanf_s("%d", &input);

	printf("입력된 값 : %d\n", input);
}

int myValue(int a, int b,int c) {
	return a+b/c;
}

int sum(int a,int b) {
	return a + b;
}

// main 함수는 C/C++에서 프로그램 시작 시 자동으로 실행되는 함수
// 모든 C/C++ 프로그램은 main 함수가 존재한다.
void main() {
	// 연산
	// +, -, *, /, %

	int value1 = 5 + 6;
	printf("%d\n", value1);

	int value2 = 10 - 24;
	printf("%d\n", value2);

	int value3 = 5 * 4;
	printf("%d\n", value3);
	
	int value4 = 10 / 2;
	printf("%d\n", value4);

	int value5 = 50 % 3;
	printf("%d\n", value5);
	

	// 단항연산자
	// ++, --
	
	int valueAdd = 10;
	valueAdd++;

	printf("valueAdd: %d\n", valueAdd);

	int valueSub = 50;
	--valueSub;

	printf("valueSub: %d\n", valueSub);

	// 함수 호출
	inputFunction();

	int value = myValue(10,20,30);
	
	printf("value: %d\n", value);

	int myValue = -512;

	printf("myValue: %d\n", myValue);

	int mySum = sum(5, 10);

	printf("mySum: %d\n", mySum);

	int square;

	printf("값을 입력하세요 : ");

	scanf_s("%d", &square);

	printf("square: %d", square * square);
}

