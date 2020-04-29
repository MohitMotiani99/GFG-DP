//https://www.geeksforgeeks.org/minimum-sum-of-multiplications-of-n-numbers/

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i,pos,sum=0,x;
	cin>>n;
	int arr[n];
	vector<int> v;
	for(i=0;i<n;i++){cin>>x;v.push_back(x);}
	while(v.size()!=1){
		int min=INT_MAX;
		for(i=0;i<v.size()-1;i++){
			if((v[i]+v[i+1])%100 < min)
			{min=(v[i]+v[i+1])%100;pos=i;}
			
			else if((v[i]+v[i+1])%100 == min)
			{if((v[pos]*v[pos+1])>(v[i]*v[i+1])){
				pos=i;
				//cout<<"h"<<endl;
				}
			}
		}
		//cout<<"o"<<endl;
		sum+=(v[pos]*v[pos+1]);
		v[pos]=min;
		v.erase(v.begin()+pos+1);
	}
	cout<<sum<<endl;
}
