#include <cstdio>

// �� ������
// && : ���� and ���� true
// || : ���� or ���� false


// �� ������
// ==, !=, >, <, <=, >=

void main() {
	int value1 = 1;
	int value2 = 2;

	int value3 = 10;
	int value4 = 20;

	if (value1 == value2 && value3 == value4) {
		printf("value1�� value2�� ���� �����ϴ�. �׸��� value3�� value4�� �����ϴ�.\n");
	}
	else if (value1 > value2 || value3 < value4) {
		printf("value1�� value2���� ũ�ų� value3�� value4���� �۽��ϴ�.\n");
	}
	else {
		printf("value1�� value2���� �۽��ϴ�.\n");
	}

	// �ݺ��� for

	int count = 0;

	int input;
	printf("���ڸ� �Է����ּ��� : ");

	fseek(stdin, 0, SEEK_END);
	scanf_s("%d", &input);

	for (int i = 0; i < input; i++) {
		count = count + 10;
	}
	printf("count: %d\n", count);

	// ���� �ݺ���
	for (;;) {
		printf("�ݺ����Դϴ�. ���ڸ� �Է��ϼ��� : ");
		int input;
		fseek(stdin, 0, SEEK_END);
		scanf_s("%d", &input);

		if (input == 0) {
			continue; // �ݺ����� ó������ ���ư�
		}
		else if (input == 1) {
			break; // �ݺ����� ���
		}
		printf("�ݺ����� ������ �Դϴ�.\n");
	}

	// ���簢��
	for (int i = 0; i < 5; i++) {
		for (int k = 0; k < 5; k++) {
			printf("*");
		}
		printf("\n");
	}


	printf("\n");

	// �����ﰢ��
	for (int i = 0; i < 5; i++) {
		for (int k = 0; k < i + 1; k++) {
			printf("*");
		}
		printf("\n");
	}

	printf("\n");

	// �������ﰢ��
	for (int i = 5; i >= 0; i--) {
		for (int k = 0; k < i - 1; k++) {
			printf("*");
		}
		printf("\n");
	}

	printf("\n");

	// �����ﰢ�� 2
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