#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >>n;
    
    map <string, int> m;
    
    for(int i =0 ; i < n; i++){
        string x;
        cin >> x;
        m[x]++;
    }
    
    int ans = 0;
    for(map <string, int>::iterator i = m.begin(); i != m.end(); i++){
        if(i->second == 3)ans++;
    }
    cout<<ans;
    
}
