// Lychrel number

#include<bits/stdc++.h>
using namespace std;

int reverse(long long int n){
   long long  int rev = 0;
    while(n>0){
        rev = rev * 10 + n % 10;
        n/=10;
    }
    return rev ;
}

bool isPalindrome(long long int n){
    if(reverse(n) == n){
        return true;
    }
    return false;
}



bool isLychrel(long long int num ,long long  int itr){
    while(itr--){
        num = num + reverse(num);
        if(isPalindrome(num)){
            return true;
        }
        cout << num << endl;
        
    }
    return false;
}

int main(){
    
    long long int num , itr ;
    cout << "enter the number and also number of iterations" << endl;
    cin >> num >> itr ;
    if(isLychrel(num,itr)){
        cout << " it is Lychrel" << endl;
    }
    else{
        cout << " it is not Lychrel" << endl;
    }
    
}
