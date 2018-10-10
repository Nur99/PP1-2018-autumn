#include <iostream>
#include <cmath>

using namespace std;

string solution(string s, int n){
    
    for(int i = 0; i < s.size(); i++){
        if(s[i] >= '0' && s[i] <= '9'){
            int cnt = 1; 
            for(int j = i+1; j < s.size(); j++){
                if(s[j] >= '0' && s[j] <= '9'){
                    cnt++;
                    if(cnt >= n)return "YES";
                }
                else {
                    break;   
                }
            }
        }
    }
    return "NO";
}

int main(){

    string s;
    cin>>s;
    
    int n;
    cin>>n;
    
    cout<<solution(s, n);
}
