#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,x=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		string s;
		cin>>s;
		if(s[1]=='+'){
			++x;
		}
		else{
			--x;
		}
	}
	cout<< x <<endl;
	return 0;
	}
