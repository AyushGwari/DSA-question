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
    //
}
     

 
int main(){
	fast;
	string inp1;
    string inp2;
    string inp3;
    cin>>inp1>>inp2>>inp3;
    sort(all(inp1));
    sort(all(inp2));
    sort(all(inp3));

    string ans = inp1+inp2;
    sort(all(ans));
    if(ans == inp3){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}
