#include<bits/stdc++.h>    
#define pb emplace_back
#define ll long long
#define watch(x) cout << #x << " = " << x << endl   
#define IOS ios::sync_with_stdio(false),cin.tie(nullptr); 

                                                                                               
using namespace std;

void solve(){
    int n, m;
    cin >> n >> m;
    if(n == 1 and m == 1) cout << "Tonya" << endl;
    else if(n % 2 == 1 and m % 2 == 1)cout << "Tonya" << endl;
    else if(n % 2 == 1 or m % 2 == 1) cout << "Burenka" << endl;
    else cout << "Tonya" << endl;
}

bool multi = true;
int main(){
    IOS
    int tt = 1;
    if(multi)cin >> tt;
    while(tt--)solve();
    return 0;
}


