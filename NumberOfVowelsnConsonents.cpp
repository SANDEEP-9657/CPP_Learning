// number of vowels and consonants in string

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout << "Enter the string" << endl;
    getline(cin, s);
    int vc = 0;
    int cc = 0;
    int sp = 0;
    
    for(auto i : s){
        if(i=='a' || i =='e' || i == 'o' ||  i == 'i' || i =='u'){
            vc++;
        }
        else if(i==' '){
            sp++;
        }
        else{
            cc++;
        }
    }
    
    cout << "the number of vowels" << vc << " the number of consonants" << cc << "spaces are" << sp ;
    return 0;
}