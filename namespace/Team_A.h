#pragma once
#include <stdio.h>

namespace A {
	inline int Add(int a, int b) {
		printf("A팀 더하기 함수\n");
		return a + b;
	}
}