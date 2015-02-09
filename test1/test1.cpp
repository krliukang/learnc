// test1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "stdio.h"

typedef struct
{
	int a;
	int b;
}sdsd;

typedef struct
{
	int d[2];
}sdsd1;

int main(void)
{
	int i,uu;
	sdsd c[2],*m;
	sdsd1 w,w1;

	w.d[0] = 1;
	w.d[1] = 0;

	memcpy(&w1,&w,sizeof(w));
	printf("%d",w1.d[0]);
}

