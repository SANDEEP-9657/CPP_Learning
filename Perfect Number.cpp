// Perfect Number

#include <iostream>
using namespace std;

bool isPerfectNumber(int n){
    int sum = 0;
    int i ;
    for(i=1;i<=n/2;i++){
        if(n % i == 0){
            sum += i;
        }
    }
    
    if(sum == n){
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    int n;
    cout << "Enter the number " << endl;
    cin >> n;
    if(isPerfectNumber(n)){
        cout << "Perfect number" <<endl;
    }
    else{
        cout << "Not a Perfect number" << endl;
    }

    return 0;
}