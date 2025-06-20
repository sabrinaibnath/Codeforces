#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);  

    vector<int> d;
    int n = s.length();

   
    for(int i = 0; i < n; i++) {
        if (isdigit(s[i])) {  
            d.push_back(s[i] - '0');
        }
    }

   
    sort(d.begin(), d.end());

    int o=d.size();
    for (int i = 0; i < o; i++) {
        if (i != 0) cout << "+";
        cout << d[i];
    }

    cout << endl;

    return 0;
}
