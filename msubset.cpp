#include <iostream>
using namespace std;

int main() {
	//code
	int t,n,m;
	cin>>t;
	for(int i=0;i<t;i++){
	    int flag=0;
	    cin>>n>>m;
	    int *arr=new int[n];
	    for(int j=0;j<n;j++)cin>>arr[n];
	    int sum=0;
	    for(int j=0;j<n;j++)sum+=arr[j];
	    bool **dp=new bool*[n+1];
	    for(int j=0;j<n+1;j++)dp[j]=new bool[sum+1];
	    for(int j=0;j<=n;j++)dp[j][0]=true;
	    for(int j=1;j<=sum;j++)dp[0][j]=false;
	    for(int j=1;j<=n;j++){
	        for(int k=1;k<=sum;k++){
	            if(k<arr[j-1])
	            dp[j][k]=dp[j-1][k];
	            else
	            dp[j][k]=dp[j-1][k]||dp[j-1][k-arr[j-1]];
	            
	            if(dp[j][k]==true && k%m==0)
	            {flag=1;cout<<j<<"    "<<k<<endl;break;}
	        }
	        if(flag==1)
	        break;
	    }
	    if(flag==0)
	    cout<<"0"<<endl;
	    else
	    cout<<"1"<<endl;
	}
	return 0;
}
