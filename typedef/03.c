#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//������
//������ ���� ����
// enum �������̸� {����}
// struct ����ü�̸� {};
enum week {
	sun = 10,
	mon,
	tue,
	wed,
	thur=30,
	fri,
	sat,

};

int main_02() {
	/*int mon = 0;
	int tue = 1;
	int wed = 2;
	int thurs = 3;
	int fri = 4;
	int sat = 5;
	int sum = 6;
	*/
	enum week w;
	
	w = sun;
	printf("%d\n", w);
	printf("%d\n", sizeof(enum week));
	printf("sun= %d, mon= %d\n", sun, mon);
	printf("tue= %d, wed= %d\n", tue, wed);
	printf("thur= %d, fri= %d\n", thur, fri);
	return 0;
}