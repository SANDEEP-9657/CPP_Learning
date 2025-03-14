// A character is a vowel on consonant

#include<iostream>
using namespace std;



int main(){
    
    char c ;
    cout << "Enter the Alphabet" << endl;
    cin >> c;
    if(c == 'a' || c == 'e' || c == 'i' || c =='o' || c == 'u'){
        cout << " the entered character is Vowel" << endl;
    }
    else{
        cout << "the entered character is a consonant " << endl;
    }
}