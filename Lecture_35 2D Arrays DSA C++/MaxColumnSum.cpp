#include<iostream>
#include <climits>
using namespace std;
int MaxSum(int arr[][3],int row,int col){
    int maxsumCol=INT_MIN;
    for(int i=0; i<col; i++){
        int rowsum=0;
        for(int j=0; j<row; j++){
            rowsum=rowsum+arr[j][i];
        }
        maxsumCol=max(maxsumCol,rowsum);
    }
    return maxsumCol;

}

int main(){
    int RowSum[3][3]={{1,2,3},{4,5,6},{7,8,9,}};
    int col=3;
    int row=3;
    cout<<MaxSum(RowSum,row,col);


}