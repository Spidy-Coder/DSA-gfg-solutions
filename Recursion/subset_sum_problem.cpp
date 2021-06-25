#include<iostream>
#include<limits.h>

using namespace std;

int fun(int arr[],int n,int sum){

    if(n==0){
        return sum == 0 ? 1:0;
    }

    return (fun(arr,n-1,sum) + fun(arr,n-1,sum-arr[n-1]));
}

int main(){
    int arr[] = {10,20,30};
    int n=3,sum=30;
    cout<<fun(arr,n,sum);
    return 0;
}