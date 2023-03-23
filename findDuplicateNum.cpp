#include<bits/stdc++.h>
using namespace std;

int findDuplicateNum(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int ans = 0;
        for(auto m: mp){
            if(m.second>1){
                ans = m.first;
            }
        }
        return ans;
    }
int main(){
    int n;
    cin>>n;
    vector<int>ans;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        ans.push_back(x);
    }
    int sol = findDuplicateNum(ans);
}