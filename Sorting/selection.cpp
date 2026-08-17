//Given an array of N integers, write a program to implement the Selection sorting algorithm.
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "enter the array size: ";
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int min = 0;
    int temp;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j] < arr[i]){
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    cout << "the sorted array is: ";
    for(int k=0;k<n;k++){
        cout << arr[k] << " ";
    }

}