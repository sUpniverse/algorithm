#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

void game_start();
void setbinggo(int **box, int size);
int counting(int **box, int size);
void printbox(int **box, int size);

int main()
{
	int result;
	while(1)
	{

		printf("1.연습게임(개인 연습용) \n2.종료\n");
		printf("# 메뉴선택 :");
		scanf("%d", &result);
		if (result == 1)
			game_start();
		else if (result == 2)
			break;
		else
			printf("잘못입력하셨습니다\n");
	}
	return 0;
}
void game_start()
{

	int **randombox;
	int size, i, j;
	int input;
	int *inputbox;
	int flag;
	int cnt;

	printf("연습용 빙고게임을 시작합니다\n");
	printf("빙고판의 가로,세로 크기를 입력해주세요(양수값 입력) :");
	scanf("%d", &size);
	randombox = (int**)malloc(sizeof(int*) * size);

	for (i = 0; i < size; i++)
		randombox[i] = (int*)malloc(sizeof(int*) * size);

	inputbox = (int*)malloc(sizeof(int*) * (size * size));
	memset(inputbox, 0, size);
	setbinggo(randombox, size);
	printbox(randombox, size);

	while (1)
	{
		flag = 0;
		printf("#지울 숫자 입력(1~%d) :", size*size);
		scanf("%d", &input);
		for (i = 0; i < (size*size); i++) {
			if (input == inputbox[i]) {
				flag = 1;
				break;
			}
		}
		if (flag == 1)
			printf("이미 지워진 숫자입니다. 다시 입력하세요\n");
		else
		{
			for (i = 0; i < (size*size); i++) {
				if (inputbox[i] == 0) {
					inputbox[i] = input;
					break;
				}
			}				

			for (i = 0; i < size; i++) {
				for (j = 0; j < size; j++) {
					if (input == randombox[i][j])
						randombox[i][j] = 0;

				}
			}

		}

		printbox(randombox, size);
		cnt = counting(randombox, size);
		printf("빙고 숫자는 %d 입니다\n", cnt);
		if (cnt == 5) {
			break;
			printf("빙고가 5개 게임이 종료됩니다\n");
			cnt = 0;
		}
	}

}

void setbinggo(int **box, int size)
{
	int i, j;
	int temp;
	int ran1, ran2;

	srand((unsigned)time(NULL));

	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++)
			box[i][j] = (j + 1) + ((i+1) * 5);
	}

	for (i = 0; i <size; i++) {
		for (j = 0; j < size; j++) {
			ran1 = rand() % size;
			ran2 = rand() % size;
			temp = box[i][j];
			box[i][j] = box[ran1][ran2];
			box[ran1][ran2] = temp;
		}

	}

}

void printbox(int **box, int size)
{
	int i, j;

	for (i = 0; i <size; i++) {
		printf("|");
		for (j = 0; j < size; j++) {
			if (box[i][j] == 0)
				printf("    X");
			else
				printf("%5d", box[i][j]);
		}

		printf("|");
		printf("\n");
	}
}

int counting(int **box, int size)
{
	int i, j;
	int xcnt = 0,ycnt = 0,cross1 = 0,cross2 = 0, cnt;
	cnt = 0;
	// 카운팅
	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++) {
			if (box[i][j] == 0)
				xcnt++;
			if (box[j][i] == 0)
				ycnt++;
			if (i == j) 
				if (box[i][j] == 0)
					cross1++;
			if( (size-i) == j)
				if (box[i][j] == 0)

					cross2++;

		}

		if(xcnt == size)
			cnt++;
		if (ycnt == size)
			cnt++;
		if (cross1 == size)
			cnt++;
		if (cross2 == size)
			cnt++;

		xcnt = 0;
		ycnt = 0;
		cross1 = 0;
		cross2 = 0;
	}
	return cnt;
}

