//https://www.geeksforgeeks.org/maximum-path-sum-starting-cell-0-th-row-ending-cell-n-1-th-row/

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i,j;
	cin>>n;
	int arr[n][n];
	for(i=0;i<n;i++)for(j=0;j<n;j++)cin>>arr[i][j];
	int dp[n][n];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
		if(i==0)
		dp[i][j]=arr[i][j];
		
		else{
			if(i-1>=0)
			dp[i][j]=arr[i][j]+dp[i-1][j];
			if(i-1>=0 && j-1>=0)
			dp[i][j]=max(dp[i][j],arr[i][j]+dp[i-1][j-1]);
			if(i-1>=0 && j+1<n)
			dp[i][j]=max(dp[i][j],arr[i][j]+dp[i-1][j+1]);
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
	int max=dp[n-1][0];
	for(i=0;i<n;i++){
		if(max<dp[n-1][i])
		max=dp[n-1][i];
	}
	cout<<max<<endl;
}
