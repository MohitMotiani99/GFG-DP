//https://practice.geeksforgeeks.org/problems/minimum-steps-to-minimize-n-as-per-given-condition/0

#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n,i;
	cin>>t;
	while(t--){
		cin>>n;
		int dp[n+1];
		dp[0]=0;
		dp[1]=0;
		for(i=2;i<=n;i++){
			dp[i]=INT_MAX;
			if(i%2==0)
			dp[i]=min(dp[i],1+dp[i/2]);
			if(i%3==0)
			dp[i]=min(dp[i],1+dp[i/3]);
			
			dp[i]=min(dp[i],1+dp[i-1]);
		}
		//for(i=0;i<=n;i++)cout<<dp[i]<<"  ";
		//cout<<endl;
		cout<<dp[n]<<endl;
	}
	
}
