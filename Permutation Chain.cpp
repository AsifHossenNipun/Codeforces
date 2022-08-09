#include<bits/stdc++.h>  
#define ll long long 
#define pb emplace_back
#define sz(x) int(x.size())
#define all(x) x.begin(), x.end()   
#define watch(x) cout << #x << " = " << x << endl   
#define IOS ios::sync_with_stdio(false),cin.tie(nullptr);   
                                                                                               
using namespace std;

int next(int x){ 
    return x + x % 10;
} 


void solve(){
    int n; cin >> n;
    cout << n << endl;
    vector<int> v;
    for(int i = 1; i <= n; i++){
        v.push_back(i);
    }
    for(auto x : v) cout << x  << " ";
    cout << endl;
    for(int i = 1; i < n; i++){
        swap(v[i], v[i-1]);
        for(auto x: v) cout << x << " " ;
        cout << endl;
    }
}

bool multi = true;
int main(){
    IOS
    int tt = 1;
    if(multi)cin >> tt;
    while(tt--)solve();
    return 0;
}


