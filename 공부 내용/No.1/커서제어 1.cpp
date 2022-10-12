#include <stdio.h>
#include <windows.h>

// 커서이동을 통한 출력 위치 변환 

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
COORD Pos 를 통한 좌표 값을 받을때 사용되는 변수 x,y는 기본적으로 x와 y만 사용되지만
-1을 준 것은 좌표의 정위치를 주기 위함이다. 아래의 코드를 실행할 시 확인 가능합니다.
(  아무런 설정도 되지 않았을때에 기본으로 콘솔창의 크기는 가로 80 세로 24로 설정되어있음.
   gotoxy함수를 이용할때에도 기본적인 좌표계가
   x좌표가  0~79의 범위 , y좌표가  0~23의 범위
   시작점이 0,0이기때문에 각각 1을 뺀 값이 좌표계의 한계값이 됨.) 
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
