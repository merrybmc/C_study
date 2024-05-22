#include <cstdio>

void main() {

	// 1. boolean
	bool myBool = false;

	// 2. char
	// 1byte (8bit)
	// -128 ~ 127 숫자를 저장
	// 대부분의 문자 / 문자열을 저장하며 유용하게 사용
	// 1글자만 저장된다.
	char myChar = 'A';

	// 3. int
	// 4byte (32bit)
	// -2,147,483,648 ~ 2,147,483,647 숫자를 저장
	// integer의 약자로 정수를 의미
	// 컴퓨터에서 가장 빨리 수행할 수 있는 정수 연산 단위
	int myInt = 2040;

	// 4. float
	// 4byte (32bit)
	// float point의 약자
	// 부동 소수점수로 우리가 흔히 실수형태의 자료형을 사용할 때 씀
	// 숫자 뒤에 'f' 접미사를 붙여야함, C/C++에선 생략 가능
	float pi = 3.1415f;

	// 5. double
	// 8byte (64bit)
	// double precision float point의 약자
	// 2배 정밀한 숫자를 가지는 소수점수
	// float보다 표현 범위가 더 넓다.
	double myDouble = 3.1415;

	// 실수형태는 정확한 숫자를 제공하는게 아니라 근사치를 제공
	// 이유는 컴퓨터는 2진법을 사용하기 때문에 10진법을 소수점 수를 이진법으로 옮기게 되면 대부분의 경우 근사치의 2진 순환소수점수가 됨
	// 10진법에 기반한 계산을 하면 되지만 속도가 엄청나게 느려진다.
	// 연산 속도 = 정수형 덧셈 뺄셈 > 정수형 곱셈 나눗셈 > 실수형 덧셈 뺄셈 > 실수형 곱셈 나눗셈
	printf("pi: %.24f \n", pi); // 24번째 소수점까지 표시

	// 문자열 출력
	printf("myChar: %c \n", myChar);

	// char에 숫자를 넣고 출력하면 ascii 코드 형변환을 통해 문자가 출력된다.
	char c = 97;
	printf("myChar: %c \n", c); // a

	if (97 == 'a') {
		printf("97은 a입니다. \n");
	}

	// 문자 입력받기

	char input;
	fseek(stdin, 0, SEEK_END);
	scanf_s("%c", &input);
	printf("myChar: %c \n", input);
}