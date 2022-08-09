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
    bool ten = false, five = false;
    int tend, fived, mn = INT_MAX, mx = 0;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        if(v[i] % 10 == 0) {ten = true; tend = v[i]; }
        if(v[i] % 10 == 5) {five = true; fived = v[i]; }
        mn = min(mn, v[i]);
        mx = max(mx, v[i]);
    }
    if(ten){
        for(int i = 0; i < n; i++){
            if(v[i] == tend or v[i] == tend - 5){
                continue;
            }
            else{
                cout << "No" << endl;
                return;
            }
        }
    }
    else if(five){
        for(int i = 0; i < n; i++){
            if(v[i] == fived or v[i] == fived + 5) continue;
        else{
            cout << "No" << endl;
            return;
        }
        }
    }
    else{
        //sort(all(v));
        set<int> l;
        l.insert(mn);
        while(1){
            mn += (mn % 10);
            l.insert(mn);
            if(mn > mx) break;
        }
        //sort(all(l));
        for(int i = 0; i < n; i++){
            if(l.count(v[i])) continue;
            else{
                cout << "No" << endl;
                return;
            }
        }
    }
    cout << "Yes" << endl;

}


int main(){
    #ifndef OJ
    freopen("input.txt","r", stdin);
    #endif
    IOS

    int tt; cin >> tt;
    while(tt--)solve();
    return 0;
}