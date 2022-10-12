#include <stdio.h>
#include <windows.h> // gotoxy �̿��� ���� import 
#include <conio.h> // getch �̿��� ���� import 
#include <map> // map  �̿��� ���� import 

// Ư�� Ű���� ����� ���� �ɸ����� ������ ǥ�� 
 
// Ű���� ����Ű�� �ƽ�Ű�ڵ尪�� ������ ��. �ܿ�� ���� ���� ��. 
#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77
#define ENTER 13
#define ESC 27 

//Ŀ�� ����� gotoxy �Լ� ȣ�� 
gotoxy(int x , int y)
{
	COORD Pos = {x , y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos); 	
}

//��ǥ�� ���� 
int main()
{
	int x = 44;
	int y = 22;
	int u = 0;
	int test; 
	int i = 0;
	int l = 0;
	int k = 0;
	
	//mode con�� ���� �ܼ�â ũ�� ���� �� ���� �Է� 
	system("mode con cols=92 lines=41 | title Ŀ�� ���� ����");
	
	// �迭  ����� ���� ��� ���� ����
	int map[70][36];
	
	for(i<70)
	{
		if(u > 35)
		{
			u = 0;
			i++;
		}
		else
		{
			map [i][u] = 0;
			u++;
		}
	}
	for(l<36; l++)
	{
		map[0][l] = 1;
		map[69][l] = 1;
	}
	for(k<70; k++)
	{
		map[k][0] = 1;
		map[k][35] = 1;
	}
	
	
	// ���ѵ� ��� ���� ǥ�� 
	gotoxy(1,1);
	for(int wallcols = 0; wallcols<70; wallcols++)
	{
		for(int walllines = 0; walllines<36; walllines++)
		{
			if(map[wallcols][walllines] == 1)
			{
				printf("��");
			}
			else if(map[wallcols][walllines] == 0)
			{
				printf(" ")
			}
		}
		printf("\n");
	}
	
	//getch �Լ��� ���� �Է� Ű�� �ƽ�Ű �ڵ� ���� �޾� ��.
	while(1)
	{ 
		test = getch(); // getch �Լ��� �ֱ� ���� ������ �ϴ� _getch�� ��ü�Ǿ����� �˸�. 
	
		switch (test) // test�� ����Ű �Է��� �޾� ��ǥ�� ��ȯ 
		{
			case UP : gotoxy(x , y);
			{
				printf(" ");
				y -= 1;
				gotoxy(x,y);
				printf("��");
				break; 
			}
		
			case DOWN : gotoxy(x , y);
			{
				printf(" ");
				y += 1;
				gotoxy(x,y);
				printf("��");
				break; 
			}
		
			case LEFT : gotoxy(x , y);
			{
				printf(" ");
				x -= 1;
				gotoxy(x,y);
				printf("��");
				break; 
			}
		
			case RIGHT : gotoxy(x , y);
			{
				printf(" ");
				x += 1;
				gotoxy(x,y);
				printf("��");
				break; 
			}
		}
		
		//�ݺ����� ���� ���� ��ǥ���� ��� 
		gotoxy(80,38);
		printf("%2d %2d", x , y);
		continue;
	}
}

/* getch�� scanf�� ����
   getch�� ���� ����� ���� �ʰ� �Է�Ű�� ������ ���ÿ� ���� �Էµ�.
   scanf�� ���۸� ����ϱ� ������ �Է�Ű�� ���� �� enterŰ�� ���� �������� �Է� �ǹ̰� �־����.
   getch�� �������� ���� Ű �ϳ����� �Է� �ޱ� ������ �ΰ� �̻��� Ű�� �ѹ��� �Է¹��� ����.
   ��, ����Ű ���� 2�� �Է��� ���� �밢�� �̵� ���� �Ұ�����.
   �׷��� ��Ƽ �Է��� ������ GetAsyncKeyState()�Լ��� �̿��ϴ� ���� ������. 
*/ 
