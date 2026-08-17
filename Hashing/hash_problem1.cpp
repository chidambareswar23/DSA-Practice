//Given an array, we have found the number of occurrences of each element in the array.
#include <bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cout << "enter the size of array: ";
    cin >> num;
    int arr[num];

    for(int i=0;i<num;i++){
        cout << "enter the element" << endl;
        cin >> arr[i];
    }

    unordered_map<int,int> mpp;
    for(int i=0;i<num;i++){
        mpp[arr[i]]++;
    }

    for(auto it:mpp){
        cout << it.first << " " << it.second << endl;
    }
    
}