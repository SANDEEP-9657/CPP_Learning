// Write a program to find the Generic root of a number.

#include<iostream>
using namespace std;


int GenericRoot(int n){
    
    int sum = 0;
    while(n!=0){
        sum += n % 10;
        n = n / 10;
    }
    
    if(sum > 9){
        sum = GenericRoot(sum);
    }
    
    return sum;
}
int main(){
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n ;
    cout << "The GenericRoot of the given number is " << GenericRoot(n) << endl;
}