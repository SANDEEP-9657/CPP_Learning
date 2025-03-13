// Write a program to calculate the LCM of two numbers

#include<iostream>
using namespace std;

int GCD(int a , int b){
    
    if(a%b ==0){
        return b;
    }
    else{
        return GCD(b,a%b);
    }
}



int main(){
    int x,y;
    cout << "enter the two numbers" << endl;
    cin >> x>>y ;
    cout << "LCM is "<< x*y / GCD(x,y)<<endl;
    
    
    
    
    return 0;
}