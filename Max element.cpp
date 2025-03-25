// Max element
#include <iostream>
#include<vector>
using namespace std;


int MaxElement(vector<int>arr){
    int i;
    int max = arr[0];
    for(i=1;i<arr.size();i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
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
    cout << "The maximum element is " << MaxElement(vec);
    

    return 0;
}