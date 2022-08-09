#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define INT 1e+9
#define mp make_pair
#define vi vector<int>
#define S(v) sizeof(v)
#define all(v) v.begin() v.end()
using namespace std;

 


void solve(){
    
    int a, b;
    cin >> a >> b;
    int n = min(a,b);
    while(n){
        cout << "01";
        n--;
    }
    for(int i = 0; i < abs(a-b); i++){
        cout << (a > b ? 0 : 1);
    }
    cout << endl;
}


int main(){

    int tt; 
    cin >> tt;
    while(tt--){
        solve();
        
    }

    return 0;

}
