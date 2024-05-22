#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstring>
// 문자열을 다루기 위한 함수의 선언을 담고 있음
// 1. strcpy() : 문자열을 복사하는 함수
// 2. strcmp() : 문자열을 비교하늖 함수
// 3. strcat() : 문자열을 이어붙이는 함수
// 4. strpos() : 문자열을 찾는 함수

// 문자열
// 문자의 배열, 문자 여러개가 나열된 형태
// 선언 방법으로 2가지 형태를 사용
// 1. char string[100];
// 2. const char* string; (포인터 사용)

void main() {
	char myString[100];

	// 문자열 할당
	strcpy(myString, "Hello World");

	// 문자열 출력
	printf("%s \n", myString);

	// 사용자로부터 문자열을 입력받기
	char myString2[100];

	// 99[^\n] - 99개의 문자열을 받고 줄바꿈 문자열은 받지 않겠다는 의미
	printf("문자열을 입력해주세요 : ");
	fseek(stdin, 0, SEEK_END);
	scanf("%99[^\n]s", myString2);

	printf("입력된 문자열은 %s 입니다. \n", myString2);

	char inputString[100];

	printf("문자열을 입력해주세요 : ");
	fseek(stdin, 0, SEEK_END);
	scanf("%99[^\n]s", inputString);

	char duplicatedString[100];
	//  문자열 복사
	strcpy(duplicatedString, inputString);
	printf("%s", duplicatedString);

	// strcmp
	// 앞에있는 HelloA가 B에 비해 사전적 우선순위가 높기 때문에 -1 return
	// 뒤에있는 문자가 더 높을 경우 1
	// 같을 경우 0
	// C/C++ 에선 문자열을 = 기호를 이용하여 비교를 절대 하면 안됨
	char str1[100];
	char str2[100];

	strcpy(str1, "HelloA");
	strcpy(str2, "HelloB");
	
	int result = strcmp(str1, str2);

	printf("%d \n", result); // -1

	// Null terminated String
	// scanf 에서 배열의 길이는 100으로 설정했는데 %99까지 해야되는 이유로
	// 일반적으로 컴퓨터에서 사용하는 문자열은 문자열의 끝을 null 문자열인 '\0' 을 넣어서 판단
	// printf 입장에서는 0이 나오기 전까지 지속적으로 다음 메모리들의 문자를 출력하려고 함
	// null 문자가 존재하는 곳이 문자열의 끝이기 때문

	char appleStr[100];

	appleStr[0] = 'a';
	appleStr[0] = 'p';
	appleStr[0] = 'p';
	appleStr[0] = 'l';
	appleStr[0] = 'e';
	appleStr[0] = 0;

	printf("%c \n", appleStr);

	// 연습
	// 사용자로부터 문자열 두 개를 입력받아
	// 두 문자열이 같다면 true
	// 다르다면 false 출력

	char inputChar1[100];
	char inputChar2[100];

	printf("문자를 입력하세요 : ");
	fseek(stdin, 0, SEEK_END);
	scanf("%99[^\n]s", inputChar1);

	printf("문자를 입력하세요 : ");
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

	printf("문자를 입력하세요 : ");
	fseek(stdin, 0, SEEK_END);
	scanf("%99[^\n]s", inputChar3);

	printf("문자를 입력하세요 : ");
	fseek(stdin, 0, SEEK_END);
	scanf("%99[^\n]s", inputChar4);

	for (int i = 0; i++) {
		if (inputChar3[i] == '\0') break;
		if (inputChar3[i] != inputChar4[i]) same = false;
	}
}