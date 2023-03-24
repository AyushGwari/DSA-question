#include<bits/stdc++.h>
using namespace std;
int MaxSubSum (vector<int>&a,int n1){
    int maxi = INT_MIN;
    int sum = 0;
    for(auto it: a){
        sum+=it;
        maxi = max(maxi,sum);
        if(sum<0){
            sum = 0;
        }
    }
    return maxi;
}
int main(){
    int n1;
    vector<int>a(n1);
    for(int i=0;i<n1;i++){
        cin>>a[i];
    }
    int ans  = MaxSubSum(a,n1);
}