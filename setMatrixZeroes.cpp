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
    vector<vector<int>>matrix {{0,1,2,0},{3,4,5,2},{1,3,1,5}};
    setZeroes(matrix);
    return 0;
}