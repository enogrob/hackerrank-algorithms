#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    int s;
    s = 0;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
           cin >> arr[arr_i];
        }
    for(int arr_i = 0;arr_i < n;arr_i++){
           s+=arr[arr_i];
        }
    cout << s;
    return 0;
}
