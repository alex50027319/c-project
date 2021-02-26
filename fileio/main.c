#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//File IO(file input/output
//ex) printf - std output -> 출력(모니터)
//ex) scanf - std input -> 입력(키보드)
//File IO 사람기준
//1. 탐색기를 연다 -> 2. 파일의 위치를 찾는다. -> 3. 파일을 연다. 
// -> 4. 내용을 본다 -> 5. 파일 닫는다.
//파일 열고/닫기 (1,2 -> 5)
//fopen(),fclose();
//fopen("파일의 위치- 파일 path","읽을 방식")
//fclose(파일 포인터)
int main() {
	FILE* p;
	p = fopen("data.txt", "r");//파일을 오픈
	//fclose(p);//파일은 항상 close 해줘야 한다.

	return 0;
}