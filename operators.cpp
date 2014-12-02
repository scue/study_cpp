/*
 * =============================================================================
 *
 *       Filename:  operators.cpp
 *
 *    Description:  操作运算，运算符
 *
 *        Version:  1.0
 *        Created:  Tuesday, December 02, 2014 11:46:44 CST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  lwq (28120), scue@vip.qq.com
 *   Organization:  
 *
 * =============================================================================
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    
    /* 逗号运行符:
     * 逗号运算符 (,) 用来分开多个表达式，并只取最右边的表达式的值返回。
     * */
    int a(0),b(0);
    printf("first: a=%d, b=%d\n", a,b);
    a=(b=3,b+2);
    printf("second: a=%d, b=%d\n", a,b);

    return 0;
}
