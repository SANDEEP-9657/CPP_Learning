//  Write a program to find the factorial of a number.

#include<iostream>
using namespace std;

int factorial(int n){
    int fact = 1;
    int i;
    for(i=1;i<=n;i++){
        fact = fact*i;
    }
    
    return fact;
}



int main(){
    int n;
    cout << "Enter the number" << endl;
    cin >> n;
    cout << "Factorial is" << factorial(n) << endl;
    
    
    
    
    return 0;
}