// Neon Number

#include<iostream>
using namespace std;



bool isNeon(int n){
    int sqr = n * n ;
    int sum = 0;
    while(sqr !=0){
        sum += sqr % 10;
        sqr = sqr / 10;
    }
    
    if(sum == n){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int n ;
    cout << "Enter the number" << endl;
    cin >> n ;
    if(isNeon(n)){
        cout <<"It is Neon Number" << endl;
    }
    else{
        cout << "It is not Neon Number" << endl;
    }
}