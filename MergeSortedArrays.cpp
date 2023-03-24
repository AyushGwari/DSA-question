#include<bits/stdc++.h>
using namespace std;

void fixArray(vector<int>&b){
    for(int i=1;i<b.size();i++){
        if(b[i]<b[i-1]){
            swap(b[i],b[i-1]);
        }
    }
}
void Merge(vector<int>&a,int n1,vector<int>&b,int n2){
        int i=0;
        int j=0;
        while(i<n1){
            if(a[i]>b[j]){
                swap(a[i],b[j]);
                fixArray(b);
            }
            i++;
        }

    for(int i=0;i<n1;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n2;i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;
        
}
int main(){
    int n1,n2;
    cin>>n1;
    cin>>n2;
    vector<int>a(n1);
    vector<int>b(n2);
    for(int i=0;i<n1;i++){
        cin>>a[i];
    }
    for(int i=0;i<n2;i++){
        cin>>b[i];
    }
    Merge(a,n1,b,n2);

}