#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int>arr = {2,4,5,7,1};
    sort(arr.begin(),arr.end());
    int k = 1;
    cout<<"The "<<k<<"th "<<" minimum is : "<<arr[k-1]<<", "<<arr[arr.size()-k]<<" is maximum";

}