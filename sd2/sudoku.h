//sudoku.h
class sudoku
{
public:

    void Printqp(int arr[][9]);
    int solve();//���
    void outputsudoku();//������ļ� 
    int Judgeqp(int arr[][9], int row, int col, int n);   //�ж���������������Ƿ���ȷ 
    int Startgame(int arr[9][9]);
    int realstart(int arr[9][9]);
    int checksudoku();//��������Ƿ���ȷ
   

private:    
    int search();//�������
    int checkclear();//����δ��д�ĸ�����
    void base_solve();//������
    void clear_solv_sudoku(int, int, int);//ɾ�������ܵĺ�ѡ��
    void update_ques_sudoku();//��дΨһ��ѡ��������
    int ques_sudoku[9][9];//����
    int solv_sudoku[9][9][9];//��ѡ��
};
