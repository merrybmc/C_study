#include <cstdio>
// ǥ�� ����� ���
// �ܼ� ����°� ���� ����¿� ���� �Լ����� ����
// printf(), scanf(), fseek() ��

#include <cmath>
// ���� ���� �Լ�
// sin(), cos(), tan(), exp(), pow() �� ��� ����

#include <cstdlib>
// ���� Ȱ���� �� �ִ� ���̺귯������ ��Ƴ��� �Լ����� ����
// malloc() : ���� �޸� �Ҵ�
// free() : ���� �޸� ����
// rand() : ���� ����

#include <ctime>
// �ð� ���� �Լ� ����
// clock() : ���� �ð��� �����´�.
// time() : �ð��� �����´�. ��

#include "Header.h"
// ����� ���� ���
// �Ϲ������� ���α׷��� �ϳ��� �ҽ��ڵ�� ��������� �ʰ�
// �������� �ҽ��ڵ�� ��������µ� �̷� �ҽ��ڵ���� ������ �� �ִ� ��
// ����� ���� ����� <> ��ȣ�� �ƴ� "" ��ȣ�� include �Ѵ�.

void main() {
	// math basic
	printf("%f \n", pow(2.0, 10)); // 2�� 10����
	printf("%f \n", sin(3.141592/2)); // sin

	// rand
	// srand�� ���� ���� �ð��� �����ͼ� �Ź� �õ带 �ʱ�ȭ�Ͽ� ���� ����
	srand(time(0));
	// ���� ���� ���� -> ������ ���� Ȱ�� % 10 = 0 ~ 9
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
