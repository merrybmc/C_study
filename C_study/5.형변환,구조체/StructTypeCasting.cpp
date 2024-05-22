#include <cstdio>

    // 구조체
	// 변수를 한데 묶어서 관리해줄 수 있는 일종의 변수의 집합
    // 클래스와 유사
struct Marine {
	int hp;
	int atk;
	int def;
};

void main() {
	// 실수 자료형
	float myFloat = 3.14f;
	printf("%f \n", myFloat);

	// 형변환 (타입 캐스팅)
	// C,C++는 형변환을 할 때 별도의 함수나 메서드, 생성자 없이 '=' 기호 하나만으로 형변환 가능
	// 이를 암묵적 형변환 'implicit' 이라고 부른다.
	// 프로그래머가 타입을 명시하지 않아도 언어 자체에서 알아서 형변환을 자동으로 해주는 것
	int integer_number = 100;
	float real_number;

	real_number = integer_number;

	printf("%f \n", real_number); // 100.00

	// 하지만 의도치 않은 결과가 나올 수 있다.
	int number1 = 10;
	int number2 = 4;
	float result = number1 / number2; // 정수형으로 먼저 나눈다. 그래서 2가 나온다.
	float results = (float)number1 / (float)number2; // 의도하는 바를 출력하고 싶을 때

	printf("%f \n", result);

	float number3 = 10.0;
	float number4 = 0.1;
	int result2 = number3 - number4; // 9.9

	printf("%d \n", result2); // 9

	// 변수의 타입 부분에 구조체의 이름을 선언
	Marine m1;
	m1.hp = 40;
	m1.atk = 6;
	m1.def = 1;

	printf("hp : %d, atk : %d, def : %d \n", m1.hp, m1.atk, m1.def);

	Marine m2;
	m2.hp = 60;
	m2.atk = 10;
	m2.def = 0;

	printf("hp : %d, atk : %d, def : %d \n", m2.hp, m2.atk, m2.def);

	Marine m[10];
	m[0].hp = 100;
	m[0].atk = 3;
	m[0].def = 2;

	printf("hp : %d, atk : %d, def : %d \n", m[0].hp, m[0].atk, m[0].def);
}