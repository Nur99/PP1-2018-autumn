#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    map <int, int> m;
    for(int i =0 ; i < n; i++){
        int x;
        cin >> x;
        m[x]++;
        //cout<<x<<' '<<m[x]<<endl;
    }

    /*
    m[3] = 5
    
    i -> first = 3
    i -> second = 5
    
    */
    
    int ans = 0;
    for(map<int,int>::iterator i = m.begin(); i != m.end(); i++){
        //cout<<i->first<<' '<<i->second<<endl;   
        if(i -> second >= 2){
            ans++;   
        }
    }
    cout<<ans;

}
