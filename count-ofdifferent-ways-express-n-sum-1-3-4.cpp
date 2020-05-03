//https://www.geeksforgeeks.org/count-ways-reach-nth-stair-using-step-1-2-3/

#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		int dp[n+1]={0};
		dp[0]=1;
		dp[1]=1;
		
		for(int i=2;i<n+1;i++){
			if(i>=1)
			dp[i]+=dp[i-1];
			if(i>=3)
			dp[i]+=dp[i-3];
			if(i>=4)
			dp[i]+=dp[i-4];
			
		}
		
		//for(int i=0;i<n+1;i++){
		//	cout<<i<<"      "<<dp[i]<<endl;
		//}
		//cout<<endl;
		cout<<dp[n]<<endl;
	}	
}
