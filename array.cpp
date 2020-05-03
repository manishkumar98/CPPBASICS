#include<algorithm>
#include<iostream>
using namespace std;
int main(){
	int arr[]={100,20,27,67,43,98};
	int *begin=&arr[0];
	int* end=&arr[0]+(sizeof(arr)/sizeof(int));
	sort(begin,end);
	for(;begin!=end;begin++){
		cout<<"Value=>"<<*begin<<endl;
	}
}