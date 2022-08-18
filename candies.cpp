#include <bits/stdc++.h>

using namespace std;
int main(){
    int students, candies, candiesTotal=0;
    cin >> students;
    for(candies=1; candies<=students; candies++){
        candiesTotal= candies+candiesTotal;
    }
    cout << candiesTotal;
    return 0;
}