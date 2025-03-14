// Second Largest Digit in the given number

#include<iostream>
using namespace std;

int SecLar(int n){
    
    int lar =0;
    int temp = n;
    while(n != 0){
        if(lar <  n % 10){
            lar = n % 10;
        }
        
        n = n / 10;
    }
    int res = 0;
    while(temp !=0)
    {
        if(res < temp % 10 && temp % 10 != lar){
            res = temp % 10;
        }
        temp = temp / 10;
    }
    
    return res;
}

int main(){
    int n ;
    cout << "Enter the value of n" << endl;
    cin >> n ;
    
    cout << "The second Largest Digit in the number " << SecLar(n) << endl;
    
}