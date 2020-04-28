//https://practice.geeksforgeeks.org/problems/stickler-theif/0
//O(n^2)
/*#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n,i;
	cin>>t;
	while(t--){
		cin>>n;
		int *arr=new int[n];
		for(i=0;i<n;i++)cin>>arr[i];
		int *dp=new int[n+1];
		for(i=0;i<=n;i++)dp[i]=0;
		for(i=0;i<=n;i++){
			if(i==0)
			dp[i]=0;
			
			else if(i==1)
			dp[i]=arr[0];
			
			else{
				for(int j=i-2;j>=0;j--){
					if(dp[i]<arr[i-1]+dp[j])
					dp[i]=arr[i-1]+dp[j];
				}
			}
			
		}
		int max=INT_MIN;
		for(i=0;i<=n;i++){
			if(max<dp[i])
			max=dp[i];
		}
		cout<<max<<endl;
	}
}*/

//O(n)


#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n,i;
	cin>>t;
	while(t--){
		cin>>n;
		int *arr=new int[n];
		for(i=0;i<n;i++)cin>>arr[i];
		int *dp=new int[n+1];
		for(i=0;i<=n;i++)dp[i]=0;
		for(i=0;i<=n;i++){
			if(i==0)
			dp[i]=0;
			
			else if(i==1)
			dp[i]=arr[0];
			
			else{
				dp[i]=max(arr[i-1]+dp[i-2],dp[i-1]);
			}
			
		}
		/*int max=INT_MIN;
		for(i=0;i<=n;i++){
			if(max<dp[i])
			max=dp[i];
		}
		cout<<max<<endl;*/
		
		cout<<dp[n]<<endl;
	}
}
