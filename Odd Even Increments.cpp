#include<bits/stdc++.h>
#define ll long long  int                                                                                                               

using namespace std;

void solve(){
    int n;
    cin >> n;
    vector <int> v;
    bool bad = 0;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        v.push_back(x);
        if(i >= 2){
            if(v[i] % 2 != v[i-2] % 2) bad = 1;
        }
    }
    cout << (bad ? "NO" : "YES") << endl;

}


int main(){
    #ifdef OJ
    freopen("input.txt","r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int tt = 1; 
    cin >> tt;
    
    while(tt--){
        solve();
        
    }

    return 0;

}
