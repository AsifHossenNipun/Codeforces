#include<bits/stdc++.h>  
#define ll long long 
#define pb emplace_back
#define sz(x) int(x.size())
#define all(x) x.begin(), x.end()   
#define watch(x) cout << #x << " = " << x << endl   
#define IOS ios::sync_with_stdio(false),cin.tie(nullptr);   
                                                                                               
using namespace std;


void solve(){
    int x; 
    cin >> x; int y; cin >> y; cout << x + y << endl;
    cout << x + y % 3 << endl;
}


int main(){
    IOS
    int tt; cin >> tt;
    while(tt--)solve();
    return 0;
}


