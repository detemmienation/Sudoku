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
	cout << "\n             ��ӭ������������С��Ϸ           \n" << endl;
	cout << "     1.������������  \n" << endl;
	cout << "     0.�˳���Ϸ \n" << endl;
	cout << "�����룺";
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

			cout << "�������ɳɹ���\n";
			cout << " \n";
			cout << "     1.�����������  \n" << endl;
			cout << "     2.������һ�� \n" << endl;
			cout << "     0.�˳���Ϸ \n" << endl;
			cout << "�����룺";
			cin >> op2;
			switch (op2)
			{
			case 1:
				n.solve();
				n.outputsudoku();
				cout << "�������ɹ���\n";
				cout << "     1.������ҳ  \n" << endl;
				cout << "     0.�˳���Ϸ \n" << endl;
				cout << "�����룺";
				cin >> op3;
				switch (op3) {
				case 1:
					system("cls");
					goto part1;
				case 0:
					break;
				defalt:
					cout << "�������";
					break;
				}
				break;
			case 2:
				system("cls");
				goto part1;

			default:
				cout << "�������";
				break;
			} 

		break;
	case 0:
		break;
	default:
		cout << "�����������������";
		break;
	}

    return 0;
}
