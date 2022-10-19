#include <iostream>
#include <vector>
using namespace std;

bool isPrime(int n){
    if(n <= 1){
        return false;
    }

    for(int i =2 ;i<n;i++){
        if(n%i == 0){
            return false;
        }
    }
return true;
};

 int countPrimes(int n) {
        
        //sieve  of  Eratoshense;
        
        int cnt = 0;
        vector<bool> prime(n+1, true);
        
        prime[0] = prime[1] = false;
        
        for(int i = 2; i<n ; i++ ){
            if(prime[i]){
                cnt++;
                
                
                for(int j = 2*i; j<n; j = j+i){
                    prime[j] = 0;
                }
            }
            
        }
        return cnt;
    }
 int countPrimes(int n) {
        
        //sieve  of  Eratoshense;
        
        int cnt = 0;
        vector<bool> prime(n+1, true);
        
        prime[0] = prime[1] = false;
        
        for(int i = 2; i<n ; i++ ){
            if(prime[i]){
                cnt++;
                
                
                for(int j = 2*i; j<n; j = j+i){
                    prime[j] = 0;
                }
            }
            
        }
        return cnt;
    }


int main(){
    int n;
    cout<<"enter the number"<<endl;

    cin>>n;
    int count = 0;
    for(int i =2;i<n;i++){
        if(isPrime(i)){
            count++;
        }
    }

    cout<<count<<endl;



return 0;
}