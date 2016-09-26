#include <cmath>
#include <cstdio>
#include <deque>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, k, q;
    cin >> n >> k >> q;
    deque<int> arr(n);
    deque<int> m(q);
    for(int arr_i = 0;arr_i < n;arr_i++){
        cin >> arr[arr_i];
    }
    for(int arr_i = 0;arr_i < q;arr_i++){
        cin >> m[arr_i];
    }
    for(int arr_i = 0;arr_i < k;arr_i++){
        arr.push_front(arr.back());
        arr.pop_back();
    }
    for(int arr_i = 0;arr_i < q;arr_i++){
        cout << arr[m[arr_i]] << "\n";
    }

    return 0;
}