#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//File IO(file input/output
//ex) printf - std output -> ���(�����)
//ex) scanf - std input -> �Է�(Ű����)
//File IO �������
//1. Ž���⸦ ���� -> 2. ������ ��ġ�� ã�´�. -> 3. ������ ����. 
// -> 4. ������ ���� -> 5. ���� �ݴ´�.
//���� ����/�ݱ� (1,2 -> 5)
//fopen(),fclose();
//fopen("������ ��ġ- ���� path","���� ���")
//fclose(���� ������)
int main() {
	FILE* p;
	p = fopen("data.txt", "r");//������ ����
	//fclose(p);//������ �׻� close ����� �Ѵ�.

	return 0;
}