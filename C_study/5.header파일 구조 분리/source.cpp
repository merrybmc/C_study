#include <cstdio>
// 표준 입출력 헤더
// 콘솔 입출력과 파일 입출력에 관한 함수들이 포함
// printf(), scanf(), fseek() 등

#include <cmath>
// 수학 관련 함수
// sin(), cos(), tan(), exp(), pow() 등 사용 가능

#include <cstdlib>
// 각종 활용할 수 있는 라이브러리들을 모아놓은 함수들을 포함
// malloc() : 동적 메모리 할당
// free() : 동적 메모리 해제
// rand() : 난수 생성

#include <ctime>
// 시간 관련 함수 포함
// clock() : 현재 시간을 가져온다.
// time() : 시간만 가져온다. 등

#include "Header.h"
// 사용자 정의 헤더
// 일반적으로 프로그램은 하나의 소스코드로 만들어지지 않고
// 여러개의 소스코드로 만들어지는데 이런 소스코드들을 묶어줄 수 있는 것
// 사용자 정의 헤더는 <> 기호가 아닌 "" 기호로 include 한다.

void main() {
	// math basic
	printf("%f \n", pow(2.0, 10)); // 2의 10제곱
	printf("%f \n", sin(3.141592/2)); // sin

	// rand
	// srand를 통해 현재 시간을 가져와서 매번 시드를 초기화하여 값을 변경
	srand(time(0));
	// 난수 범위 지정 -> 나머지 연산 활용 % 10 = 0 ~ 9
	printf("%d \n", rand() % 10);

	
	int value1 = 100;
	int value2 = 200;

	int result = add(value1, value2);

	printf("%d", result);
	
	Marine m;
	m.hp = 100;
}

int add(int a, int b) {
	return a + b;
}
