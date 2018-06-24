#pragma once
#include <stdio.h>

namespace B {
	inline int Add(int a, int b) {
		printf("B팀 더하기 함수\n");
		return (a + b) * 2;
	}
}