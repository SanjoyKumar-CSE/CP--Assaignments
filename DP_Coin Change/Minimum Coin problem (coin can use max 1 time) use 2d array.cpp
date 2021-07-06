#include<bits/stdc++.h>
#define pb push_back
#define ll long long

using namespace std;

void solve(int t)
{
	ll n,m;
	cin >> n >> m;
	ll a[m];
	for(int i=0;i<m;i++)
		cin >> a[i];
	
	ll dp[m][n+2];
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<=n;j++)
			dp[i][j]=INT_MAX-5;
	}
	dp[0][0]=0;
	dp[0][a[0]]=1;
	for(int i=1;i<m;i++)
	{
		for(int j=0;j<=n;j++)
		{
			if(a[i]>j)dp[i][j]=dp[i-1][j];
			else dp[i][j]=min(dp[i-1][j],1+dp[i-1][j-a[i]]);
		}

	}

	if(dp[m-1][n]==INT_MAX-5)cout << "Not Possible\n";
	else
	cout << dp[m-1][n] << endl;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int testcase=1;
	//cin >> testcase;
	for(int i=1;i<=testcase;i++)
		solve(i);
	return 0;
}