#include<iostream>
using namespace std;
int main(){
    int arr1[] = {4,5,10,16};
    int arr2[] = {2,4,16};
    int n1,n2;
    n1 = sizeof(arr1)/sizeof(arr1[0]);
    n2 = sizeof(arr1)/sizeof(arr1[0]);
    int mid,high;
    mid = 0;
    high = n1-1;
    int union1[7];
    int intersection[7];
    int i =0;
    int j =0;

    while(mid<=n2){
        if(arr2[mid]==arr1[high]){
            intersection[i] = arr2[mid];
            i++;
            mid++;
            high--;
        }else{
            union1[j]==arr1[high];
            high--; 
        }
        if(high==0){
            high=n1-1;
            mid++;
        }
    }
    

}