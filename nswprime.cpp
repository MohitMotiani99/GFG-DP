#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n+1];
	arr[0]=1;
	arr[1]=1;
	for(int i=2;i<=n;i++){
		arr[i]=2*arr[i-1]+arr[i-2];
	}
	cout<<arr[n]<<endl;
}
