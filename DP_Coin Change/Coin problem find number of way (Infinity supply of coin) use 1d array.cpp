#include<bits/stdc++.h>
#define pb push_back
#define ll long long

using namespace std;

void solve()
{
	ll n,m;
	cin >> n >> m;
	ll a[m];
	for(int i=0;i<m;i++)
		cin >> a[i];
	ll dp[n+2];
	memset(dp,0,sizeof(dp));
	dp[0]=1;
	for(int i=0;i<m;i++)
	{
		for(int j=a[i];j<=n;j++)
		{
			dp[j]=dp[j]+dp[j-a[i]];
		}
	}
	cout << dp[n] << endl;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int testcase=1;
	//cin >> testcase;
	while(testcase--)
		solve();
	return 0;
}