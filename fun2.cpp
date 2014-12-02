/*
 * =============================================================================
 *
 *       Filename:  fun2.cpp
 *
 *    Description:  函数
 *
 *        Version:  1.0
 *        Created:  Wednesday, December 03, 2014 12:54:34 CST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  lwq (28120), scue@vip.qq.com
 *   Organization:  
 *
 * =============================================================================
 */
#include <stdlib.h>
#include <iostream>

void duplicate(int& a, int& b, int& c);
void duplicate_p(int *a, int *b, int *c);

int main(int argc, char *argv[])
{
    int x(1), y(2), z(3);

    duplicate(x,y,z);
    std::cout << "x: "<< x << " y: "<< y << " z: " << z << std::endl;

    duplicate_p(&x,&y,&z);
    std::cout << "x: "<< x << " y: "<< y << " z: " << z << std::endl;

    return 0;
}

/*
 * 函数操作自身以外的变量
 * 使用引用的形式 int&
 */
void duplicate(int& a, int& b, int& c){
    a *= 2;
    b *= 2;
    c *= 2;
}

/*
 * 函数操作自动以外的变量
 * 但是这个是使用指针的形式，传入参数是一个地址，而非引用
 */
void duplicate_p(int *a, int *b, int *c){
    *a *= 2;
    *b *= 2;
    *c *= 2;
}
