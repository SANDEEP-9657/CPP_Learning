// Write a program to check if a given number is circular prime or not.


#include <bits/stdc++.h>
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

bool isCircularPrime(int n){
    if(!isPrime(n)){
        return false;
    }
    
    int len = log10(n)+1;
    int poww = len-1;
    while(len--){
        int num = (n % 10) * static_cast<int>(pow(10,poww)) + n / 10 ;
        
        n = num;
        
        if(isPrime(n)){
            continue;
        }
        else{
            return false;
        }
        
    }
    
    return true;
}

int main()
{
    int n ;
    cout << "Enter the number" << endl;
    cin >> n ;
    if(isCircularPrime(n)){
        cout << "It is a circular prime number" << endl;
    }
    else{
        cout << "It is not a circular prime number" << endl;
    }
    

    return 0;
}