#include<bits/stdc++.h>
using namespace std;
int ans = 4;

int main(){
    vector<char> R = {'0', '6', '0'};
    for(char i = '1';i<='9';i++){
           if(count(R.begin(),R.end(),i)){
               cout<<"in";
               ans++;
           }
    }
}