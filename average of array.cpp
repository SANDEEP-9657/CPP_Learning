// average of array
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;


int avg(vector<int> arr){
    int sum =0 , i;
    for(i=0;i<arr.size();i++){
        sum += arr.at(i);
    }
    return sum / arr.size();
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
    
    cout << "The average of the above given array is" << avg(vec);

    return 0;
}