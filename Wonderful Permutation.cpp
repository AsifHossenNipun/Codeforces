#include<bits/stdc++.h>  
#define ll long long  
#define watch(x) cout << #x << " = " << x << endl   
#define IOS ios::sync_with_stdio(false),cin.tie(nullptr);   
                                                                                               
using namespace std;

void solve(){
    int x, y;
    cin >> x >> y;
    int a[x];
    for(int i = 0; i < x; i++){
        cin >> a[i];

    }
    int cnt = 0;
    for(int i = 0; i < y; i++){
        if(a[i] <= y) cnt++;
    }
    cout << y - cnt << endl;
}

bool multi = true;
int main(){
    IOS
    int tt = 1;
    if(multi)cin >> tt;
    while(tt--)solve();
    return 0;
}


