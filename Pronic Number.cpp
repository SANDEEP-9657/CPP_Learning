// Pronic Number

#include<iostream>
using namespace std;

bool isPronicNumber(int n){
    int i;
    for(i=1;i<=n/2;i++){
        if(i * (i+1) == n ){
            return true;
        }
    }
    
    return false;
}

int main(){
    int n;
    cout << "Enter the value of N:" << endl;
    cin >> n;
    
    if(isPronicNumber(n)){
        cout << "It is Pronic Number" << endl;
    }
    else{
        cout << "It is not Pronic number" << endl;
    }
}