#include <iostream>
using namespace std;

int arraySum(int arr[], int size){
    int sum=0;
    for(int i=0; i<size; i++){
        sum = sum + arr[i];
    }
    return sum;
}

int main(){
    int size;
    cout << "Enter Size of Array : ";
    cin >> size;
    int arr[100];
    cout << "Input Array " <<endl;
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }
    cout << "Sum of Array is : " << arraySum(arr, size) <<endl;
}