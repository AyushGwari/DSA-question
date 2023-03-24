#include<bits/stdc++.h>
using namespace std;

void Sort(vector<int>&nums){
    int low = 0;
    int high = nums.size()-1;
    int mid = 0;
    while(mid<=high){
        if(nums[mid] == 0){
            swap(nums[mid],nums[low]);
            low++;
            mid++;
        }
        else if(nums[mid] == 1){
            mid++;
        }
        else if(nums[mid] == 2){
            swap(nums[mid],nums[high]);
            high--;
        }
    }
}
int main(){
    int n;
    cin>>n;
    vector<int>nums;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }
    Sort(nums);
    return 0;
}