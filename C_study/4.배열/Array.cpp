#include <cstdio>

// 배열 활용 방법
// 선언의 경우 : int 변수명[배열 크기]
// 활용의 경우 : 변수명[배열 인덱스]

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

	// 주의할 점
	// C언어는 배열변수의 값의 크기 한계를 벗어나서 읽고 쓰고 하는데 일반적인 제약이 없다.
	// 하지만 벗어나면 알 수 없는 오류가 발생한다. 이 문제는 포인터와 관련있다.
	int value[1];

	// Exception Thrown Error 발생
	// value[3] = 10;

	// 다차원 배열
	int multiArray[3][3]; // 선언

	int multiArray2[3][3] = {
		{1, 2, 3},
		{2, 3, 4},
		{4, 5, 6} // 할당
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

	// 연습
	int myArray2[20];
	int count = 2;

	for (int i = 0; i < 20; i++) {
		myArray2[i] = count;
		count += 2;
		printf("%d ", myArray2[i]);
	}

	printf("\n");

	// 피보나치 수열
	int fibo[20];

	fibo[0] = 1;
	fibo[1] = 1;

	for (int i = 2; i < 20; i++) {
		fibo[i] = fibo[i - 1] + fibo[i - 2];
		printf("%d ", fibo[i-2]);
	}

	printf("\n");

	// 연습

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