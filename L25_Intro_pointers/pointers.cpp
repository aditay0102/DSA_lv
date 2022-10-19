#include <iostream>

using namespace std;



int main(){
    // pointer to int is created, and pointing  to some garbage  address    


    /*
    int i = 5;

    int *q = &i;
    cout<<q<<endl;
    cout<<*q<<endl;

    int *p = 0;
    p = &i;

    //  address is same  good for mcqs 
    cout<<p<<endl;
    cout<<*p<<endl;     
    */

   int num = 5;
   int a  = num;
   a++;

    int *p  = &num;
    cout<<"before "<< num <<endl;
    (*p)++;  // always use brackest for quality code ..... --=--=--==-=-=
    // learning pointers doesnt make copy it works on the original 
    cout<<"after "<< num <<endl;


    // -------  copying a pointer ------ -------- ======= 
    int *q = p;
    cout<< p <<" - "<< q <<endl;
    cout<< *p <<" - "<< *q <<endl;
    // never do ( t= t+1)
return 0;
}