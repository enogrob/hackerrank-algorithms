#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    float cp = 0;
    float cn = 0;
    float cz = 0;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
        cin >> arr[arr_i];
    }
    for(int arr_i = 0;arr_i < n;arr_i++){
        if(arr[arr_i] > 0) cp++;
        if(arr[arr_i] < 0) cn++;
        if(arr[arr_i] == 0) cz++;
    }
    printf("%6f\n",cp/n);
    printf("%6f\n",cn/n);
    printf("%6f\n",cz/n);
    return 0;
}