//https://practice.geeksforgeeks.org/problems/minimum-number-of-jumps/0

#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n,i,j;
	cin>>t;
	while(t--){
		cin>>n;
		int arr[n];
		for(i=0;i<n;i++)cin>>arr[i];
		int dp[n];
		dp[0]=0;
		int flag;
		if(arr[0]==0)
			{
				cout<<"-1"<<endl;
			}
		else{
		for(i=1;i<n;i++){
			flag=0;
			dp[i]=INT_MAX;
			for(j=i-1;j>=0;j--){
				if(i-j<=arr[j])
				dp[i]=min(dp[i],1+dp[j]);
			}
			if(dp[i]==INT_MAX)
			{
				flag=1;break;
			}
		}
		//for(i=0;i<n;i++)cout<<dp[n]
		
		if(flag==0)
		cout<<dp[n-1]<<endl;
		else if(flag==1)
		cout<<"-1"<<endl;
	}

	}
}
