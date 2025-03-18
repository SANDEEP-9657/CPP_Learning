// Find whether a no is power of two


#include<bits/stdc++.h>
using namespace std;
bool isPowerOf2(int n){
   if(n<=0){
       return false;
   }
   return (n & (n-1)) == 0;
    
    
}
int main(){
    int n;
    cout << "Enter the number" << endl;
    cin >> n;
    if(isPowerOf2(n)){
        cout << "It is a Power of 2" << endl;
    }
    else{
        cout << "It is not a Power of 2" << endl;
    }
    
}