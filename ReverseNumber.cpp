
//Write a program to reverse a given number.

#include<iostream>
using namespace std;

int ReverseNumber(int n){
    
    int rev = 0;
    while(n!=0){
        int rem = n % 10;
        rev = rev * 10 + rem;
        n = n /10;
    }
    return rev;
}

int main(){
    int n;
    cout << "enter the value of n" << endl;
    cin >> n ;
    cout <<"Reverse number is" << ReverseNumber(n) <<  endl;
    
    
    
    return 0;
}