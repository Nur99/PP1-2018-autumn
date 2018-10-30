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
/*

ERROR
    for(int i =0 ; i < n; i++){
        cout<<s[i]<<' ';
    }
*/

    int sum = 0;
    for(set <int>::iterator i = s.begin(); i != s.end(); i++){
        if(*i % 2 == 0){
            s.erase(i);
        }
    }
    
    for(set <int>::iterator i = s.begin(); i != s.end(); i++){
        cout<<*i<<' ';
    }

    return 0;
}