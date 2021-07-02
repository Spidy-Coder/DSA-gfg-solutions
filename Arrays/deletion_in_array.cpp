#include<iostream>

using namespace std;

int Delete(int arr[],int n,int x){
    //{2,3,4,5} -> {2,3,5,_} ->6
    int i;
    for(i=0;i<n;i++){
        if(arr[i] == x)
            break;
    }
    if(i == n){
        return n;
    }
    for(int j=i;j<n-1;j++){
        arr[j] = arr[j+1];
    }
    return (n-1);
}

//driver code

int main(){

    int arr[] = {3, 8, 12, 5, 6}, x = 12, n = 5;

       cout<<"Before Deletion"<<endl;

       for(int i=0; i < n; i++)
       {
       	cout<<arr[i]<<" ";
       }

       cout<<endl;

     
       n = Delete(arr, n, x);

       cout<<"After Deletion"<<endl;

       for(int i=0; i < n; i++)
       {
       		cout<<arr[i]<<" ";
       }
}