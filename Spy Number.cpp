// Spy Number

#include <iostream>
using namespace std;


bool isSpyNumber(int n){
    
    int sum = 0;
    int mul = 1;
    
    while(n!=0){
        int rem = n % 10;
        sum += rem;
        mul *= rem;
        n = n /10;
    }
    
    if(sum == mul){
        return true;
    }
    else{
        return false;
    }
}    
int main()
{
    int n;
    cout << "Enter the value of N:"<<endl;
    cin >> n ;
    if(isSpyNumber(n)){
        cout << "It is Spy Number" << endl;
    }
    else{
        cout<<"It is not a Spy NUmber" << endl;
    }
    return 0;
}