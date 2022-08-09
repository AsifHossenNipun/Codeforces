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
    
    
    string s;
    cin >> s;
    if(s.length() == 2) cout << s[1] << endl;
    else{
        int mn = 9;
        int l = stoi(s);
        while(l){
            int x = l % 10;
            l /= 10;
            mn = min(mn,x);
        }
        cout << mn << endl;
    }
}


int main(){

    int tt; 
    cin >> tt;
    while(tt--){
        solve();
        
    }

    return 0;

}
