// Humming / Ugly numbers

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

bool isHumming(int n){
    
    if(n == 1){
        return true;
    }
    int i ;
    for(i=2;i<=n;i++){
        if(n % i ==0){
            if(isPrime(i)){
                if(i == 2 || i == 3 || i == 5){
                    return true;
                }
            }
        }
    }
    
    return false;
}

int main()
{
    int n ;
    int i;
    cout << "Enter the value of n"<< endl;
    cin >> n ;
    cout << "The Humming number from 1 to n are" << endl;
    
    for(i=1;i<=n;i++){
        if(isHumming(i)){
            cout << i << " " ;
        }
    }
    
    
    
    return 0;
}