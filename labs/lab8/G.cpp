#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

bool isprime(int n){
    for (int i = 2; i <= n-1; i++){
        if (n%i == 0)return false;
    }
    return true;
}

int main(){
    
    int n, a;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++){
        cin >> a;
        v.push_back(a);
    }

    int x;
    cin >> x;
    int cnt = 0;
    for(int i = 0; i < v.size(); i++){
        if(isPrime(v[i]) == true && v[i] > x){
            cnt++;
        }
    }
    cout<<cnt;
    



    return 0;
}