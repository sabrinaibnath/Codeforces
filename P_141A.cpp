#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str1,str2,str3;

    getline(cin,str1);
    getline(cin,str2);
    getline(cin,str3);

   map<char,int>cat;
   map<char,int>st3;
   string ca=str1+str2;

    for(char i:ca){
        if(cat.find(i)==cat.end()){
              cat.insert(make_pair(i,1));
        }
        else{
            cat[i]++;
        }
    }

    map<char,int>::iterator it;
	for(it=cat.begin();it!=cat.end();it++){
		cout<<(*it).first<<" "<<(*it).second<<endl;
	}

    for(char i:str3){
        if(st3.find(i)==st3.end()){
              st3.insert(make_pair(i,1));
        }
        else{
            st3[i]++;
        }
    }

    cout<<"it's the string 3: "<<endl;
    map<char,int>::iterator it2;
	for(it2=st3.begin();it2!=st3.end();it2++){
		cout<<(*it2).first<<" "<<(*it2).second<<endl;
	}

    if(cat==st3){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }


}
