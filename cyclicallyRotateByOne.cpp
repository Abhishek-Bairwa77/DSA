#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i = n-1;
    while(i>0){
        swap(arr[i-1],arr[i]);
        i--;
    }

    for(int j = 0; j<n; j++){
        cout<<arr[j]<<"  ";
    }

    
}