// move all negatrive elements of the array to the one side of the array 

#include <iostream>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);


    int n;
    cin>>n;
    
    int a[n];

    for(int i = 0;i<n;i++){
        cin>>a[i];
    }

    int j = 0;

    for(int i = 0;i<n;i++){

        if(a[i]==0){
            swap(a[i],a[j]);
            j++;
        }
    }


    for(int i = 0;i<n;i++){
        cout<<a[i]<<" ";
    }

return 0;
}