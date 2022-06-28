#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n, k, sum = 0;
	string str;
	cin >> n >> k;
	cin >> str;

	sort(str.begin(), str.end());
	char last = str[0];
	if(k == 1){
		cout << str[0] - 'a' + 1<< endl;
		return 0;
	}

	sum = str[0] - 'a' + 1;
	int count = 1;
	for(int i = 1 ; i < n; i++){
		if(str[i] >= last + 2) {
			sum += (str[i] - 'a' + 1);
			count++;
			last = str[i];
		}
		if(count == k){
			cout << sum << endl;
			return 0;
		}


	}

	cout << -1 << endl;
	return 0;




}
