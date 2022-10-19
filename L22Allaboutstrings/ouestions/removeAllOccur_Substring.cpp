#include <iostream>
#include <string>

using namespace std;


//   https://leetcode.com/problems/remove-all-occurrences-of-a-substring/

class Solution {
public:
    string remStr(string s, string part) {
        while((s.length()) && s.find(part) < s.length()){
            s.erase(s.find(part),part.length());
        }
        return s;
    }
};


int main(){
    string name = "adityaadi";
    string part  = "adi";

    cout<<remStr(name,part)<<endl;


return 0;
}