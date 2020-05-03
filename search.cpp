#include<algorithm>
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
void show(int a[],int arraysize){
for(int i=0;i<arraysize;i++)
	cout<<a[i]<<" ";

}
int main(){
	int arr[100000];
	int x=0;
	int len=0;
	for(int i=0;i<100000;i++){
		if(getchar()==10){
			break;
		}
		cin>>arr[i];
		len++;
		

	}
	show(arr,len);
}