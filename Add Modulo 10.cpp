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
    vector<int> v(n);
    bool flag = false, flag2 = false, flag12 = false;
    for(int i = 0; i < n;i++){
        cin >> v[i];
        if(v[i] % 5 == 0) {
            flag = true;
            v[i] = next(v[i]);
        }

    }
    if(flag){
        sort(all(v));
        if(v[0] == v[n-1]) cout << "Yes"; 
        else cout << "No"; 
        cout << endl;
    }
    else{
        for(int i = 0; i < n; i++){
            while(v[i] % 10 != 2){
                v[i] = next(v[i]);
            }
            if(v[i] % 20 == 2) flag2 = true;
            else flag12 = true;
        }
        cout << ((flag2 and flag12) ? "No" : "Yes") << endl;
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


