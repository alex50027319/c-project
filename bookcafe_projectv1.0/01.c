#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define MAX_CAPACITY 100// 100������ �� �� �ִ� å��

char* book_name[MAX_CAPACITY];//å�̸�
char* book_author[MAX_CAPACITY];//�۰��̸�
int book_idx = 0;//�迭 �ε���
char* ex_strdup(char*);
void add(); //å�� �߰��ϴ� �Լ�
void del();//å�� �����ϴ� �Լ�
void list();//å ����� ����ϴ� �Լ�
void find();
void save();
void read();
void help();//������ ����ϴ� �Լ�


int main() {
	char command[100];

	while (1) {

		printf("��ɾ �Է��ϼ��� : ");
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
			printf("�´� ��ɾ �����ϴ�.\n");
		
		}
	}
	return 0;
}

void add() {
	char buf1[100], buf2[100];//buf1=å�̸�, buf2=�۰��̸�
	//printf("å �̸��� �Է����ּ���: ");
	scanf("%s", buf1);
	scanf("%s", buf2);
	//strcpy(book_name[book_idx], &buf1);
	//strcpy(book_author[book_idx], &buf2);
	//
	book_name[book_idx] = ex_strdup(buf1);
	book_author[book_idx] = ex_strdup(buf2);

	printf("%s�� �����Ͽ����ϴ�.\n",book_name[book_idx]);
	book_idx++;
}
// strdup(������ ���ڿ�) -> return ���� ������ ���ڿ��� �����͸� �Ѱ��ݴϴ�.
// strdup => malloc(�޸� �����Ҵ�) �� ������ ���ڿ���ü�� �����ȴ�.

void del() {
	printf("����� ���� å�̸��� �Է����ּ���:");

}
void list() {
	for (int i = 0; i < book_idx; i++) {
		printf("%-10s %-10s \n", book_name[i], book_author[i]);
	}
}
void find() {

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
