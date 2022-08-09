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
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    vector <int> b(n + 1,0);
    for(int i = n-1; i >= 0; i--){
        if(b[v[i]] == 1){
            cout << i + 1<< endl;
            return;
        }
        b[v[i]] = 1;
    }
    cout << 0 << endl;

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