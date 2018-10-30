#include <iostream>
#include <cmath>
#include <vector>
using namespace std;


int main(){
    int n;
    cin >> n;

    vector <int> v;

    for(int i =0 ; i < n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }


    int x;
    cin >> x;

    for(int i = 0; i < n; i++){
        if(x == v[i]){
            cout<<"Yes";
            exit(0);
        }
    }
    cout<<"No";

    return 0;
}