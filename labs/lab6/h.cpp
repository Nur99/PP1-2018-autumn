#include <iostream>
#include <cmath>

using namespace std;

bool isValid(string s){
    for(int i = 0; i < s.size(); i++){
        int a = s[i] - '0';
        if(a % 2 != 0){
            return false;   
        }
    }
    return true;
}

int main(){

    string s;
    cin >> s;A
    
    if(isValid(s) == true)cout<<"Valid";
    else cout<<"Not valid";

}
