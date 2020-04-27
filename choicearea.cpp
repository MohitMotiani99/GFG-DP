/*#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
bool pa(pair<pair<int,int> ,char> temp,int x1,int x2,int y1,int y2,int z1,int z2,unordered_set<char> ch){
	if(temp.second=='X'){
		if((temp.first.first+y1>=0 && temp.first.second+y2>=0)||(temp.first.first+z1>=0 && temp.first.second+z2>=0))
		return true;
	}
	else if(temp.second=='Y'){
		if((temp.first.first+x1>=0 && temp.first.second+x2>=0)||(temp.first.first+z1>=0 && temp.first.second+z2>=0))
		return true;
	}
	else if(temp.second=='Z'){
		if((temp.first.first+y1>=0 && temp.first.second+y2>=0)||(temp.first.first+x1>=0 && temp.first.second+x2>=0))
		return true;
	}
	else if(temp.second=='O'){
		if((temp.first.first+x1>=0 && temp.first.second+x2>=0 && )||(temp.first.first+z1>=0 && temp.first.second+z2>=0 && ch!='Z')||(temp.first.first+y1>=0 && temp.first.second+y2>=0 && ch!='Y'))
		return true;
	}
	return false;
}
int main(){
	int a,b,x1,x2,y1,y2,z1,z2;
	cin>>a>>b;
	cin>>x1>>x2>>y1>>y2>>z1>>z2;
	int flag=0;
	stack<pair<pair<int,int>, char> > s;
	s.push({{a,b},'O'});
	if(a+x1>=0 && b+x2>=0)
	s.push({{a+x1,b+x2},'X'});
	else if(a+y1>=0 && b+y2>=0)
	s.push({{a+y1,b+y2},'Y'});
	else if(a+z1>=0 && b+z2>=0)
	s.push({{a+z1,b+z2},'Z'});
	else
	flag=1;
	int maxr=0;
	if(flag==1)
	cout<<"0"<<endl;
	else{
	unordered_set<char> ch;
	while(!s.empty()){
		if(!pa(s.top(),x1,x2,y1,y2,z1,z2,ch)){
			if(maxr<s.size()-1)
			maxr=s.size()-1;
		while(!pa(s.top(),x1,x2,y1,y2,z1,z2,ch)){
			if(s.size()==2)
			ch.insert(s.top().second);	
			s.pop();
		}
		}
		else{
			cout<<s.top().first.first<<","<<s.top().first.second<<","<<s.top().second<<"     ";
			pair<pair<int,int>, char> temp=s.top();
			if(temp.first.first+x1>=0 && temp.first.second+x2>=0 && temp.second!='X')
			s.push({{temp.first.first+x1,temp.first.second+x2},'X'});
			else if(temp.first.first+y1>=0 && temp.first.second+y2>=0 && temp.second!='Y')
			s.push({{temp.first.first+y1,temp.first.second+y2},'Y'});
			else if(temp.first.first+z1>=0 && temp.first.second+z2>=0 && temp.second!='Z')
			s.push({{temp.first.first+z1,temp.first.second+z2},'Z'});
		}
	}
	cout<<maxr<<endl;
}
}
/*
20 8
3 2 -5 -10 -20 5
*/

