//sudokutest.cpp
#include <iostream>
using namespace std;
using std::cout;
using std::endl;
#include <fstream>
using std::ifstream;
using std::ofstream;
using std::ios_base;
#include "sudoku.h"
#include <Windows.h>

int main()
{
	sudoku n;
part1:
	cout << "\n             欢迎进入数独棋盘小游戏           \n" << endl;
	cout << "     1.生成数独棋盘  \n" << endl;
	cout << "     0.退出游戏 \n" << endl;
	cout << "请输入：";
	int op1,op2,op3;
	cin>> op1;
	system("cls");
	switch (op1) {
	case 1:
		int ss[9][9];
		for (int i = 0; i < 9; i++)
		{
			for (int j = 0; j < 9; j++)
			{
				ss[i][j] = 0;
			}
		}
		n.Startgame(ss);
		n.realstart(ss);

			cout << "数独生成成功！\n";
			cout << " \n";
			cout << "     1.求解数独棋盘  \n" << endl;
			cout << "     2.返回上一层 \n" << endl;
			cout << "     0.退出游戏 \n" << endl;
			cout << "请输入：";
			cin >> op2;
			switch (op2)
			{
			case 1:
				n.solve();
				n.outputsudoku();
				cout << "数独求解成功！\n";
				cout << "     1.返回首页  \n" << endl;
				cout << "     0.退出游戏 \n" << endl;
				cout << "请输入：";
				cin >> op3;
				switch (op3) {
				case 1:
					system("cls");
					goto part1;
				case 0:
					break;
				defalt:
					cout << "输入错误！";
					break;
				}
				break;
			case 2:
				system("cls");
				goto part1;

			default:
				cout << "输入错误！";
				break;
			} 

		break;
	case 0:
		break;
	default:
		cout << "输入错误！请重新输入";
		break;
	}

    return 0;
}
