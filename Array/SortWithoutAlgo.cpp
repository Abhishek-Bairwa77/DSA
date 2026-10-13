#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,0,2,1,0,1,1,2,0,0};
   /* int n = sizeof(arr)/sizeof(arr[0]);
    int ans[n];
    int count = 0;
    for(int i = 0; i<n; i++){
        if(arr[i]==0){
            ans[count] = 0;
            count++;
        }
    }

    for(int i = 0; i<n; i++){
        if(arr[i]==1){
            ans[count] = 1;
            count++;
        }
    }

    for(int i = 0; i<n; i++){
        if(arr[i]==2){
            ans[count] = 2;
            count++;
        }
    }

    for(int i = 0; i<n; i++){
        cout<<ans[i]<<"  ";
    }
        */

      int n = sizeof(arr) / sizeof(arr[0]);

    int low = 0, mid = 0, high = n - 1;

    while (mid <= high) {
        if (arr[mid] == 0) {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1) {
            mid++;
        }
        else {
            swap(arr[mid], arr[high]);
            high--;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << "  ";
    }

}