// Write a program to compute 1/n!

#include<bits/stdc++.h>
using namespace std;

long long fact(int n){
    int fact , i;
    fact = 1;
    for(i=1;i<=n;i++){
        fact = fact * i;
    }
    return fact;
}

int main(){
    int n ;
    cout << "enter the value of n" << endl;
    cin >> n;
    long long factorial = fact(n);
    
    double result = 1.0 / factorial;
    cout << "The value of 1/n! for the given number is" << result << endl;
}