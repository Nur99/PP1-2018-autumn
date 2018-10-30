#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin >> n;

    set <int> s;

    for(int i =0 ; i < n; i++){
        int x;
        cin >> x;
        s.insert(x);
    }

    cout<<s.size();
/*

ERROR
    for(int i =0 ; i < n; i++){
        cout<<s[i]<<' ';
    }
*/

    int sum = 0;
    for(set <int>::iterator i = s.begin(); i != s.end(); i++){
        sum  += *i;
    }
    cout<<sum;

    return 0;
}