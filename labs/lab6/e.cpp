#include <iostream>
#include <cmath>

using namespace std;

double hypotenuse(double a, double b){

    double ans = sqrt(a*a + b*b);
    return ans;
    return sqrt(a*a + b*b);
}

int main(){
    double a, b;
    cin>>a>>b;
    
    cout<<fixed<<setprecision(4)<<hypotenuse(a, b);
}
