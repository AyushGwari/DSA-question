#include<bits/stdc++.h>
using namespace std;
void Merge(vector<int>a,int n,vector<int>b,int m){
    int i=m-1;
    int j=n-1;
    int k= m+n-1;
    while(i>=0 && j>=0){
        if(a[i]>b[j]){
            a[k] = b[i];
            i--;
            k--;
        }
        else {
            a[k] = b[j];
            j--;
            k--;
        }
    }
    while(i>=0){
        a[k--] = a[i--];
    }
    while(j>=0){
        a[k--] = b[j--];
    }
    
}
int main(){
    int n1,n2;
    cin>>n1>>n2;
    vector<int>a;
    vector<int>b;
    for(int i=0;i<n1;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
    for(int i=0;i<n2;i++){
        int x; 
        cin>>x;
        a.push_back(x);
    }
    Merge(a,n1,b,n2);

}