#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    for(int i=1;i<=t;i++){
       long long n;
        cin>>n;

        vector<long long>d(n);
        vector<long long>o;
        map<long long,long long>g;

        for(int i=0;i<n;i++){
            cin>>d[i];
        }
         
        for (int i = 0; i < n; i++) {
            g[d[i]]++;
        }

    map<long long,long long>::iterator it;
	for(it=g.begin();it!=g.end();it++){
		long long r=(*it).second;
        if(r>=3){
           o.push_back((*it).first);
        }
	}
    if (o.empty()) {
            cout << "-1" << endl;
        } else {
            cout << o[0] << endl;
        }
        
    }

    return 0;
}