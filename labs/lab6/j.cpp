#include <iostream>
#include <cmath>

using namespace std;

int maximum(int a, int b, int c, int d){
    return max(max(a, b), max(c,d));
}

int main(){

    int a, b, c, d;
    cin>>a>>b>>c>>d;
    
    cout<<maximum(a,b,c,d);
}
