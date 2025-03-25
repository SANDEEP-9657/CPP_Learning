// Product of elements
#include <iostream>
#include<vector>
using namespace std;


int ProOfElements(vector<int> arr){
    int pro = 1;
    for(int i = 0 ; i < arr.size() ;i++){
        pro *= arr.at(i) ;
    }
    return pro;
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
    cout << ProOfElements(vec);
    
    

    return 0;
}