#include <bits/stdc++.h>
using namespace std;
int main() {
    int orderMeal;
    cin >> orderMeal;
    int numberOfDiscountMeal= orderMeal/15;
    int totalMeal= orderMeal*800;
    int grandTotal= totalMeal - numberOfDiscountMeal * 200;
    cout << grandTotal;
    return 0;
}