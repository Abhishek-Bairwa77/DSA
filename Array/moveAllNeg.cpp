#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[5] = {-2,4,-1,0,3};
    int mid = 0;
    int high = 4;
    while(mid<=high){
        if(arr[mid]<0){
            mid++;
        }
        else if(arr[high]>=0){
            high--;
        }
       else{
            swap(arr[mid++],arr[high--]);
           
        }

        
    }

    for(int i =0; i<5; i++){
        cout<<arr[i]<<"  ";
    }
}