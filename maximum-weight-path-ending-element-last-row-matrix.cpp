#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int **arr=new int*[n];
	for(int i=0;i<n;i++)
	{
		arr[i]=new int[n];
	}
	for(int i=0;i<n;i++)for(int j=0;j<n;j++)cin>>arr[i][j];
	int **dp=new int*[n];
	for(int i=0;i<n;i++)
	{
		dp[i]=new int[n];
	}
	for(int i=0;i<n;i++)for(int j=0;j<n;j++)dp[i][j]=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==j && i==0)
				dp[i][j]=arr[i][j];
			
			else if(i==0)
				dp[i][j]=arr[0][0];
			
			else if(j==0)
				dp[i][j]=dp[i-1][j]+arr[i][j];

			else
				dp[i][j]=arr[i][j]+max(dp[i-1][j-1],dp[i-1][j]);
		}
	}
	
	int max=INT_MIN;
	for(int i=0;i<n;i++){
		if(dp[n-1][i]>max)
		max=dp[n-1][i];
	}
	cout<<max<<endl;
}
/*
5
4 1 5 6 1
2 9 2 11 10
15 1 3 15 2
16 92 41 4 3
8 142 6 4 8
*/
