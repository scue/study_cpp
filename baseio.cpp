/*
 * =============================================================================
 *
 *       Filename:  baseio.cpp
 *
 *    Description:  基本输入输出
 *
 *        Version:  1.0
 *        Created:  Wednesday, December 03, 2014 12:10:58 CST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  lwq (28120), scue@vip.qq.com
 *   Organization:  
 *
 * =============================================================================
 */
#include <stdlib.h>
#include <stdio.h>

/*
 * Linux: /usr/include/c++/4.8/iostream
 * Windows: <iostream.h>
 */
#include <iostream>

#include <string.h>

int main(int argc, char *argv[])
{
    /*
     * base stdout:
     */
    int x(100);
    std::cout << "Output sentence" << std::endl;
    std::cout << 120 << std::endl;
    std::cout << x << std::endl;
    std::cout << x - 120 << std::endl;

    /*
     * base stdin
     */
    int age(0);
    std::cout << "Please input your age: ";
    std::cin >> age;
    std::cout << "Your age: " << age << std::endl;

    int high(0), weigh(0);
    std::cout << "Please input your high & weigh: ";
    std::cin >> high >> weigh;
    std::cout << "Your high: " << high << " & your weigh: " << weigh << std::endl;

    /*
    *  字符串name不能赋值为NULL, 否则报错:
    *  terminate called after throwing an instance of 'std::logic_error'
    *  what():  basic_string::_S_construct null not valid     
    */
    std::string name;
    std::cout << "Origin name: [" << name << "]" << std::endl;
    std::cout << "Please input your name: ";
    std::cin >> name;
    std::cout << "Your name: " << name << std::endl;

    return 0;
}