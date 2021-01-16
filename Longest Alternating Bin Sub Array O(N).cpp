#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    
    //int c;
    int dp[n];
    for(int i=0;i<n;i++)dp[i]=0;
    dp[n-1]=1;
    for(int i=n-2;i>=0;i--){
        if(arr[i]!=arr[i+1])
        dp[i]=dp[i+1]+1;
        else
        dp[i]=1;
    }
    for(int i=0;i<n;i++)
    cout<<dp[i]<<" ";
    
}
