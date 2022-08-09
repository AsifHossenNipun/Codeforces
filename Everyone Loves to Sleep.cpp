#include<bits/stdc++.h>  
#define ll long long 
#define pb emplace_back
#define sz(x) int(x.size())
#define all(x) x.begin(), x.end()   
#define watch(x) cout << #x << " = " << x << endl   
#define IOS ios::sync_with_stdio(false),cin.tie(nullptr);                                                                                                  
using namespace std;
int n, h, m;

int res(int x, int y){
    int p = x * 60  + y;
    int q = h * 60 + m;
    if(x < h){
        return (24*60) - abs(p-q);
    }
    else if(x == h){
        if(y < m){
            return (24*60) - abs(p-q);
        }
        else return abs(p-q);
    }
    else return abs(p-q);
}
void solve(){
    
    cin >> n >> h >> m;
    vector <int> v;
    for(int i = 0; i < n; i++){
        int x, y; cin >> x >> y;
        v.pb(res(x,y));
    }
    sort(all(v));
    if(v[0] == 0) cout << 0 << " " << 0 << endl;
    else{
        int g = v[0] / 60;
        cout << g << " " << v[0] % 60 << endl;
    } 
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