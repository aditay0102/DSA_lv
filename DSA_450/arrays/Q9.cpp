#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
    K = 2, N = 4
Arr[] = {1, 5, 8, 10}

output = 5;
*/

int main(){
    int k;
    cin>>k;
    int n;
    cin>>n;
    int arr[n];

    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

    int mid = (0+n)/2;
    for(int i = 0;i<mid;i++){
      
        arr[i] = arr[i] + k;
    }
    for(int i = mid;i<n;i++){
       
        arr[i] = arr[i] -k;
    }

    sort(arr,arr+n);
    

    cout<<endl;
    int ans = arr[n-1] - arr[0];
    cout<<ans;





return 0;
}