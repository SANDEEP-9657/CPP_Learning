// Trimorphic number

#include<iostream>
#include<cmath>
using namespace std;


bool isTrimorphic(int n){
    int cube = pow(n,3);
    int temp = n;
    int len = 0;
    while(n!=0){
        len++;
        n/=10;
    }
    
    int divv = pow(10,len);
    if(cube % divv == temp){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int n ;
    cout << "Enter the number" << endl;
    cin >> n;
    if(isTrimorphic(n)){
        cout<<"It is Trimorphic number"<<endl;
        
    }
    else{
        cout << "It is not a Trimorphic number" << endl;
    }
}