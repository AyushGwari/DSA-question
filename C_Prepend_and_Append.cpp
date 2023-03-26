#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define loop(i,a,b) for(int i=a;i<b;i++)
#define revLoop(i,a,b) for(int i=a;i>=b;i--)
#define all(x) (x).begin(), (x).end()
#define dec greater<int>
#define endl "\n"
 
 
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int i=0;
    int j=s.length()-1;
    int len = 0;
    if(s.length()==0){
        cout<<0;
    }
    else{
    while(i<=j){
        if((s[i] == '0' && s[j] == '1') || (s[i] == '1' && s[j] == '0')){
            len+=2;
            i++;
            j--;
        }
        else{
            break;
        }
    }
    cout<<s.length()-len<<endl;
    }
}
     

 
int main(){
	fast;
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
