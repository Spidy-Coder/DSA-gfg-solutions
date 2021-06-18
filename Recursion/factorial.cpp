#include<iostream>
using namespace std;

int fact(int N, int k){
    if(N==0 || N==1){
        return k;
    }

    return fact(N-1,k*N);
}

int main(){
    int N = 4, k=1;
    cout<<fact(N,k);
    
}