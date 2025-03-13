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
    int x,y ;
    cout << "enter the range" << endl;
    cin >> x >> y ;
    int i;
    for(i=x;i<=y;i++){
        if(isArmStrong(i)){
            cout << i << "  " ;
        }
        
    }
    
    return 0;
}