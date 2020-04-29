//https://www.geeksforgeeks.org/maximum-path-sum-position-jumps-divisibility-condition/

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)cin>>arr[i];
	int dp[n]={0};
	for(i=0;i<n;i++){
		if(i+1==1)
		dp[0]=arr[0];
		
		else {
			int x=i+1;
			int j=1;
			while(j<=x)
			{
				if(x%j==0)
				dp[i]=max(dp[i],dp[x/j - 1]+arr[i]);
				
				j++;
			}
			
		}
	}
	for(i=0;i<n;i++)
	cout<<dp[i]<<" ";
}
