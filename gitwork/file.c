/*====================================================
*   Copyright (C) 2019  All rights reserved.
*
*   文件名称：file.c
*   创 建 者：zx  2658159372@qq.com
*   创建日期：2019年11月01日
*   描    述：
================================================================*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	FILE *fp = fopen(argv[1],"w+");
	if(fp == NULL)
		perror("fopen");
	fputs("hell",fp);
	fputs("\n",fp);
	fclose(fp);
    return 0;
}
