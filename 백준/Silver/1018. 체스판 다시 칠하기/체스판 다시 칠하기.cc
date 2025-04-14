#include <iostream>

using namespace std;

char wb[8][8] =
{
	{'W','B','W','B','W','B','W','B'},
	{'B','W','B','W','B','W','B','W'},
	{'W','B','W','B','W','B','W','B'},
	{'B','W','B','W','B','W','B','W'},
	{'W','B','W','B','W','B','W','B'},
	{'B','W','B','W','B','W','B','W'},
	{'W','B','W','B','W','B','W','B'},
	{'B','W','B','W','B','W','B','W'}
};

char bw[8][8] =
{
	{'B','W','B','W','B','W','B','W'},
	{'W','B','W','B','W','B','W','B'},
	{'B','W','B','W','B','W','B','W'},
	{'W','B','W','B','W','B','W','B'},
	{'B','W','B','W','B','W','B','W'},
	{'W','B','W','B','W','B','W','B'},
	{'B','W','B','W','B','W','B','W'},
	{'W','B','W','B','W','B','W','B'}
};

int mincnt = 64; //제일 작게 변경하는 경우
int a, b; //보드 크기 입력값
int cnt1, cnt2, rst;
char board[50][50];
int wbmin(int i, int j);
int bwmin(int i, int j);

int main()
{
	cin >> a >> b;

	for (int i = 0; i < a; i++)
		for (int j = 0; j < b; j++)
			cin >> board[i][j];

	for (int i = 0; i < a - 7; i++)
		for (int j = 0; j < b - 7; j++)
		{
			cnt1 = wbmin(i, j);
			cnt2 = bwmin(i, j);
			rst = (cnt1 < cnt2) ? cnt1 : cnt2;
			mincnt = (mincnt < rst) ? mincnt : rst;
		}

	cout << mincnt;

	return 0;
}

int wbmin(int c, int r) //비교 시작 좌표 받음
{
	int cnt = 0; //임시 카운터
	for (int i = 0; i < 8; i++)
		for (int j = 0; j < 8; j++)
			if (wb[i][j] != board[c + i][r + j])
				cnt++;
	return cnt;
}

int bwmin(int c, int r)
{
	int cnt = 0;
	for (int i = 0; i < 8; i++)
		for (int j = 0; j < 8; j++)
			if (bw[i][j] != board[c + i][r + j])
				cnt++;
	return cnt;
}
