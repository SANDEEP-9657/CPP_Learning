// WAP to calculate power of a number using recurssion.

#include<iostream>
using namespace std;

int rec(int n , int p){
    
    if(p==1){
        return n;
    }
    if(p){
        return n * rec(n,p-1);
    }
    
   
}

int main(){
    int n,p;
    cout << "Enter the number and also power" << endl;
    cin >> n >> p;
    
    cout << "The Power of the given number" << rec(n,p) << endl;
}