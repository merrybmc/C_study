// 전처리
// 표준 입출력(콘솔 입출력)을 사용하겠다는 의미
#include <cstdio>

// 프로그램의 최초 진입점을 의미
// 모든 프로그램은 이 main 함수를 가지고 있어야 한다.
int main() {
	// 콘솔 출력을 하는 구문
	// \n = 줄바꿈
	printf("Hello World\n");
	printf("Hello C Language\n");

	// 변수 (Variable)
	// 기본형 데이터를 저장하는 저장 공간
	// 
	// 할당 및 선언, 간단한사칙연산
	int name = 100;
	int apple = 200;
	int minus = -500;

	int cherry;

	cherry = 200;
	cherry = 400;

	cherry = 3 * 7;

	minus = apple * 5;

	int value = (3 + 7) * 5;

	// 변수 출력 %d
	printf("저장된 값은 %d 입니다. \n 체리는 %d 입니다.", value, cherry);

	return 0;
}