#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

void inputFunction() {

	// ����� �Է� - scanf
	// C/C++ ������ ����ڷκ��� �Է��� �ޱ� ���� scanf��� ������ Ȱ���Ѵ�.
	// Ȱ����� printf�� ��������� ������ �տ� &(���ۻ���)�� �� �ٿ���� �Ѵ�.
	int input;

	printf("���� �Է��ϼ��� : ");

	scanf_s("%d", &input);

	printf("�Էµ� �� : %d\n", input);
}

int myValue(int a, int b,int c) {
	return a+b/c;
}

int sum(int a,int b) {
	return a + b;
}

// main �Լ��� C/C++���� ���α׷� ���� �� �ڵ����� ����Ǵ� �Լ�
// ��� C/C++ ���α׷��� main �Լ��� �����Ѵ�.
void main() {
	// ����
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
	

	// ���׿�����
	// ++, --
	
	int valueAdd = 10;
	valueAdd++;

	printf("valueAdd: %d\n", valueAdd);

	int valueSub = 50;
	--valueSub;

	printf("valueSub: %d\n", valueSub);

	// �Լ� ȣ��
	inputFunction();

	int value = myValue(10,20,30);
	
	printf("value: %d\n", value);

	int myValue = -512;

	printf("myValue: %d\n", myValue);

	int mySum = sum(5, 10);

	printf("mySum: %d\n", mySum);

	int square;

	printf("���� �Է��ϼ��� : ");

	scanf_s("%d", &square);

	printf("square: %d", square * square);
}

