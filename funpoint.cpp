/*
 * =============================================================================
 *
 *       Filename:  funpoint.cpp
 *
 *    Description:  函数指针
 *
 *        Version:  1.0
 *        Created:  Friday, December 05, 2014 10:32:59 CST
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

int additon(int, int);
int subtraction(int, int);

int (*minus)(int, int) = subtraction;           /* minus 指向 subtraction函数 */
int operation(int, int, int (*)(int, int));     /* 函数作为传递参数 */


int main(int argc, char *argv[]) {
    
    int m, n;
    m = operation(7, 5, additon);
    n = operation(20, m, minus);
    std::cout << "m: " << m << " n: " << n << std::endl;
    return 0;
}

int additon(int a, int b) {
   return (a+b);
}

int subtraction(int a, int b) {
   return (a-b);
}

int operation(int x, int y, int (*functocall)(int, int)) {
    int g;
    g = (*functocall)(x, y);
    return g;
}
