#include <cstdio>

// �迭 Ȱ�� ���
// ������ ��� : int ������[�迭 ũ��]
// Ȱ���� ��� : ������[�迭 �ε���]

void main() {

	// basic
	int name[10];

	name[0] = 1;
	name[1] = 2;

	printf("%d\n", name[0]);

	int myArray[5] = { 1,5,10,20,100 };

	for (int i = 0; i < 5; i++) {
		printf("%d\n", myArray[i]);
	}

	// ������ ��
	// C���� �迭������ ���� ũ�� �Ѱ踦 ����� �а� ���� �ϴµ� �Ϲ����� ������ ����.
	// ������ ����� �� �� ���� ������ �߻��Ѵ�. �� ������ �����Ϳ� �����ִ�.
	int value[1];

	// Exception Thrown Error �߻�
	// value[3] = 10;

	// ������ �迭
	int multiArray[3][3]; // ����

	int multiArray2[3][3] = {
		{1, 2, 3},
		{2, 3, 4},
		{4, 5, 6} // �Ҵ�
	};

	for (int i = 0; i < 3; i++) {
		for (int k = 0; k < 3; k++) {
			multiArray[i][k] = i * k;
		}
	}

	for (int i = 0; i < 3; i++) {
		for (int k = 0; k < 3; k++) {
			printf("%d ", multiArray[i][k]);
		}
	}

	printf("\n");

	// ����
	int myArray2[20];
	int count = 2;

	for (int i = 0; i < 20; i++) {
		myArray2[i] = count;
		count += 2;
		printf("%d ", myArray2[i]);
	}

	printf("\n");

	// �Ǻ���ġ ����
	int fibo[20];

	fibo[0] = 1;
	fibo[1] = 1;

	for (int i = 2; i < 20; i++) {
		fibo[i] = fibo[i - 1] + fibo[i - 2];
		printf("%d ", fibo[i-2]);
	}

	printf("\n");

	// ����

	int myArr1[5][5];
	int myArr2[5][5];
	int myArr3[5][5];

	int myCount1 = 1;

	for (int i = 0; i < 5; i++) {
		for (int k = 0; k < 5; k++) {
			myArr1[i][k] = myCount1;
			myCount1++;
		}
	}

	int myCount2 = 1;

	for (int i = 0; i < 5; i++) {
		for (int k = 0; k < 5; k++) {
			myArr2[i][k] = myCount2 * 2;
			myCount2++;
		}
	}

	for (int i = 0; i < 5; i++) {
		for (int k = 0; k < 5; k++) {
			myArr3[i][k] = myArr1[i][k] + myArr2[i][k];
			printf("myArr3 : %d\n", myArr3[i][k]);
		}
	}

}