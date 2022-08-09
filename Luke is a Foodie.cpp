#include<bits/stdc++.h>  
#define ll long long                                                                                                           
using namespace std;

void solve(){
    int n, b;
    cin >> n >> b;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    int mx = v[0], mn = v[0], ans = 0;
    for(int i = 0; i < n; i++){
        mx = max(mx,v[i]);
        mn = min(mn, v[i]);
        if(mx - mn > 2 * b) {
            ans++;
            mx = mn = v[i];
        }
        
    }
    cout << ans << endl;
}


int main(){
     #ifdef OJ
    freopen("input.txt","r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt;
    cin >> tt;
    while(tt--)solve();
    return 0;
}