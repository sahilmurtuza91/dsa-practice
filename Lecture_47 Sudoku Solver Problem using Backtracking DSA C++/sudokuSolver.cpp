#include <iostream>
#include <vector>
using namespace std;
bool isSafe(vector<vector<char>>& board, int row, int col ,char digit){
    for(int i=0; i<9; i++){
        if(board[row][i]==digit || board[i][col]==digit){
            return false;
        }
    }
    int srow=(row/3)*3;
    int scol=(col/3)*3;
    for(int i=srow; i<=srow+2; i++){
        for(int j=scol; j<=scol+2; j++){
            if(board[i][j]==digit){
                return false;
            }
        }
    }
    return true;
}
bool helper(vector<vector<char>> &board, int row, int col)
{
    if (row == 9)
    {
        return true;
    }
    int nextrow = row;
    int nextcol = col + 1;
    if (nextcol == 9)
    {
        nextrow = row + 1;
        nextcol = 0;
    }

    if (board[row][col] != '.')
    {
        return helper(board, nextrow, nextcol);
    }
    for (char digit = '1'; digit <= '9'; digit++)
    {
        if (isSafe(board, row, col, digit))
        {
            board[row][col] = digit;
            if(helper(board, nextrow, nextcol)){
                return true;
            }
            board[row][col]='.';
        }
    }
    return false;
}
void sudokoSolver(vector<vector<char>>& board)
{
    helper(board, 0, 0);
}
int main()
{
    vector<vector<char>>board={{'5','3','.','.','7','.','.','.','.'},{'6','.','.','1','9','5','.','.','.'},{'.','9','8','.','.','.','.','6','.'},{'8','.','.','.','6','.','.','.','3'},{'4','.','.','8','.','3','.','.','1'},{'7','.','.','.','2','.','.','.','6'},{'.','6','.','.','.','.','2','8','.'},{'.','.','.','4','1','9','.','.','5'},{'.','.','.','.','8','.','.','7','9'}};
    sudokoSolver(board);
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            cout<<board[i][j]<<"    ";
        }cout<<endl;
    }
    return 0;

}