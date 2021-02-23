#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//typedef
//typedef 자료형(int,char,struct,enum,union..) 자료형 이름
// ex typedef int age;
//typedef int age;// int age
//typedef char* name;// char* name

#define MUL1(x,y) x*y
#define MUL2(x,y) (x)*(y)

int mul(int x, int y);

int main()
{
    int a, b;

    a = 10;
    b = 11;

    printf("매크로 함수1 : %d * %d = %d\n", a + 1, b + 1, MUL1(a + 1, b + 1));
    printf("매크로 함수2 : %d * %d = %d\n", a + 1, b + 1, MUL2(a + 1, b + 1));
    printf("일반 함수 : %d * %d = %d\n", a + 1, b + 1, mul(a + 1, b + 1));

    return 0;
}

int mul(int x, int y)
{
    return x * y;
}