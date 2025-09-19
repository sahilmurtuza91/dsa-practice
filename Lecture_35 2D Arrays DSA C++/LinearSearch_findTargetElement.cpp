#include<iostream>
using namespace std;
int findTarget(int matrix[][3],int row,int col, int key){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(matrix[i][j]==key){
                return key;
            }
        }
    }
    return 0;
}
int main(){
    int matrix[4][3]={{1,2,3},{4,5,6},{7,8,9}};
    int col=3;
    int row=4;
    int key=8;
    cout<<findTarget(matrix,row,col,key);
    return 0;
}