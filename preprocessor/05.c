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
struct Person {    // ����ü ����
    char name[20];        // ����ü ��� 1
    int age;              // ����ü ��� 2
    char address[100];    // ����ü ��� 3
};
int main()
{
    struct Person p;// = malloc(sizeof(struct Person));    // ����ü ������ ����, �޸� �Ҵ�
    struct Person* p1 = &p;

     // ȭ��ǥ �����ڷ� ����ü ����� �����Ͽ� �� �Ҵ�
    strcpy(p1->name, "ȫ�浿");
    p1->age = 30;
    strcpy(p1->address, "����� ��걸 �ѳ���");

    // ȭ��ǥ �����ڷ� ����ü ����� �����Ͽ� �� ���
    printf("�̸�: %s\n", p1->name);       // ȫ�浿
    printf("����: %d\n", p1->age);        // 30
    printf("�ּ�: %s\n", p1->address);    // ����� ��걸 �ѳ���

    //free(p1);    // ���� �޸� ����
    return 0;
}