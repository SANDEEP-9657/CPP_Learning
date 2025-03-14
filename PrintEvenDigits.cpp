// Print Even Numbers in a Digit

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the value of n"<<endl;
    cin >> n;
    while(n!=0){
        int rem = n % 10;
        if(rem % 2 == 0){
            cout<<rem<<" ";
        }
        n = n / 10;
    }    
}