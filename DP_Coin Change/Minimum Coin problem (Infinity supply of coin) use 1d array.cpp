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
	
	ll dp[n+2];
	for(int j=0;j<=n;j++)
		dp[j]=INT_MAX-5;
	dp[0]=0;
	for(int i=0;i<m;i++)
	{
		for(int j=a[i];j<=n;j++)
		{
			dp[j] = min(dp[j],1+dp[j-a[i]]);
		}

	}
	if(dp[n]==INT_MAX-5)cout << "Not Possible\n";
	else
	cout << dp[n] << endl;
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