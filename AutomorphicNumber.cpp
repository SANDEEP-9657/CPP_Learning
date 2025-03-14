// Automorphic number

#include<bits/stdc++.h>
using namespace std;

bool isAutomorphic(int n){
    int sqr = n * n ;
    int len = 0;
    
    int temp = n;
    while(temp != 0){
        len++;
        temp = temp / 10;
    }
    int div = pow(10,len);
    if(sqr % div == n){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int n;
    cout << "Enter the number" << endl;
    cin >> n ;
    if(isAutomorphic(n)){
        cout << "It is Automorphic Number" << endl;
    }
    else{
        cout << "It is not Automorphic Number" << endl;
    }
}