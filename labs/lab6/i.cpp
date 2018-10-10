#include <iostream>

using namespace std;

char toUpper(char a){
    return a-'a'+'A';
}

int main(){

    string s;
    cin >> s;
    
    for(int i = 0; i < s.size(); i++){
        if(i % 2 == 0)cout<<toUpper(s[i]);
        else cout<<s[i];
    }
}
