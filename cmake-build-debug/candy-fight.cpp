#include <bits/stdc++.h>

using namespace std;
int main(){
    int firstPack, secondPack, thirdPack, bigPack;
    cin >> firstPack >> secondPack >> thirdPack;
   if(firstPack<=100 && secondPack <=100 && thirdPack <= 100 && firstPack>=1 && secondPack>=1 && thirdPack >=1){
       if(firstPack>secondPack && firstPack>thirdPack){
           bigPack= firstPack;
           if(secondPack+thirdPack==bigPack){
               cout << "Yes";
           } else{
               cout << "No";
           }
       } else if(secondPack>firstPack && secondPack>thirdPack){
           bigPack= secondPack;
           if(firstPack+thirdPack==bigPack){
               cout << "Yes";
           } else{
               cout << "No";
           }
       } else if (thirdPack>firstPack && thirdPack>secondPack){
           bigPack= thirdPack;
           if(secondPack+firstPack==bigPack){
               cout << "Yes";
           } else{
               cout << "No";
           }
       }
   }
    return 0;
}