// Sum of elements
#include <iostream>
#include<vector>
using namespace std;


int SumOfElements(vector<int> arr){
    int sum = 0;
    for(int i = 0 ; i < arr.size() ;i++){
        sum += arr.at(i) ;
    }
    return sum;
}
int main()
{
    vector<int> vec ;
    cout << "Enter the number of elements" ;
    int n;
    cin >> n;
    while(n--){
        int num ;
        cin >> num ;
        vec.push_back(num);
    }
    cout << SumOfElements(vec);
    
    

    return 0;
}