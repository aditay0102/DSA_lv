#include <iostream>

using namespace std;

int main(){
    int a = 6;
    int c = a;
    int b = 4;
    int arr[a] = {6,5,4,3,2,1};
    int arr2[b] ={10,9,8,7};

    a = a+b;
    cout<<c<<endl;
   
    for(int i =0;i<b;i++){
        arr[c] = arr2[i];
        c++;
    }
    for(int i =0;i<a;i++){
        cout<<arr[i]<<" ";
    }

/*
    for(int i = 0;i<a;i++){
        arr3[i] = arr[i];
    }
    cout<<endl;
    int k=a;
   for(int i = 0;i<b;i++){
        arr3[k] = arr2[i];
        k++;
    }
*/


/*
    for(int i = 0;i<third;i++){
        for(int j = 0;j<third;j++){
            if(arr3[j]>arr3[j+1]){
                int temp = arr3[j];
                arr3[j] = arr3[j+1];
                arr3[j+1] = temp; 
            }
        }
    }

    for(int c = 0; c<third;c++){
        cout<<arr3[c]<<" ";
    }
    */

return 0;
}