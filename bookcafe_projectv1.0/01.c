#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> //strcpy
#include <stdlib.h> //malloc, calloc, realloc
#define MAX_CAPACITY 100// 100여권이 들어갈 수 있는 책장

char* book_name[MAX_CAPACITY];//책이름
char* book_author[MAX_CAPACITY];//작가이름
int book_idx = 0;//배열 인덱스
char* ex_strdup(char*);
void add(); //책을 추가하는 함수
void del();//책을 삭제하는 함수
void list();//책 목록을 출력하는 함수
void find();
void save();
void read();
void help();//도움말을 출력하는 함수


int main() {
	char command[100];

	while (1) {

		printf("명령어를 입력하세요 : ");
		scanf("%s", command);
		if (strcmp(command,"add")==0) {
			add();
		}
		else if (strcmp(command, "del") == 0) {
			del();
		}
		else if (strcmp(command, "list") == 0) {
			list();
		}
		else if (strcmp(command, "find") == 0) {
			find();
		}
		else if (strcmp(command, "save") == 0) {
			save();
		}
		else if (strcmp(command, "read") == 0) {
			read();
		}
		else if (strcmp(command, "help") == 0) {
			help();
		}
		else if (strcmp(command, "q") == 0) {
			break;
		}
		else {
			printf("맞는 명령어가 없습니다.\n");
		
		}
	}

	return 0;
}

void add() {
	char buf1[100], buf2[100];//buf1=책이름, buf2=작가이름
	printf("책 이름을 입력해주세요: ");
	scanf("%s", buf1);
	scanf("%s", buf2);
	//strcpy(book_name[book_idx], &buf1);
	//strcpy(book_author[book_idx], &buf2);
	//
	book_name[book_idx] = ex_strdup(buf1);
	book_author[book_idx] = ex_strdup(buf2);

	printf("%s를 저장하였습니다.\n",book_name[book_idx]);
	book_idx++;
}
// strdup(복사할 문자열) -> return 으로 복제된 문자열의 포인터를 넘겨줍니다.
// strdup => malloc(메모리 동적할당) 힙 영역에 문자열객체가 복제된다.

void del() {
	printf("지우고 싶은 책 이름을 입력해주세요: \n");
	char a[100];
	scanf("%s", a);
	int k = 0;
	int i, j;
	for (i= 0; i < book_idx; i++) {
		if (strcmp(book_name[i], a) == 0) {
			book_name[i] = NULL;
			book_author[i] = NULL;
			k = i;
		}
		
	}
	for (j = k; j< book_idx; j++) {
		book_name[j] = book_name[j + 1];
		book_author[j] = book_author[j + 1];
	}
	book_idx--;
	printf("%s가 삭제되었습니다. \n", a);
	

	
}
void list() {
	for (int i = 0; i < book_idx; i++) {
		printf("%-10s %-10s \n", book_name[i], book_author[i]);
	}
}
void find() {
	char buf1[100];
	printf("찾고 싶은 책 이름을 입력해주세요: \n");
	scanf("%s", buf1);
	for (int i = 0; i < book_idx; i++) {
		if (strcmp(buf1, book_name[i]) == 0) {
			printf("%-10s %-10s\n", book_name[i], book_author[i]);
			return;
		}
	
	}
	printf("책 목록 중 %s라는 책은 없습니다.\n", buf1);

}
void save() {

}
void read() {

}
void help() {

}
char* ex_strdup(char* source) {
	char* tmp = (char*)malloc(strlen(source) + 1);
	if (tmp == NULL) {
		return NULL;
	}
	strcpy(tmp, source);
	return tmp;
}
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#define MAX_CAPACITY 100// 100여권이 들어갈 수 있는 책장
//
//char* book_name[MAX_CAPACITY];//책이름
//char* book_author[MAX_CAPACITY];//작가이름
//int book_idx = 0;//배열 인덱스
//char* ex_strdup(char*);
//void add(); //책을 추가하는 함수
//void del();//책을 삭제하는 함수
//void list();//책 목록을 출력하는 함수
//void find();
//void save();
//void read();
//void help();//도움말을 출력하는 함수
//
//
//int main() {
//	char command[100];
//
//	while (1) {
//
//		printf("명령어를 입력하세요 : ");
//		scanf("%s", command);
//		if (strcmp(command, "add") == 0) {
//			add();
//		}
//		else if (strcmp(command, "del") == 0) {
//			del();
//		}
//		else if (strcmp(command, "list") == 0) {
//			list();
//		}
//		else if (strcmp(command, "find") == 0) {
//			find();
//		}
//		else if (strcmp(command, "save") == 0) {
//			save();
//		}
//		else if (strcmp(command, "read") == 0) {
//			read();
//		}
//		else if (strcmp(command, "help") == 0) {
//			help();
//		}
//		else if (strcmp(command, "q") == 0) {
//			break;
//		}
//		else {
//			printf("맞는 명령어가 없습니다.\n");
//
//		}
//	}
//	return 0;
//}
//
//void add() {
//	char buf1[100], buf2[100];//buf1=책이름, buf2=작가이름
//	//printf("책 이름을 입력해주세요: ");
//	scanf("%s", buf1);
//	scanf("%s", buf2);
//	//strcpy(book_name[book_idx], &buf1);
//	//strcpy(book_author[book_idx], &buf2);
//	//
//	book_name[book_idx] = ex_strdup(buf1);
//	book_author[book_idx] = ex_strdup(buf2);
//
//	printf("%s를 저장하였습니다.\n", book_name[book_idx]);
//	book_idx++;
//}
//// strdup(복사할 문자열) -> return 으로 복제된 문자열의 포인터를 넘겨줍니다.
//// strdup => malloc(메모리 동적할당) 힙 영역에 문자열객체가 복제된다.
//
//void del() {
//	printf("지우고 싶은 책이름을 입력해주세요:");
//
//}
//void list() {
//	for (int i = 0; i < book_idx; i++) {
//		printf("%-10s %-10s \n", book_name[i], book_author[i]);
//	}
//}
//void find() {
//
//}
//void save() {
//
//}
//void read() {
//
//}
//void help() {
//
//}
//char* ex_strdup(char* source) {
//	char* tmp = (char*)malloc(strlen(source) + 1);
//	if (tmp == NULL) {
//		return NULL;
//	}
//	strcpy(tmp, source);
//	return tmp;
//}
