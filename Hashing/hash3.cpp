//solution to hash array size problem in number hashing using hash map

#include <bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cout << "enter the number of elements: ";
    cin >> num;
    int arr[num];
    for(int i=0; i<num;i++){
        cin >> arr[i];
    }

    //pre-compute

    map<int,int> mpp;
    unordered_map<int,int> mpp1;   //unordered-map can also be used
    for(int i=0; i<num;i++){
        mpp[arr[i]]++;
        mpp1[arr[i]]++;
    }

    //fetch

    int n;
    cout << "enter number of elements to check frequency: ";
    cin >> n;
    for(int i=1;i<=n;i++){
        cout << "enter the number to check: ";
        int q;
        cin >> q;
        cout << "number of times " << q << " appeared is " << mpp[q] << endl;
    } 

    //difference between map and unordered-map comes when we access the elements
    
    //iterating in a map
    cout << "Printing the elements in map as key->value" << endl;
    for(auto it:mpp){
        cout << it.first << "->" << it.second << endl;
    }

    //iterating in a unordered_map
    cout << "Printing the elements in unordered map as key->value" << endl;
    for(auto it2:mpp1){
        cout << it2.first << "->" << it2.second << endl;
    }

}