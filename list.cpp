#include<iostream>
#include<list>
using namespace std;
int main(){
	//sequence container
	list<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	cout<<"Size=>"<<v.size()<<endl;
	list<int>::iterator itr=v.begin();
	//cout<<*(itr+1)<<endl;Not contagious
	for(;itr!=v.end();itr++){
		cout<<"Value=>"<<*itr<<endl;
	}
	v.clear();
	cout<<"Size=>"<<v.size()<<endl;
	return 0;




}