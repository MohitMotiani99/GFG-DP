#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    
    int c;
    int dp[n];
    for(int i=0;i<n;i++)dp[i]=0;
    for(int i=0;i<n;i++){
        if(i==0){
            c=1;
            for(int j=i+1;j<n;j++)
            {
                if(arr[j-1]!=arr[j])
                c++;
                else
                break;
            }
            dp[i]=c;
        }
        if((i+1)<=dp[i-1]+i-1)
        dp[i]=dp[i-1]-1;
        else{
            c=1;
            for(int j=i+1;j<n;j++)
            {
                if(arr[j-1]!=arr[j])
                c++;
                else
                break;
            }
            dp[i]=c;
        }
        cout<<dp[i]<<" ";
    }
}
