#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int number;
	cin>>number;
	for(int i=1;i<=number;i++){
		string data;
		cin>>data;
		int size=data.size();
		int s2=size-2;

		if(size>10){
			cout<<data[0]<<s2<<data[size-1]<<"\n";
		}
		else{
			cout<<data<<"\n";
		}
	}
	return 0;
}


