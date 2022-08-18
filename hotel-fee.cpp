#include <bits/stdc++.h>

using namespace std;
int main(){
    int totalNight, firstNights, firstNightsFee, lastNightsFee, totalFirstNightFee, totalLastNightsFee,grandTotal;
    cin >> totalNight >> firstNights >> firstNightsFee >> lastNightsFee;
    totalFirstNightFee= firstNights*firstNightsFee;
    if(totalNight-firstNights<=0){
        grandTotal= totalNight*firstNightsFee;
    } else{
        totalLastNightsFee= (totalNight-firstNights)*lastNightsFee;
        grandTotal= totalFirstNightFee+totalLastNightsFee;
    }

    cout << grandTotal;
    return 0;
}