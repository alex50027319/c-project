#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100
#define PI 3.14
#define STRING "Hello"
#define OUTPUT printf
#define AGE int
#define MUL1(x,y) x*y
#define MUL2(x,y) (x)*(y)
int mul(int x, int y)
{
    return x * y;
}
struct Person {    // 구조체 정의
    char name[20];        // 구조체 멤버 1
    int age;              // 구조체 멤버 2
    char address[100];    // 구조체 멤버 3
};
int main()
{
    struct Person p;// = malloc(sizeof(struct Person));    // 구조체 포인터 선언, 메모리 할당
    struct Person* p1 = &p;

     // 화살표 연산자로 구조체 멤버에 접근하여 값 할당
    strcpy(p1->name, "홍길동");
    p1->age = 30;
    strcpy(p1->address, "서울시 용산구 한남동");

    // 화살표 연산자로 구조체 멤버에 접근하여 값 출력
    printf("이름: %s\n", p1->name);       // 홍길동
    printf("나이: %d\n", p1->age);        // 30
    printf("주소: %s\n", p1->address);    // 서울시 용산구 한남동

    //free(p1);    // 동적 메모리 해제
    return 0;
}