#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    set <char> ch;


    for(int i =0 ; i < s.size(); i++){
        char x = s[i];
        if(x >= 'A' && x <= 'Z'){
            ch.insert(x-'A'+'a');
        }
        else ch.insert(x);

    cout<<ch.size()<<endl;
    
    for(set <char>::iterator i = ch.begin(); i != ch.end(); i++){
        cout<<*i<<' ';
    }

    return 0;
}