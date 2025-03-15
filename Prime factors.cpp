// Prime factors

#include<iostream>
using namespace std;

bool isPrime(int n){
    int i;
    for(i=2;i<=n/2;i++){
        if(n%i == 0){
            return false;
        }
    }
    
    return true;
}

int main()
{
    int n ;
    int i;
    cout << "Enter the number"<< endl;
    cin >> n ;
    for(i=2;i<=n/2;i++){
        if(n % i == 0){
            if(isPrime(i)){
                cout << i << " " ;
            }
        }
    }
    
    
    
    return 0;
}