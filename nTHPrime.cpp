
// Write a program to Find the nth prime number.


#include<iostream>
using namespace std;

bool isPrime(int n){
    int i ;
    for(i=2;i<=n/2;i++){
        if(n%i == 0){
            return false;
        }
    }
    
    return true;
    
}

int nThPrime(int n ){

    int i =2;
    while(n){
        if(isPrime(i)){
            n--;
        }
        i++;
    }
    return i-1;
}

int main(){
    int n ;
    cout << "Enter the value of n :" << endl;
    cin >> n ;
    
    cout << "the nThPrime is " << nThPrime(n) ;
    
}
    