// Min Element
#include <iostream>
#include<vector>
using namespace std;


int MinElement(vector<int>arr){
    int i;
    int min = arr[0];
    for(i=1;i<arr.size();i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    return min;
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
    cout << "The minimum element is " << MinElement(vec);
    

    return 0;
}