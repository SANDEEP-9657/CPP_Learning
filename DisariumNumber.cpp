// Disarium number

#include <iostream>
#include<cmath>
using namespace std;


bool isDisarium(int n){
    int temp1 = n;
    int len = 0;
    int temp = n;
    while(temp !=0){
        len++;
        temp/=10;
    }
    
    int sum = 0;
    while(n!=0){
        int rem = n % 10;
        sum += pow(rem , len);
        n = n / 10;
        len = len -1;
    }
    
    if(sum == temp1){
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    int n;
    cout << "Enter the number" << endl;
    cin >> n;
    if(isDisarium(n)){
        cout << "It is Disarium number" << endl;
    }
    else{
        cout << " It is not Disarium number" << endl;
    }
    

    return 0;
}