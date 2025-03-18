// Cyclic Number

#include<bits/stdc++.h>
using namespace std;

int SumOfDigits(int n){
    int sum = 0;
    while(n>0){
        sum = sum + n % 10;
        n /= 10;
    }
    return sum;
}

bool isCyclic(int n){
    int len = log10(n)+1;
    int sum = SumOfDigits(n);
    int i;
    for(i=1;i<=len;i++){
        int num = n * i;
        if(SumOfDigits(num) == sum){
            continue;
        }
        else{
            return false;
        }
    }
    
    return true;
}

int main(){
    long int n;
    cout << "Enter the number" << endl;
    cin >> n ;
    if(isCyclic(n)){
        cout << "it is a Cyclic number" << endl;
    }
    else{
        cout << "it is not a Cyclic number" << endl;
    }
    
}