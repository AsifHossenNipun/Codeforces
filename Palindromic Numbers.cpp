#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define INT 1e+9
#define mp make_pair
#define vi vector<int>
#define S(v) sizeof(v)
#define all(v) v.begin() v.end()


void init(){
    freopen("C:/Users/HP/Desktop/DSA/input.txt","r", stdin);
    freopen("C:/Users/HP/Desktop/DSA/output1.txt", "w", stdout);
}


using namespace std;

 


void solve(){
    
    int n;
    string s;
    cin >> n >> s;
    string b, a;
    if(s[0] == '9'){
        a = string(n + 1, '1');
    }
    else a = string(n, '9');
    reverse(s.begin(), s.end());
    int v = 0;
    for(int i = 0; i < n; i++){
        int x = a[i] - s[i] - v;
        if(x < 0){
            x += 10;
            v = 1;
        }
        else v = 0;
        b += '0' + x;
    }
    reverse(b.begin(), b.end());
    cout << b << endl;






}


int main(){
    init();
    /* Please set the input first */
    
    int tt; 
    cin >> tt;
    while(tt--){
        solve();
        
    }

    return 0;

}
