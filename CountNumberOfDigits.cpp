//Write a program to count the number of digits in an integer

#include<iostream>
using namespace std;

int countDigits(int n){
    
    int count = 0;
    while(n!=0){
        count+=1;
        n = n/10;
    }
    return count;
}

int main(){
    int n;
    cout << "enter the value of n" << endl;
    cin >> n ;
    cout << countDigits(n) <<  endl;
    
    
    
    return 0;
}