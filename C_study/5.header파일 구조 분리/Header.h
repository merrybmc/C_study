#pragma once
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <ctime>

// 함수 원형 선언
// 이렇게 형태를 선언해줄 경우 main 함수 밑에서 함수 내부 코드 작성 가능
int add(int a, int b);

struct Marine {
	int hp;
	int mp;
	int atk;
	int def;
};