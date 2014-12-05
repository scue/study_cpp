/*
 * =============================================================================
 *
 *       Filename:  charsequence.cpp
 *
 *    Description:  字符串、字符序列
 *
 *        Version:  1.0
 *        Created:  Friday, December 05, 2014 09:34:38 CST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  lwq (28120), scue@vip.qq.com
 *   Organization:  
 *
 * =============================================================================
 */
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
    char *seq1 = "hello";                       /* 8字节, 有报警 */
    char seq2[] = "hello";                      /* 6字节, 自动加 \0 */
    char seq3[20] = "hello";                    /* 20字节, 自动加 \0 */
    char seq4[] = {'h', 'e', 'l', 'l', 'o'};    /* 5字节，不加 \0 */

    printf("seq1: %s, size: %lu\n", seq1, sizeof(seq1));
    printf("seq2: %s, size: %lu\n", seq2, sizeof(seq2));
    printf("seq3: %s, size: %lu\n", seq3, sizeof(seq3));
    printf("seq4: %s, size: %lu\n", seq4, sizeof(seq4));

    /*
     * atoi 转整形
     * atol 转长整
     * atof 转浮点
     *
     * strcat: char* strcat (char* dest, const char* src); //追加src到dest
     * strcmp: int strcmp (const char* str1, const char* str2); //比较两字符串
     * strcpy: char* strcpy (char* dest, const char* src); //将字符串src的内容拷贝给dest
     * strlen: size_t strlen (const char* string); //返回字符串的长度, 不包含 \0
     *
     */
    return 0;
}

