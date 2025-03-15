// Write a program to add between 2 numbers without using arithmetic
// operators.

#include<iostream>
using namespace std;



int main(){
    int a , b ;
    cout << "Enter the two numbers" << endl;
    cin >> a >> b;
    
    while(b--){
        a++;
    }
    
    cout << "The sum of two numbers is" << a << endl;
    
}