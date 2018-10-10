#include <iostream>

using namespace std;

void solution(string s){
    for(int i = 0; i < s.size(); i++){
        if(s[i] != 'e' && s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o')cout<<s[i];
    }
}

int main(){

    string s;
    
    getline(cin, s);
    
    solution(s);

}
