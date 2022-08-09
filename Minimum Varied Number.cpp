#include<bits/stdc++.h>  
#define ll long long 
#define pb emplace_back
#define sz(x) int(x.size())
#define all(x) x.begin(), x.end()   
#define watch(x) cout << #x << " = " << x << endl   
#define IOS ios::sync_with_stdio(false),cin.tie(nullptr);                                                                                                  
using namespace std;



void solve(){
    
    int n;
    cin >> n;
    string s = "";
    for(int i = 9; i >= 1; i--){
        if(n >= i){
            if(n == 0) break;
            else s += (char) (i + '0');
            n -= i;
        }
    }
    reverse(all(s));
    cout << s << endl;

}


int main(){
    #ifdef OJ
    freopen("input.txt","r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    IOS

    int tt; cin >> tt;
    while(tt--)solve();
    return 0;
}