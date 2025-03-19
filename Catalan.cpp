

#include <iostream>
using namespace std;

int fact(int n){
    int res = 1;
    for(int i =1;i<=n;i++){
        res=res*i;
    }
    return res;
}

int Catalan(int n){
    return (fact(2*n)/(fact(n+1)*fact(n))) ;
}

int main()
{
    int n;
    cout << "Enter the number" << endl;
    cin >> n;
    cout << Catalan(n) <<endl;
    return 0;
}