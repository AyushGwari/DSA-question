#include<bits/stdc++.h>
using namespace std;

    void setZeroes(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();

        vector<int>temp(1,row+1);
        vector<int>temp2(1,col+1);

        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(matrix[i][j] == 0){
                    temp[i] = 0;
                    temp2[j] = 0;
                }
            }
        }
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(temp[i]==0 || temp2[j] == 0){
                        matrix[i][j] = 0;
                }
            }
        }
    }
int main(){
    vector<vector<int>>matrix {{1,1,1},{1,0,1},{1,1,1}};
    setZeroes(matrix);
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[0].size();j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}