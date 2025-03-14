// Abundant number

#include<iostream>
using namespace std;
bool isAbundant(int n)
{
    int sum = 0;
    int i;
    for(i=1;i<=n/2 ; i++){
        if(n % i ==0){
            sum += i;
        }
    }
    
    if(sum > n){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int n ;
    cout << "Enter the value of N:"<<endl;
    cin >> n;
    
    if(isAbundant(n)){
        cout << "it is Abundant Number" << endl;
    }
    else{
        cout << "it is not a Abundant Number"<<endl;
    }
}