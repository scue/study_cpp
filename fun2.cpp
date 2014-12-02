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

void duplicate(int&, int&, int&);
void duplicate_p(int*, int*, int*);

/* 只能在声明时候设定默认值 */
int divide(int, int=2);
// int divide(int, int b=2); 与上式相等

/* 函数重载 */
float divide(float, float=2.0);

int main(int argc, char *argv[])
{
    int x(1), y(2), z(3);

    duplicate(x,y,z);
    std::cout << "x: "<< x << " y: "<< y << " z: " << z << std::endl;

    duplicate_p(&x,&y,&z);
    std::cout << "x: "<< x << " y: "<< y << " z: " << z << std::endl;

    /* 这里若不定义x1,y1变量，而直接 divide(12,3), 编译器不能知道将调用哪个函数 */
    /* 报错内容: error: call to 'divide' is ambiguous */
    int x1(12),y1(3);
    std::cout << "默认参数值: 12/defaut = " << divide(x1) << std::endl;
    std::cout << "默认参数值: 12/3 = " << divide(x1,y1) << std::endl;

    float a(15.1), b(3.8);
    std::cout << "默认参数值: 15.1/defaut = " << divide(a) << std::endl;
    std::cout << "默认参数值: 15.1/3.8 = " << divide(a,b) << std::endl;

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

/*
 * 参数默认值
 */
int divide(int a, int b){
    return a/b;
}

float divide(float a, float b){
    return a/b;
}
