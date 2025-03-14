// Harshad Number

#include<iostream>
using namespace std;
bool isHarshad(int n)
{
    int sum = 0;
    int temp = n;
    while(temp != 0){
        int rem = temp % 10;
        sum += rem;
        temp = temp / 10;
    }
    
    if(n % sum == 0){
        return true;
    }
    else {
        return false;
    }
}

int main(){
    int n ;
    cout << "Enter the value of N:"<<endl;
    cin >> n;
    
    if(isHarshad(n)){
        cout << "it is Harshad Number" << endl;
    }
    else{
        cout << "it is not a harshad Number"<<endl;
    }
}