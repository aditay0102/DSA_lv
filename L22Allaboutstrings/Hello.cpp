#include <iostream>
#include <string>


using namespace std;



void getlength(string a){
    int count = 0;
    for(int i=0;i<a.size();i++){
        count++;
    }
    cout<<" the length is "<<count<<endl;   
}

void reverse(string a){
    int s=0;
    int e = a.size()-1;
    while (s<e)
    {
        swap(a[s++],a[e--]);
    }
    cout<<a<<endl;
}

int main(){

    string name;

   cout<<"enter you name "<<endl;
   cin>>name;

    cout<<"you name is "<<name<<endl;

// --------  ===  length of a string ---------==
getlength(name);
reverse(name);



return 0;
}