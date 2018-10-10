#include <iostream>
#include <cmath>

using namespace std;

int sum(int a){
    
    int ans = 0;

    while(a != 0){
        ans += a%10;
        a /= 10;
    }

    return ans;    
}

int main(){

    int a;
    cin>>a;
    
    cout<<sum(a);
}
