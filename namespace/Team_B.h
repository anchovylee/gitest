#pragma once
#include <stdio.h>

namespace B {
	inline int Add(int a, int b) {
		printf("B�� ���ϱ� �Լ�\n");
		return (a + b) * 2;
	}
}