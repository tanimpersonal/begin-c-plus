#include <bits/stdc++.h>

using namespace std;
int main(){
    int firstPole, secondPole, thirdPole;
    cin >> firstPole >> secondPole >> thirdPole;
    if(secondPole-firstPole == thirdPole-secondPole){
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}