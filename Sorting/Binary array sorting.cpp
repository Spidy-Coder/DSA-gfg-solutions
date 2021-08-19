void binSort(int arr[], int N)
    {
       int i = -1, j = N;
       while(true){
           do{i++;}while(arr[i] == 0);
           do{j--;}while(arr[j] == 1);
           if(i>=j){
               return;
           }
           swap(arr[i],arr[j]);
           
       }
    }
