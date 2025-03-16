// karpekar Number

#include <iostream>
#include<cmath>
using namespace std;

int len(int n){
    int l = 0;
    while(n!=0){
        l++;
        n /= 10;
    }
    
    return l;
}

bool isKarpekar(int n){
    int sqr = n * n;
    int length = len(sqr);
    
    if(length % 2 == 0){
        int divv = length / 2;
        int left = sqr / static_cast<int>(pow(10,divv));
        int right = sqr % static_cast<int>(pow(10,divv));
        
       
         if(left + right == n){
            return true;
        }
    }
    else{
        int divv = length / 2;
        int left1 = sqr / static_cast<int>(pow(10,divv+1));
        int right1 = sqr % static_cast<int>(pow(10,divv+1));
       
        int comp1 = left1+right1;
        
        int left2 = sqr / static_cast<int>(pow(10,divv-1));
        int right2 = sqr % static_cast<int>(pow(10,divv-1));
        int comp2 = left2+right2;
        
        if(comp2 == n || comp1 == n){
            return true;
        }
    }
    
    return false;
}


int main()
{
    int n;
    cout << "Enter the number" << endl;
    cin >> n ;
    if(isKarpekar(n)){
        cout << "it is a Karpekar number" << endl;
    }
    else{
        cout << "it is not a Karpekar number" << endl;
    } 
  
    return 0;
}


















 #include <iostream>
#include <cmath>
using namespace std;

bool isKaprekar(int n) {
    int sqr = n * n;
    int len = log10(sqr) + 1;

    for (int i = 1; i < len; i++) {
        int divisor = pow(10, i);
        int leftPart = sqr / divisor;
        int rightPart = sqr % divisor;

        if (leftPart + rightPart == n && rightPart != 0) {
            return true;
        }
    }
    return n == 1; // 1 is also a Kaprekar number
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isKaprekar(n)) {
        cout << n << " is a Kaprekar number.";
    } else {
        cout << n << " is not a Kaprekar number.";
    }

    return 0;
}
