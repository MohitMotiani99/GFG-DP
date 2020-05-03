#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		int dp[n+1]={0};
		dp[0]=1;
		dp[1]=dp[2]=0;
		dp[3]=1;
		
		for(int i=4;i<n+1;i++){
			dp[i]+=dp[i-3];
		}
		for(int i=5;i<n+1;i++){
			dp[i]+=dp[i-5];
		}
		for(int i=10;i<n+1;i++){
			dp[i]+=dp[i-10];
		}
		//for(int i=0;i<n+1;i++){
		//	cout<<i<<"      "<<dp[i]<<endl;
		//}
		//cout<<endl;
		cout<<dp[n]<<endl;
	}	
}
