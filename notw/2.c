/*====================================================
*   Copyright (C) 2019  All rights reserved.
*
*   文件名称：2.c
*   创 建 者：zx  2658159372@qq.com
*   创建日期：2019年11月01日
*   描    述：
================================================================*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
	srand(time(NULL));
	for(int i=0;i<10;i++)
		printf("%d\n",rand()%10);
    return 0;
}
