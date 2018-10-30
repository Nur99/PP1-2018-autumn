#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    
    int n, a;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++){
        cin >> a;
        v.push_back(a);
    }
    
    int j = n-1;
    for(int i = 0 ; i  <  n/2; i++){
        swap(v[i], v[j]);
        j--;
    }

    for(int i = 0; i < n; i++)cout<<v[i]<<' ';

    return 0;
}