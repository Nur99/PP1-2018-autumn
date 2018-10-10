#include <iostream>
#include <cmath>

using namespace std;

void reverse(int a[], int n){
    int j = n-1;
    
    for(int i = 0; i < n/2; i++){
        swap(a[i], a[j]);
        j--;
    }
}

int main(){

    int a;
    cin>>a;
    
    int a[n];
    
    for(int i = 0; i < n; i++)cin>>a[i];
    
    reverse(a, n);
    
    for(int i = 0; i < n; i++)cout<<a[i];
    
}
