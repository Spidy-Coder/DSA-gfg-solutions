// input:-arr[]={1,2,3,4}
// output:-2  (index of second largest element)

#include<iostream>

using namespace std;

int SecondLargest(int arr[],int n)
{
    int res=-1,largest=0;
    for(int i=0;i<n;i++){
        if(arr[i]>arr[largest]){
            res=largest;
            largest=i;
        }
        else if(arr[i] != arr[largest]){
            if(res==-1 || arr[i] > arr[res]){
                res=i; //index of second largest element will get printed
            }
        }
    }
    return res;
}

int main(){
    int arr[] = {1,2,3,4},n=4;
    cout<<SecondLargest(arr,n);
    return 0;    
}