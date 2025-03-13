// power of number

#include<iostream>
using namespace std;


int PowerOfN(int n, int e){
    int sum = 1 ;
    int i;
   for(i=1;i<=e;i++){
       sum *= n;
   }
    
    return sum;
}

int main(){
    int n , ex ;
    cout << "Enter the number and exponential" << endl;
    cin >> n>>ex;
    
    cout<<"Power is" << PowerOfN(n,ex) <<endl;
    return 0;
}
