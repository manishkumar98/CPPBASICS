#include<iostream>
#include<list>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
	//sequence container
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(20);
	v.push_back(40);
	v.push_back(50);
	sort(v.begin(),v.end());
	cout<<"Size=>"<<v.size()<<endl;
	vector<int>::iterator itr=v.begin();
	//cout<<*(itr+1)<<endl;Not contagious
	for(;itr!=v.end();itr++){
		cout<<"Value=>"<<*itr<<endl;
	}
	v.clear();
	cout<<"Size=>"<<v.size()<<endl;
	return 0;




}