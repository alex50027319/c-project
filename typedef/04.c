#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//typedef
//typedef �ڷ���(int,char,struct,enum,union..) �ڷ��� �̸�
// ex typedef int age;
typedef int age;// int age
typedef char* name;// char* name

int main() {
	age age = 20;
	name name = NULL;
	char a[120];

	printf("�̸��� �Է��Ͻÿ� : ");
	scanf("%s",a);
	strcpy(name,a);
	printf("%d\n", age);
	printf("%s", name);
	return 0;
}