// Maxm number of handshakes

#include<iostream>
using namespace std;

int MaxHandShakes(int n){
    return (n*(n-1)) / 2 ;
}

int main(){
    int n;
    cout << "enter the number" << endl;
    cin>>n;
    cout << "The maximum number of handshakes is" << MaxHandShakes(n);
}