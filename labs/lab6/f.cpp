#include <iostream>
#include <cmath>

using namespace std;

bool isValid(string s, int n){
    int cnt = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] >= '0' && s[i] <= '9'){
            cnt++;
        }
    }
    if(cnt >= n)return true;
    
    return false;
}

int main(){

    string s;
    cin>>s;
    
    int n;
    cin>>n;
    if(isValid(s, n) == true)cout<<"Yes";
    else cout<<"No";
}
