#include<iostream>
#include <climits>
using namespace std;
int MaxSum(int arr[][3],int row,int col){
    int maxsumRow=INT_MIN;
    for(int i=0; i<row; i++){
        int rowsum=0;
        for(int j=0; j<col; j++){
            rowsum=rowsum+arr[i][j];
        }
        maxsumRow=max(maxsumRow,rowsum);
    }
    return maxsumRow;

}

int main(){
    int RowSum[3][3]={{1,2,3},{4,5,6},{7,8,9,}};
    int col=3;
    int row=3;
    cout<<MaxSum(RowSum,row,col);


}