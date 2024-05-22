#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstring>
// ���ڿ��� �ٷ�� ���� �Լ��� ������ ��� ����
// 1. strcpy() : ���ڿ��� �����ϴ� �Լ�
// 2. strcmp() : ���ڿ��� ���ψe �Լ�
// 3. strcat() : ���ڿ��� �̾���̴� �Լ�
// 4. strpos() : ���ڿ��� ã�� �Լ�

// ���ڿ�
// ������ �迭, ���� �������� ������ ����
// ���� ������� 2���� ���¸� ���
// 1. char string[100];
// 2. const char* string; (������ ���)

void main() {
	char myString[100];

	// ���ڿ� �Ҵ�
	strcpy(myString, "Hello World");

	// ���ڿ� ���
	printf("%s \n", myString);

	// ����ڷκ��� ���ڿ��� �Է¹ޱ�
	char myString2[100];

	// 99[^\n] - 99���� ���ڿ��� �ް� �ٹٲ� ���ڿ��� ���� �ʰڴٴ� �ǹ�
	printf("���ڿ��� �Է����ּ��� : ");
	fseek(stdin, 0, SEEK_END);
	scanf("%99[^\n]s", myString2);

	printf("�Էµ� ���ڿ��� %s �Դϴ�. \n", myString2);

	char inputString[100];

	printf("���ڿ��� �Է����ּ��� : ");
	fseek(stdin, 0, SEEK_END);
	scanf("%99[^\n]s", inputString);

	char duplicatedString[100];
	//  ���ڿ� ����
	strcpy(duplicatedString, inputString);
	printf("%s", duplicatedString);

	// strcmp
	// �տ��ִ� HelloA�� B�� ���� ������ �켱������ ���� ������ -1 return
	// �ڿ��ִ� ���ڰ� �� ���� ��� 1
	// ���� ��� 0
	// C/C++ ���� ���ڿ��� = ��ȣ�� �̿��Ͽ� �񱳸� ���� �ϸ� �ȵ�
	char str1[100];
	char str2[100];

	strcpy(str1, "HelloA");
	strcpy(str2, "HelloB");
	
	int result = strcmp(str1, str2);

	printf("%d \n", result); // -1

	// Null terminated String
	// scanf ���� �迭�� ���̴� 100���� �����ߴµ� %99���� �ؾߵǴ� ������
	// �Ϲ������� ��ǻ�Ϳ��� ����ϴ� ���ڿ��� ���ڿ��� ���� null ���ڿ��� '\0' �� �־ �Ǵ�
	// printf ���忡���� 0�� ������ ������ ���������� ���� �޸𸮵��� ���ڸ� ����Ϸ��� ��
	// null ���ڰ� �����ϴ� ���� ���ڿ��� ���̱� ����

	char appleStr[100];

	appleStr[0] = 'a';
	appleStr[0] = 'p';
	appleStr[0] = 'p';
	appleStr[0] = 'l';
	appleStr[0] = 'e';
	appleStr[0] = 0;

	printf("%c \n", appleStr);

	// ����
	// ����ڷκ��� ���ڿ� �� ���� �Է¹޾�
	// �� ���ڿ��� ���ٸ� true
	// �ٸ��ٸ� false ���

	char inputChar1[100];
	char inputChar2[100];

	printf("���ڸ� �Է��ϼ��� : ");
	fseek(stdin, 0, SEEK_END);
	scanf("%99[^\n]s", inputChar1);

	printf("���ڸ� �Է��ϼ��� : ");
	fseek(stdin, 0, SEEK_END);
	scanf("%99[^\n]s", inputChar2);

	int result2 = strcmp(inputChar1, inputChar2);

	printf("%d \n", result2);

	if (result2 == 0) {
		printf("true");
	}
	else {
		printf("false");
	}

	char inputChar3[100];
	char inputChar4[100];

	bool same = true;

	printf("���ڸ� �Է��ϼ��� : ");
	fseek(stdin, 0, SEEK_END);
	scanf("%99[^\n]s", inputChar3);

	printf("���ڸ� �Է��ϼ��� : ");
	fseek(stdin, 0, SEEK_END);
	scanf("%99[^\n]s", inputChar4);

	for (int i = 0; i++) {
		if (inputChar3[i] == '\0') break;
		if (inputChar3[i] != inputChar4[i]) same = false;
	}
}