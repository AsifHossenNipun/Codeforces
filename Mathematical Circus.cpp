#include<bits/stdc++.h>    
#define pb emplace_back
#define ll long long
#define watch(x) cout << #x << " = " << x << endl   
#define IOS ios::sync_with_stdio(false),cin.tie(nullptr); 

                                                                                               
using namespace std;

void solve(){
    int n, m;
    cin >> n >> m;
    if(m == 0) cout << "NO" << endl;
    else if(m % 2 == 1){
        cout << "YES"  << endl;
        for(int i = 1; i < n; i += 2){
            cout << i << " " << i + 1 << endl;
        }
    }
    else if(m % 2 == 0 and m % 4 == 0){
        cout << "NO" << endl;
    }
    else{

        cout << "YES" << endl;
        
        for(int i = 1; i < n; i += 4){
            cout << i + 1 << " " << i << endl;
        }
        for(int i = 3; i < n; i += 4){
            cout << i << " " << i + 1 << endl;
        }
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


