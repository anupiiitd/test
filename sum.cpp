#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int arr[] = {1,2,3,45,0};
    int s = 0;
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        s+=arr[i];
    }
    cout<<s;
    
}