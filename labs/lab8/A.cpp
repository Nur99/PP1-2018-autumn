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
    

    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(v[i] > v[j])swap(v[i], v[j]);
        }
    }
    

    for(int i = 0; i < n; i++){
        cout << v[i] << " ";
    }

    return 0;
}