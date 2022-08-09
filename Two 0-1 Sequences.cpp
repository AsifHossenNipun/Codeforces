#include<bits/stdc++.h>  
#define ll long long                                                                                                           
using namespace std;

void solve(){
    int n, m; string a, b;
    cin >> n >>  m >> a >> b;
    bool fl = true;
    for(int i = 0; i < m - 1; i++){
        if(a.back() != b.back()){
            fl = false;
            break;
        }
        a.pop_back(); 
        b.pop_back();
    }
    if(!fl) cout << "no" << endl;
    else if(b == "0" and a == string(n-m+1, '1')) cout << "no" << endl;
    else if(b == "1" and a == string(n-m+1, '0')) cout << "no" << endl;
    else cout << "yes" << endl;


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