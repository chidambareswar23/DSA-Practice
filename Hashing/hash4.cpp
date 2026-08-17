//map can also be used for string hashing

#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout << "enter the string: ";
    cin >> s;

    //pre-compute
    map<char,int> mpp;
    for(int i=0;i<s.size();i++){
        mpp[s[i]]++;
    }

    //fetch
    int n;
    cout << "enter number of elements to check: ";
    cin >> n;
    for(int i=1;i<=n;i++){
        char c;
        cin >> c;
        cout << "number of times " << c << " appeared is: " << mpp[c] << endl;
    }
    
}