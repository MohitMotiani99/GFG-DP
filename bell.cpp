#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,j;
	cin>>n;
	int **arr=new int*[n+1];
	for(i=0;i<n+1;i++)arr[i]=new int[n+1];
	for(i=0;i<n+1;i++)for(j=0;j<n+1;j++)arr[i][j]=0;
	for(i=0;i<n+1;i++){
		for(j=0;j<n+1 && i>=j;j++){
			if(j==0)
			arr[i][j]=1;
			else
			arr[i][j]=j*arr[i-1][j]+arr[i-1][j-1];
		}
	}
	long sum=0;
	for(j=0;j<n+1;j++)
	sum+=arr[n][j];
	
	cout<<arr[n][n]<<" "<<sum<<endl;
}
