#include <iostream>


using namespace std;


//  -------------------     Kadane's Algorithm -----------=== 

int main(){
    int t;
    cin>>t;

    int arr[t];

    int sum = 0;
    int maxi = arr[0];

    for(int i= 0;i<t;i++){
        cin>>arr[i];
    }


    for(int i= 0;i<t;i++){
        sum = sum + arr[i];
        maxi = max(sum,maxi);

        if(sum<0){
            sum = 0;
        }
    }


    cout<<maxi;
   


return 0;
}