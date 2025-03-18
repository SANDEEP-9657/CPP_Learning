//  write a program to check a number is a cube or not

#include<bits/stdc++.h>
using namespace std;


bool isCube(int n){
    
    
    int i ;
    for(i=1;i*i<=n;i++){
        if((i*i)*i == n){
            return true;
        }
    }
    return false;
}
int main(){
    int n;
    cout << "Enter the number" << endl;
    cin >> n;
    if(isCube(n)){
        cout << "it is a cube number" << endl;
    }
    else{
        cout << "it is not a cube number" << endl;
    }
    
}