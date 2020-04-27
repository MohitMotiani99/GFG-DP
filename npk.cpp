#include<bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp> 
using boost::multiprecision::cpp_int;
using namespace std;
cpp_int npk(int n,int k,map<pair<int,int>, cpp_int> m){
	if(m.find({n,k})!=m.end())
	return m[{n,k}];
	else if(k>n)
	{
		m.insert({{n,k},0});
		return 0;
	}
	else if(k==0){
		m.insert({{n,k},1});
		return 1;
	}
	else if(n==k){
		cpp_int f=1;
		for(int i=1;i<=n;i++){
			f=f*i;
		}
		m.insert({{n,k},f});
		return f;
	}
	else{
		m.insert({{n,k},npk(n-1,k,m)+k*npk(n-1,k-1,m)});
		return m[{n,k}];
	}
}
int main(){
	int n,k;
	map<pair<int,int> ,cpp_int> m;
	cin>>n>>k;
	cout<<npk(n,k,m)<<endl;
}
