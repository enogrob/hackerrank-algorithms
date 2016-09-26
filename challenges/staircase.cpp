#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    std::string s;
    cin >> n;
    for(int i=0; i < n; i++) {
        s[i] = ' ';
    }
    for(int i=0; i < n; i++) {
        s[n-i-1] = '#';
        printf("%s\n", s.c_str());
    }
    return 0;
}