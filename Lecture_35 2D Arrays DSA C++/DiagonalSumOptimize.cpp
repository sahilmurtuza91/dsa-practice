#include<iostream>
using namespace std;
int DiagonalSum(int matrix[][3],int n){
    int sum=0;
    for(int i=0; i<n; i++){
        sum=sum+matrix[i][i];
        if(i!=n-1-i){
            sum=sum+matrix[i][i];
        }
    }
    return sum;
}
int main(){
    int matrixsum[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int roCol=3;
    cout<<DiagonalSum(matrixsum,roCol);
    return 0;
}