#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> Merge(vector<vector<int>> &mergeInt){
    vector<vector<int>>ans;
    if(mergeInt.size()==0){
        return ans;
    }
    vector<int>temp = mergeInt[0];
    for(auto it: mergeInt){
        if(temp[1]>=it[0]){
            temp[1] = max(temp[1],it[1]);
        }
        else{
            ans.push_back(temp);
            temp = it;
        }
    }
    ans.push_back(temp);
    return ans;

}
int main(){
    vector<vector<int>>mergeInt {{1,3},{2,6},{8,10},{15,18}};
    vector<vector<int>> ans =Merge(mergeInt);
}