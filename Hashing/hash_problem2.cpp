//Given an array of size N. Find the highest and lowest frequency element.
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "enter the size of array: ";
    cin >> n;
    int arr[n];

    for(int i=0;i<n;i++){
        cout << "enter the element" << endl;
        cin >> arr[i];
    }

    unordered_map<int,int> mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }

    int min = n;
    int min_element;
    int max = 0;
    int max_element;

    for(auto it:mpp){
        
        if(it.second < min){
            min = it.second;
            min_element = it.first;
        }
        if(it.second > max){
            max = it.second;
            max_element = it.first;
        }
    }

    cout << max_element << " " << min_element;

}