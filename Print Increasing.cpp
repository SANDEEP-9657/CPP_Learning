// Print Increasing
#include <iostream>
using namespace std;
int n = 5;
int i =1;
void print(){
    if(i>n){
    
        return;
        
    }
    cout << i << endl;
    i++;
    print();
    
    
}



int main()
{
    print();

    return 0;
}