#include<bits/stdc++.h>
using namespace std;

int main(){
    pair<int, int> p = {1, 3};      
    cout << p.first << '\n';        
    cout << p.second << '\n';       

    pair<int, pair<int, int>> q = {4, {5, 6}};      
    cout << q.first << endl;
    cout << q.second.first << endl;
    cout << q.second.second << endl;

    pair<int, int> arr[] = { {1,2}, {3,4}, {5,6}};
    cout << arr[2].second;              

}