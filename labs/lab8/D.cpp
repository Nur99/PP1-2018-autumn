#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

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
    
    v.erase(v.begin()+x);//erasing x^th element
    
    for(int i = 0; i < n-1; i++){
        cout << v[i] << " ";
    }
    return 0;
}