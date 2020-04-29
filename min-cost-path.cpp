//https://www.geeksforgeeks.org/min-cost-path-dp-6/

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i,j,m;
	cin>>n>>m;
	int arr[n][m];
	for(i=0;i<n;i++)for(j=0;j<m;j++)cin>>arr[i][j];
	int dp[n][m];
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
		if(i==0 && j==0)
		dp[i][j]=arr[i][j];
		else if(i==0)
		dp[i][j]=arr[i][j]+dp[i][j-1];
		else if(j==0)
		dp[i][j]=arr[i][j]+dp[i-1][j];
		
		else{
			if(i-1>=0)
			dp[i][j]=arr[i][j]+dp[i-1][j];
			if(i-1>=0 && j-1>=0)
			dp[i][j]=min(dp[i][j],arr[i][j]+dp[i-1][j-1]);
			if(j-1>=0)
			dp[i][j]=min(dp[i][j],arr[i][j]+dp[i][j-1]);
		}
	}
}
	/*cout<<endl;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
			cout<<dp[i][j]<<" ";
		cout<<endl;
	}
	cout<<endl;*/
	
	cout<<dp[n-1][m-1]<<endl;
}
