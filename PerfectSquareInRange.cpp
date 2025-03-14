// Write a program to find out all perfect square numbers present within a given range.

#include<iostream>
using namespace std;


bool isPerfectSquare(int n){
    int i;
    for(i=1;i<=n/2;i++){
        if(i*i == n){
            return true;
        }
    }
    
    return false;
}
int main(){
    int x , y;
    cout << "Enter the range" << endl;
    cin >> x >> y;
    int i;
    for(i=x;i<=y;i++){
        if(isPerfectSquare(i)){
            cout << i << "  " ;
        }
    }
}