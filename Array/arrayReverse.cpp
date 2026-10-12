#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void Rev(int arr[],int size){
      for (int i =0; i<size/2; i++){
        int temp;
        temp = arr[i];       //swapping
        arr[i] = arr[size-i-1];
        arr[size-i-1]=temp;
    }

}

void print(int arr[],int size){
    for(int i =0; i<size; i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
}

int main(){
    int arr[4] = {1,2,3,4};
    int n =4;
    cout<<"BEFORE : "<<endl;
    print(arr,n);
    Rev(arr,n);
    cout<<"AFTER REVERSING :"<<endl;
    print(arr,n);

    

}