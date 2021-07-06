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
	sort(a,a+m);
	ll dp[55][255];
	memset(dp,0,sizeof(dp));
	for(int i=0;i<=n;i++)
	{
		if(i%a[0]==0)dp[0][i]=1;
	}
	for(int i=1;i<m;i++)
	{
		for(int j=0;j<=n;j++)
		{
			if(a[i]>j)dp[i][j]=dp[i-1][j];
			else dp[i][j]=dp[i-1][j]+dp[i][j-a[i]];
		}
	}
	cout << dp[m-1][n] << endl;
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