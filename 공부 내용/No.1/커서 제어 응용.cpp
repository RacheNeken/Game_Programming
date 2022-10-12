#include <stdio.h>
#include <windows.h> // gotoxy 이용을 위한 import 
#include <conio.h> // getch 이용을 위한 import 
#include <map> // map  이용을 위한 import 

// 특정 키보드 사용을 통한 케릭터의 움직임 표현 
 
// 키보드 방향키의 아스키코드값을 정의한 것. 외우면 편함 자주 씀. 
#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77
#define ENTER 13
#define ESC 27 

//커서 제어용 gotoxy 함수 호출 
gotoxy(int x , int y)
{
	COORD Pos = {x , y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos); 	
}

//좌표값 설정 
int main()
{
	int x = 44;
	int y = 22;
	int u = 0;
	int test; 
	int i = 0;
	int l = 0;
	int k = 0;
	
	//mode con을 통한 콘솔창 크기 조절 및 제목 입력 
	system("mode con cols=92 lines=41 | title 커서 제어 응용");
	
	// 배열  사용을 통한 출력 범위 제한
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
	
	
	// 제한된 출력 범위 표시 
	gotoxy(1,1);
	for(int wallcols = 0; wallcols<70; wallcols++)
	{
		for(int walllines = 0; walllines<36; walllines++)
		{
			if(map[wallcols][walllines] == 1)
			{
				printf("■");
			}
			else if(map[wallcols][walllines] == 0)
			{
				printf(" ")
			}
		}
		printf("\n");
	}
	
	//getch 함수를 통한 입력 키의 아스키 코드 값을 받아 옴.
	while(1)
	{ 
		test = getch(); // getch 함수는 최근 같은 역할을 하는 _getch로 대체되었음을 알림. 
	
		switch (test) // test에 방향키 입력을 받아 좌표값 변환 
		{
			case UP : gotoxy(x , y);
			{
				printf(" ");
				y -= 1;
				gotoxy(x,y);
				printf("★");
				break; 
			}
		
			case DOWN : gotoxy(x , y);
			{
				printf(" ");
				y += 1;
				gotoxy(x,y);
				printf("★");
				break; 
			}
		
			case LEFT : gotoxy(x , y);
			{
				printf(" ");
				x -= 1;
				gotoxy(x,y);
				printf("★");
				break; 
			}
		
			case RIGHT : gotoxy(x , y);
			{
				printf(" ");
				x += 1;
				gotoxy(x,y);
				printf("★");
				break; 
			}
		}
		
		//반복문을 통한 현재 좌표값의 출력 
		gotoxy(80,38);
		printf("%2d %2d", x , y);
		continue;
	}
}

/* getch와 scanf의 차이
   getch는 버퍼 사용을 하지 않고 입력키를 누름과 동시에 값이 입력됨.
   scanf는 버퍼를 사용하기 때문에 입력키를 누른 후 enter키를 통한 직접적인 입력 의미가 있어야함.
   getch는 마지막에 누른 키 하나만을 입력 받기 때문에 두개 이상의 키를 한번에 입력받지 못함.
   즉, 방향키 기준 2개 입력을 통한 대각선 이동 등이 불가능함.
   그래서 멀티 입력이 가능한 GetAsyncKeyState()함수를 이용하는 것을 권장함. 
*/ 
