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
	int n, c1=0, c2=0, sum=0, imp=-1;
	cin >> n;
	int a[n];
	fore(i, n){
		cin >> a[i];
		sum+=a[i];
		if(a[i]==-1)
			c1++;
		else
			c2++;
	}
	if(sum>0)
		cout << ((c2-c1)%2==0?(c2-c1)/2:imp) << "\n";
	else if (sum < 0)
		cout << ((c1-c2)%2==0?(c1-c2)/2:imp) << "\n";
	else
		cout << sum << "\n";
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