#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k,i;
	cin>>n;
	int *arr=new int[n];
	cin>>k;
	for(i=0;i<n;i++)cin>>arr[i];
	sort(arr,arr+n,greater<int>());
	int *out=new int[n];
	out[0]=0;
	for(i=1;i<n;i++){
		if(abs(arr[i]-arr[i-1])<k)
		out[i]=arr[i]+arr[i-1];
		else
		out[i]=out[i-1];
	}
	cout<<out[n-1]<<endl;
}
