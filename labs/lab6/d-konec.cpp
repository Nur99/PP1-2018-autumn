#include <iostream>
using namespace std;

void solution(int a[], int n, int x){
    
    for(int i = 0; i < n; i++){
        if(a[i] == x){
            cout<< "YES";   
        }
    }
    cout<<"NO";
}

/*
string solution(int a[], int n, int x){
    
    for(int i = 0; i < n; i++){
        if(a[i] == x){
            return "YES";   
        }
    }
    return "NO";
}

*/
int main(){
    int n;
    cin>>n;
    
    int a[n];
    
    for(int i = 0; i < n; i++){
        cin>>a[i];   
    }
    int x;
    cin>>x;
    
    solution(a, n, x);
    
    
}


