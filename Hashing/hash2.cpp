//character hashing

#include <iostream>
using namespace std;

int main(){
    //case1 => assuming string contains only lowercase chars
    string s1;
    cout << "enter the string1: ";
    cin >> s1;

    //pre-computing the frequencies

    int hash1[26] = {0};     
    for(int i=0; i<s1.size(); i++){
        hash1[s1[i] - 'a']++;
    }

    //fetching
    int num1;
    cout << "enter the number of characters you want to check: ";
    cin >> num1;
    for(int j=1; j <= num1; j++){
        char c1;
        cout << "enter the character: ";
        cin >> c1;
        cout << "number of times " << c1 << " appeared is: " << hash1[c1 - 'a'] << "\n";
    }

    //case2 in general => using the ascii value 
    string s2;
    cout << "enter the string2: ";
    cin >> s2;

    
    //pre-computing the frequencies

    int hash2[256] = {0};     
    for(int k=0; k<s2.size(); k++){
        hash2[s2[k]]++;
    }

    //fetching
    int num2;
    cout << "enter the number of characters you want to check: ";
    cin >> num2;
    for(int l=1; l <= num2; l++){
        char c2;
        cout << "enter the character: ";
        cin >> c2;
        cout << "number of times " << c2 << " appeared is: " << hash2[c2] << "\n";
    }

}