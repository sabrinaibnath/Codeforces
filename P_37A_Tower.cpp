#include<bits/stdc++.h>
using namespace std;
int main()
{
  //koto ta unique number ache ta holo tower
  //ekta number kotobar ache ta holo highest length

  int n;
  cin>>n;
  int d[n];

  for(int i=0;i<n;i++){
    cin>>d[i];
  }  
   map<int,int>m;

    for(int i=0;i<n;i++){
        if(m.find(d[i])==m.end()){
            m.insert(make_pair(d[i],1));
        }
        else{
            m[d[i]]++;
        }
    } 
    int h=0,t=m.size();
    for(auto i:m){
       h=max(h,i.second);
    }
  cout<<h<<" "<<t<<endl;

  return 0;
}