#include<bits/stdc++.h>  
#define ll long long  
#define watch(x) cout << #x << " = " << x << endl   
#define IOS ios::sync_with_stdio(false),cin.tie(nullptr);   
                                                                                               
using namespace std;

void solve(){
    int x;
    cin >> x;
    if(x % 2 == 0){
        for(int i = 1; i <= x; i += 2) cout << i + 1  << " " << i << endl;
    }
    else{
        cout << 1 << " ";
        if(x > 1){
            for(int i = 2; i <= x; i += 2){
                cout << i + 1 << " " << i << " ";
            }
            cout << endl;
        }
        else cout << endl;
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


