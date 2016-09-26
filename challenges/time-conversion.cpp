#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    std::string time;
    cin >> time;
    if(time.substr(8,2)=="PM") {
        if(time.substr(0,1)=="01") time.replace(0,2,"13");
        if(time.substr(0,1)=="02") time.replace(0,2,"14");
        if(time.substr(0,1)=="03") time.replace(0,2,"15");
        if(time.substr(0,1)=="04") time.replace(0,2,"16");
        if(time.substr(0,1)=="05") time.replace(0,2,"17");
        if(time.substr(0,1)=="06") time.replace(0,2,"18");
        if(time.substr(0,1)=="07") time.replace(0,2,"19");
        if(time.substr(0,1)=="08") time.replace(0,2,"20");
        if(time.substr(0,1)=="09") time.replace(0,2,"21");
        if(time.substr(0,1)=="10") time.replace(0,2,"22");
        if(time.substr(0,1)=="11") time.replace(0,2,"23");
        if(time.substr(0,1)=="12") time.replace(0,2,"12");
    } else {
        if(time.substr(0,1)=="12") time.replace(0,2,"00");
    }
    time.erase(8,2);
    cout << time;
    return 0;
}