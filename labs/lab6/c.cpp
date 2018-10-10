#include <iostream>
using namespace std;

int solution(int a[], int b[], int n){
    //"used" array keeps a frequency of i'th element in array "a"  
    //the biggest element which can be a[i] is 100, therefore size of used[i] is equal to 101
    
    int used[101];
    for(int i = 1; i <= 100; i++)used[i] = 0;

    for(int i = 0; i < n; i++){
        used[a[i]]++;
    }   

    //now we are working with b'th array
    
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(used[b[i]] > 0){
            cnt++;
            used[b[i]]--;
        }
    }
    return cnt;
}

int main(){
    int n;
    cin>>n;
    
    int a[n], b[n];
    
    for(int i = 0; i < n; i++)cin>>a[i];   
    for(int i = 0; i < n; i++)cin>>b[i];   
    
    cout<<solution(a, b, n);
}
