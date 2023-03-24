#include <iostream>

using namespace std;

int main(){
    int a[7] = {1,2,2,3,4,5,2};

    int count[7];

    for(int i = 0;i<7;i++){
        int c = 1;
        cout<<a[i]<<" ";
        if(a[i] != -1){

            for(int j = i+1;j<7;j++){
                if(a[i] == a[j]){
                    c++;
                    a[j] = -1;
                }
                    count[i] = c;

            }
        }
    }
    cout<<endl;


    for(int i = 0;i<7;i++){
        if(count[i]>0){

        cout<<a[i]<<" count "<<count[i]<<"/"<<endl;
        }

    }
return 0;
}