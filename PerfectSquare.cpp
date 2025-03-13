//Write a program to check whether a given number is a perfect square number or not

#include<iostream>
using namespace std;

bool isPerfectSquare(int n){
    int i ;
    for(i=2 ;i*i <= n ; i++){
        if(i*i == n){
            return true;
        }
    }
    
    return false;
}



int main(){
    int n;
    cout << "Enter the number" << endl;
    cin >> n;
    if(isPerfectSquare(n)){
        cout << "it is a perfect square" << endl;
    }
    else{
        cout << "it is not a perfect square number" << endl;
    }
    
    
    
    
    return 0;
}