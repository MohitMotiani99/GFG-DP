#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n+1];
	int b[n+1];
	a[0]=1;a[1]=0;b[0]=0;b[1]=1;
	for(int i=2;i<=n;i++){
		a[i]=a[i-2]+2*b[i-1];
		b[i]=a[i-1]+b[i-2];
	}
	cout<<a[n]<<endl;
}
