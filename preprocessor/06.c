#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define DEBUG 1 // -- ����׸��
#define NAME "HARRY"
int main_06() {
	#if DEBUG
	printf("��������Դϴ�.\n");
	#else
	printf("�����Դϴ�.\n");
	#endif

	#ifdef NAME
		#undef NAME
		#define NAME "KIM"
	#else
		#define NAME "nothing"
	#endif
	printf("%s\n\n", NAME);
	return 0;
}