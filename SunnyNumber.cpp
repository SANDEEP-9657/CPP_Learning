// Sunny Number

#include<iostream>

using namespace std;


bool isPerfectSquare(int n){
    int i ;
    for(i=1;i<=n/2;i++){
        if(i*i == n){
            return true;
        }
        
    }
return false;
}
int main(){
    
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;
    if(isPerfectSquare(n+1)){
        cout << " the given number is a sunny number" << endl;
        
    }
    else{
        cout << " the given number is not a sunny number" << endl;
    }
    
}