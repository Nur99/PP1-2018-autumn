#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    
    int n, a;
    cin >> n;
    vector<int> v(n+1);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    int x, y;
    cin >> x >> y;

    for(int i = v.size()-1; i > x; i--){
        v[i] = v[i-1];
    }
    v[x] = y;
    for(int i = 0; i < v.size(); i++)cout<<v[i]<<' ';
    return 0;
}