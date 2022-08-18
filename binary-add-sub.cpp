#include <bits/stdc++.h>

using namespace std;
int main(){
    int a, b;
    char op;
    int result;
    cin >> a >> op>> b;
    if(op=='+'){
        result= a+b;
        cout << result;
    }
    else if(op=='-'){
        result=a-b;
        cout << result;

    }

    return 0;
}