#include <iostream>
#include <string>


using namespace std;

string replaceSpace(string &n){

    string temp = "";

    for(int i = 0;i<n.length();i++){
        if(n[i] == ' '){
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else{
            temp.push_back(n[i]);
        }
    }

    return temp;
}
int main(){
    string name  = "yo you honey singh";


    cout<<replaceSpace(name)<<endl;



return  0;
}