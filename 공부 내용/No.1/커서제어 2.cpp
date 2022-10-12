#include <stdio.h>
#include <windows.h>

// 커서 제어와 반복문을 이용한 출력의 반복 및 커서 위치 변환 

void gotoxy(int x, int y);

int main(void)
{
	for(int i=1;i<=9;i++)
	{
		gotoxy(10, 5+i);
		printf("%d*%d=%2d",3,i,3*i);
	}
	printf("\n");
	return 0;
}

void gotoxy(int x, int y)
{
	COORD Pos = {x - 1 , y - 1};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE) , Pos);
}
