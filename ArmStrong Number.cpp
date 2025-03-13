// ArmStrong Number

#include <iostream>
#include<cmath>
using namespace std;

int countDigits(int n){
    
    int count = 0;
    while(n!=0){
        count+=1;
        n = n/10;
    }
    return count;
}



bool isArmStrong(int n){
    int temp = n;
    
    int c = countDigits(n);
    int ArmS = 0;
    while(n !=0){
        int rem = n % 10 ;
        ArmS += pow(rem , c);
        n = n/10;
    }
    
    
    
    if(ArmS == temp){
        return true;
    }
    else{
        return false;
    }
    
   
}
int main()
{
    int n ;
    cout << "enter the number" << endl;
    cin >> n ;
    if(isArmStrong(n)){
        cout << "it is a ArmStrong number"<<endl;
        
    }
    else{
        cout << "it is not a ArmStrong Number"<<endl;
    }
    return 0;
}