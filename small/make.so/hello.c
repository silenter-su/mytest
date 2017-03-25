/*
 * =====================================================================================
 *
 *       Filename:  hello.c
 *
 *    Description:  实验静态动态库
 *
 *        Version:  1.0
 *        Created:  2017年03月25日 16时35分41秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>

void hello(const char *name)
{
	printf("Hello %s!\n", name);
}

