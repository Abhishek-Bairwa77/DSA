#include<iostream>
using namespace std;
int main(){
    int arr[5] = {2,4,8,0,-1};
    int n = 5;
    int min,max;
    min = arr[0];
    max = arr[0];
    for(int i = 0; i<n; i++){
        if(arr[i]<min){
            min=arr[i];
        }

        if(arr[i]>max){
            max = arr[i];
        }
    }

    cout<<"minimum is : "<<min<<endl<<"maximum is : "<<max<<endl;
}