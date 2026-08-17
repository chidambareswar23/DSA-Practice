//number hashing

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "enter number of elements: ";
    cin >> n;
    int arr[n];
    cout << "enter the elements: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    //Pre-computing
    int hash[13] = {0};   
    for(int i=0; i<n; i++){
        hash[arr[i]]++;
    }

    //fetching
    int num;
    cin >> num;
    for(int j=1; j<=num; j++){
        int q;
        cin >> q;
        cout << "number of times " << q << " appeared is " << hash[q] << "\n";
    }
}