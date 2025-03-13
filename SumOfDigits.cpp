//Write a program to sum all digits of a number.

#include<iostream>
using namespace std;

int SumOfDigits(int n){
    
    int sum = 0;
    while(n!=0){
        int rem = n % 10;
        sum+=rem;
        n = n/10;
    }
    return sum;
}

int main(){
    int n;
    cout << "enter the value of n" << endl;
    cin >> n ;
    cout << SumOfDigits(n) <<  endl;
    
    
    
    return 0;
}