//sudoku.h
class sudoku
{
public:

    void Printqp(int arr[][9]);
    int solve();//求解
    void outputsudoku();//输出解文件 
    int Judgeqp(int arr[][9], int row, int col, int n);   //判断棋盘填入的数字是否正确 
    int Startgame(int arr[9][9]);
    int realstart(int arr[9][9]);
    int checksudoku();//检查数独是否正确
   

private:    
    int search();//搜索求解
    int checkclear();//返回未填写的格子数
    void base_solve();//摒除求解
    void clear_solv_sudoku(int, int, int);//删除不可能的候选数
    void update_ques_sudoku();//填写唯一候选数到数独
    int ques_sudoku[9][9];//数独
    int solv_sudoku[9][9][9];//候选数
};
