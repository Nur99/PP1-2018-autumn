#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;

    multiset <int> s;

    for(int i =0 ; i < n; i++){
        int x;
        cin >> x;
        s.insert(x);
    }

    int ans = 0;

    for(multiset <int>::iterator i = s.begin(); i != s.end(); i++){
        if(*i == k){
            ans++;
        }
    }

    cout<<ans;

}
