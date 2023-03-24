#include  <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;

    for(int l = 0;l<n;l++){
        string a;
        cin>>a;

        string b;
        cin>>b;

        int n = a.length();
        int m = b.length();

        int i = 0 , j = 0;

        while(i<n && j<m){
            if(a[i] == b[j]){
                i++;
            }
            j++;

        }

       if( i == n   ){
        cout<<"true"<<endl;
       }
       else{
        cout<<"false"<<endl;
       }



    }
}