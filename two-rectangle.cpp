#include <bits/stdc++.h>

using namespace std;
int main(){
    int firstRecArea, firstRecHor, firstRecVer, secondRecArea, secondRecHor, secondRecVer;
    cin >> firstRecHor >> firstRecVer >> secondRecHor >> secondRecVer;
    firstRecArea= firstRecHor * firstRecVer;
    secondRecArea= secondRecHor * secondRecVer;
    if(firstRecArea > secondRecArea){
        cout << firstRecArea;
    } else if( secondRecArea > firstRecArea){
        cout << secondRecArea;
    }else{
        cout << firstRecArea;
    }
    return  0;
}