#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double
#define vt vector
#define arr array
#define pb push_back

#define fore(i, n) for (int i = 0; i < n; ++i)
#define FOR(i, k, n) for (i = k; k < n ? i < n : i > n ? i += 1 : i -= 1)
#define PI 3.141592653589793238
#define SOL 299792458

void solve(){
	string s;
	int n;
	cin >> n >> s;
	char res[2];
	for(int i=0; i<n; i=i+2){
		res[0]=s[i];
		res[1]=s[i+1];
		if(res[0]=='0' && res[1]=='0')
			cout << 'A';
		else if (res[0]=='0' && res[1]=='1')
			cout << 'T';
		else if (res[0]=='1' && res[1]=='0')
			cout << 'C';
		else
			cout << 'G';
	}
	cout << "\n";
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t, i = 1;
    cin>>t;
    while(t--){
        //cout<<"#"<<i<<": ";
        solve();
        //++i;
    }
    return 0;
}
