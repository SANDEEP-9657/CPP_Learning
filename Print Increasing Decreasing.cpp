// Print Increasing Decreasing
#include <iostream>
using namespace std;
int n = 5;
void print(int x){
    if(x>n){
        cout << endl;
        return;
    }
    cout << x<< " ";
    print(x+1);
    cout << x << " ";
    
    
}



int main()
{
    print(1);

    return 0;
}