#include<iostream>

using namespace std;

int search(int arr[],int n,int x){
    for(int i=0;i<n;i++){
        if(arr[i] == x){
            return i;
        }
        
    }
    return -1;
    
}

//driver code

int main(){
    int arr[] = {1,2,3,4};
    cout<<search(arr,4,2);
}