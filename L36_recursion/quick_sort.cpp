#include <iostream>

using namespace std;

int partition(int arr[],int s,int e){
    int pivot = arr[s];

    int cnt = 0;
    for(int i = s+1;i<=e;i++){
        if(arr[i] <= pivot ){  //    how many elements are less then pivot
            cnt++;
        }
    }

    // place pivot
    int pivotIndex = s + cnt;
    swap(arr[pivotIndex] , arr[s]);


    // leftr and right  wala part sambhal lete hai
    int i = s, j = e;

    while(i < pivotIndex && j > pivotIndex){

    }

    return pivotIndex;


}

void quickSort(int arr[], int s, int e){
    // base case
    if(s>=e){
        return;
    }

    // partition kerenge 
    int p  = partition(arr,s,e);

    // left part sort kero
    quickSort(arr,s,p-1);

    //  right wala part sort kero
    quickSort(arr,p+1,e);
}

int main(){
    int arr[] = {2,4,1,6,9};
    int n = 5;
     

    quickSort(arr,0,n-1);
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

return 0;
}