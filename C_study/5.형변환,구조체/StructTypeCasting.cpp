#include <cstdio>

    // ����ü
	// ������ �ѵ� ��� �������� �� �ִ� ������ ������ ����
    // Ŭ������ ����
struct Marine {
	int hp;
	int atk;
	int def;
};

void main() {
	// �Ǽ� �ڷ���
	float myFloat = 3.14f;
	printf("%f \n", myFloat);

	// ����ȯ (Ÿ�� ĳ����)
	// C,C++�� ����ȯ�� �� �� ������ �Լ��� �޼���, ������ ���� '=' ��ȣ �ϳ������� ����ȯ ����
	// �̸� �Ϲ��� ����ȯ 'implicit' �̶�� �θ���.
	// ���α׷��Ӱ� Ÿ���� ������� �ʾƵ� ��� ��ü���� �˾Ƽ� ����ȯ�� �ڵ����� ���ִ� ��
	int integer_number = 100;
	float real_number;

	real_number = integer_number;

	printf("%f \n", real_number); // 100.00

	// ������ �ǵ�ġ ���� ����� ���� �� �ִ�.
	int number1 = 10;
	int number2 = 4;
	float result = number1 / number2; // ���������� ���� ������. �׷��� 2�� ���´�.
	float results = (float)number1 / (float)number2; // �ǵ��ϴ� �ٸ� ����ϰ� ���� ��

	printf("%f \n", result);

	float number3 = 10.0;
	float number4 = 0.1;
	int result2 = number3 - number4; // 9.9

	printf("%d \n", result2); // 9

	// ������ Ÿ�� �κп� ����ü�� �̸��� ����
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