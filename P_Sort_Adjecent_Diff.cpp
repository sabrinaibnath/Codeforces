#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        vector<long long> d(n);
        vector<long long> temp(n);

        for (int i = 0; i < n; i++) {
            cin >> d[i];
        }
        sort(d.begin(),d.end());
        int k=n-1;
        if(n%2==0){
        for(int i=0;i<n/2;i++){
           temp[k--]=d[n-1-i];
           temp[k--]=d[i];
        }        
    }
    else{
        temp[0]=d[n/2];
        for(int i=0;i<n/2;i++){
            temp[k--]=d[n-1-i];
            temp[k--]=d[i];
        }
    }
        for (int i = 0; i < n; i++) {
            cout << temp[i]<<" ";
        }
        cout<<endl;

        
    }
}
