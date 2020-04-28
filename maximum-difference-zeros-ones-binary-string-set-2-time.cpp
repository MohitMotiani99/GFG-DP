//https://www.geeksforgeeks.org/maximum-difference-zeros-ones-binary-string-set-2-time/

#include<bits/stdc++.h>
using namespace std;
int main(){
	string str;
	int i;
	cin>>str;
	int dp[str.size()];
	for(i=0;i<str.size();i++){
		if(i==0){
			if(str[0]=='0')
			dp[0]=1;
			else
			dp[0]=-1;
		}
		else if(str[i]=='0'){
			if(str[i-1]=='0')
			dp[i]=1+dp[i-1];
			else if(str[i-1]=='1'  &&  dp[i-1]>=0)
			dp[i]=1+dp[i-1];
			else
			dp[i]=1;
		}
		else{
			//if(str[i-1]=='0')
			dp[i]=dp[i-1]-1;
			//else
			//dp[i]=1;
		}
	}
		
	//for(i=0;i<str.size();i++)cout<<dp[i]<<" ";
	//cout<<endl<<endl;
		
	int maxr=INT_MIN;
	for(i=0;i<str.size();i++){
		maxr=max(maxr,dp[i]);
	}
	cout<<maxr<<endl;
}
