#include<iostream>

using namespace std;

int isSorted(int arr[],int n ){
    for(int i=1;i<n;i++){
        if(arr[i] < arr[i - 1]){
            return false;
        }
    }
    return true;
}

int main(){
    int arr[]={10,20,3};
    cout<<isSorted(arr,3);
    return 0;
}