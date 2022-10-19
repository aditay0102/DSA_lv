#include <iostream>
#include <string>


using namespace std;

//     https://www.codingninjas.com/codestudio/problems/replace-spaces_1172172?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_5

string replaceSpace(string &n){

    string temp = "";

    for(int i = 0;i<n.length();i++){
        if(n[i] == ' '){
            n[i] = '@';
          
            
        }
        else{
           n[i] = n[i];
        }
    }

    return n;    
}
int main(){
    string name  = "yo you honey singh";


    cout<<replaceSpace(name)<<endl;



return  0;
}