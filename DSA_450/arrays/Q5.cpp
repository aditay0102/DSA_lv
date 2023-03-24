#include <iostream>
#include <set>
using namespace std;

// union of   two arrays man     do this question in geeks for geeks man

// use set STL to do  this question because  set only stores distinct elements ( no repeated elements)


int main(){
    int arr[6] = { 1,2,3,1,2,3};
    int ar1[5] = {1,2,4,2,5,};
    set<int> a;
    for(int i = 0;i<6;i++){
        a.insert(arr[i]);
    }
    for(int i = 0;i<6;i++){
        a.insert(ar1[i]);
    }


    for(int i = 0;i<a.size();i++){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<" the size is "; 
    cout<<a.size()<<endl;

   
return 0;
}