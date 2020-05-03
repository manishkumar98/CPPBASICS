#include<iostream>
#include<map>
#include<algorithm>
#include<iterator>
using namespace std;


  
int main() 
{ 
  map<int,int> x;
  x.insert(pair<int,int>(1,5));
  x.insert(pair<int,int>(2,15));
  x.insert(pair<int,int>(3,30));
  x.insert(pair<int,int>(4,45));
  x.insert(pair<int,int>(5,55));
  x.insert(pair<int,int>(6,65));
  map<int,int>::iterator itr;
  for(itr=x.begin();itr!=x.end();++itr){
  	cout<<itr->first;
  	cout<<'\t';
  	cout<<itr->second;
  	cout<<endl;
  }
  cout<<endl;
  

  
  



    return 0; 
} 
