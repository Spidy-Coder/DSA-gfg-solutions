#include<iostream>

using namespace std;

int freq(int arr[],int n ){
    int freq = 1, i = 1;
    while(i<n){
        while(i<n && arr[i] == arr[i-1]){
            freq++;
            i++;
        }
        cout<<arr[i-1]<<" "<<freq;
        freq = 1;
        i++;
    }
    
}

//driver code

int main() {
	
      int arr[] = {10, 10, 20, 30, 30, 30}, n = 6;

      freq(arr, n);
    
}