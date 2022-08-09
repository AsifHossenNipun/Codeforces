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
    int ans;
    if(n % 3 == 0) ans = n / 3;
    else if(n == 1) ans = 2;
    else if(n % 3 == 1) {
        n -= 4;
        ans = n / 3;
        ans += 2;
    }

    else ans = n / 3 + 1;
    cout << ans << endl;
}

bool multi = true;
int main(){
    IOS
    int tt = 1;
    if(multi)cin >> tt;
    while(tt--)solve();
    return 0;
}


