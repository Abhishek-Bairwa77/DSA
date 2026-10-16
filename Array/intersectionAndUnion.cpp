#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void print(vector<int>&arr){
    int n = arr.size();
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
    
}

int main() {
    vector<int> arr1 = {4, 5, 10, 16};
    vector<int> arr2 = {2, 4, 16};

    vector<int> intersection, union1;

    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());

    int i = 0, j = 0;
    int size1 = arr1.size();
    int size2 = arr2.size();

    while (i < size1 && j < size2) {
        if (arr1[i] == arr2[j]) {
            intersection.push_back(arr1[i]);
            union1.push_back(arr1[i]);
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j]) {
            union1.push_back(arr1[i]);
            i++;
        }
        else {
            union1.push_back(arr2[j]);
            j++;
        }
    }

    
    while (i < size1) {
        union1.push_back(arr1[i]);
        i++;
    }

    
    while (j < size2) {
        union1.push_back(arr2[j]);
        j++;
    }

    cout << "Intersection: ";
    print(intersection);

    cout << "Union: ";
    print(union1);

    return 0;
}
