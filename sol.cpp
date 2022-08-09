#include<bits/stdc++.h>  
#define ll long long 
#define pb emplace_back
#define sz(x) int(x.size())
#define all(x) x.begin(), x.end()   
#define watch(x) cout << #x << " = " << x << endl   
#define IOS ios::sync_with_stdio(false),cin.tie(nullptr);   
                                                                                               
using namespace std;



int aside_negative(int a[], int n){
    int j = 0;
    for(int i = 0; i < n; i++){
        if(a[i] <= 0){
            int x = a[j];
            a[j++] = a[i];
            a[i] = x;
            
        }
    }
    return j;
}


void solve(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int start = aside_negative(a,n);
  
    int l =  n - start, p = 0;

    for(int i = start; i < n; i++){
        if(a[i] <= l){
            a[start + a[i] - 1] = -1;
        }
    }
    for(int i = start; i < n; i++){
        if(a[i] > 0) {cout << i + 1 - start << endl; return; }
    }
    cout << l + 1 << endl;

}

bool multi = true;
int main(){
    IOS
    int tt = 1;
    if(multi)cin >> tt;
    while(tt--)solve();
    return 0;
}


