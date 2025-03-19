// Flip Flop a particular bit

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    
    int n , i;
    cout << "Enter the number and position of bit" <<endl;
    cin >> n >> i ;
    n = n ^ static_cast<int>(pow(2,i));
    cout << n << endl;
    return 0;
}