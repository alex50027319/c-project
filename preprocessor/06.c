#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define DEBUG 1 // -- 디버그모드
#define NAME "HARRY"
int main_06() {
	#if DEBUG
	printf("디버깅모드입니다.\n");
	#else
	printf("운영모드입니다.\n");
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