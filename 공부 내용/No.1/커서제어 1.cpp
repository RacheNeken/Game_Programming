#include <stdio.h>
#include <windows.h>

// Ŀ���̵��� ���� ��� ��ġ ��ȯ 

void gotoxy(int x , int y);

int main (void)
{
	gotoxy(2,4);
	printf("Hello");
	gotoxy(20,20);
	printf("Hello");
	return 0;
}

void gotoxy(int x, int y)
{
	COORD Pos = {x-1 , y-1};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE) , Pos);
}

/*
COORD Pos �� ���� ��ǥ ���� ������ ���Ǵ� ���� x,y�� �⺻������ x�� y�� ��������
-1�� �� ���� ��ǥ�� ����ġ�� �ֱ� �����̴�. �Ʒ��� �ڵ带 ������ �� Ȯ�� �����մϴ�.
(  �ƹ��� ������ ���� �ʾ������� �⺻���� �ܼ�â�� ũ��� ���� 80 ���� 24�� �����Ǿ�����.
   gotoxy�Լ��� �̿��Ҷ����� �⺻���� ��ǥ�谡
   x��ǥ��  0~79�� ���� , y��ǥ��  0~23�� ����
   �������� 0,0�̱⶧���� ���� 1�� �� ���� ��ǥ���� �Ѱ谪�� ��.) 
*/

/*
#include <stdio.h>
#include <windows.h>

void gotoxy(int x , int y);

int main (void)
{
	gotoxy(2,4);
	printf("Hello");
	gotoxy(20,20);
	printf("Hello");
	return 0;
}

void gotoxy(int x, int y)
{
	COORD Pos = {x-1 , y-1};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE) , Pos);
}
*/
