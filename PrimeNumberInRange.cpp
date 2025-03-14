// Write a program to find out all primes numbers present within a given range.

#include<iostream>
using namespace std;


bool isPrime(int n){
    int i;
    for(i=2;i<=n/2;i++){
        if(n % i ==0){
            return false;
        }
    }
    
    return true;
}
int main(){
    int x , y;
    cout << "Enter the range" << endl;
    cin >> x >> y;
    int i;
    for(i=x;i<=y;i++){
        if(isPrime(i)){
            cout << i << "  " ;
        }
    }
}