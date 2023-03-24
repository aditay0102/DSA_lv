#include <iostream>

using namespace std;

int main(){
    int n=5;
    int arr[n] = {1,23,4,5,6};

    int x;
    cout<<" enter the x: ";
    cin>>x;

    int pos;
    cout<<"enter the pos ";
    cin>>pos;


    n++;
    for(int i = n;i>pos;i--) {
        arr[i-1] = arr[i-2];
    } 
    arr[pos-1] = x;

    for(int i  = 0;i<n;i++) {
        cout<<arr[i]<<" ";
    } 



return 0;
}