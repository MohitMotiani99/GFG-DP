#include <iostream>
using namespace std;

int main() {
	//code
	int t,n,sum,j,k;
	cin>>t;
	for(int i=0;i<t;i++){
	    cin>>n;
	    int *arr=new int[n];
	    for(j=0;j<n;j++)cin>>arr[j];
	    cin>>sum;
	    int **dp=new int*[n+1];
	    for(j=0;j<=n;j++)dp[j]=new int[sum+1];
	    for(j=0;j<=n;j++)dp[j][0]=1;
	    for(j=1;j<=sum;j++)dp[0][j]=0;
	    //cout<<"Hello"<<endl;
	    for(j=1;j<=n;j++){
	        for(k=1;k<=sum;k++){
	        	if(k-arr[j-1]>=0)
	            dp[j][k]=dp[j-1][k]+dp[j-1][k-arr[j-1]];
	            else
	            dp[j][k]=dp[j-1][k];
	        }
	    }
	    /*for(j=0;j<=n;j++){
	    	for(k=0;k<=sum;k++){
	    		cout<<dp[j][k]<<" ";
			}
			cout<<endl;
		}*/
		//cout<<endl;
	    cout<<dp[n][sum]<<endl;
	}
	return 0;
}
