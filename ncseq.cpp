#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n+1];
	arr[0]=0;
	arr[1]=1;
	arr[2]=1;
	for(int i=3;i<=n;i++){
		arr[i]=arr[arr[i-1]]+arr[i-arr[i-1]];
	}
	cout<<arr[n]<<endl;
}
