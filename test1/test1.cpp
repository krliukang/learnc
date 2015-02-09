// test1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "stdio.h"


int main(void)
{
	unsigned int a = 0 , d = 0;
	unsigned int b = 4294957762;
	unsigned int c = 3466;

	a = c - b;
	if (b <= 0)
		d = 5;
	if (b >0)
		d = 10;
	return 0;
}

