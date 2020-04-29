//https://www.geeksforgeeks.org/maximum-subarray-sum-array-created-repeated-concatenation/

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k,i,x;
	cin>>n>>k;
	vector<int> v,b;
	for(i=0;i<n;i++)
	{
		cin>>x;
		v.push_back(x);
	}
	k-=1;
	while(k--){
		b=v;
		v.insert(v.end(),b.begin(),b.end());
		b.clear();
	}
	//for(i=0;i<v.size();i++)cout<<v[i]<<" ";
	//cout<<endl;
	int sum=0;
	int max=0;
	for(i=0;i<v.size();i++){
		if(i==0)
		sum=max=v[i];
		
		else if(v[i]>=0 && sum>=0)
		{sum+=v[i];max=sum;}
		else if(v[i]>=0 && sum<0)
		{sum=max=v[i];}
		else if(v[i]<0)
		sum+=v[i];
	}
	cout<<max<<endl;
}
