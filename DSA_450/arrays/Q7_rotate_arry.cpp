#include <iostream>
using namespace std;

//  Write a program to cyclically rotate an array by one.

int main(){

    int arr[5] = {1,2,3,4,5};
    //            5,1,2,3,4


    int temp = arr[4];
    for(int i = 5;i>0;i--){
        //arr[0] = arr[5-1];
        arr[i-1] = arr[i-2];


        if(i-1 == 0){ // i war doing arr[i-1] XXX wrong  ---=-=-   (i-1) which is index  
            arr[i-1] = temp;
        }
    
        
    }
    cout<<endl;
    for(int i = 0;i<5;i++){
        cout<<arr[i]<<" ";
    }
   

return 0;
}