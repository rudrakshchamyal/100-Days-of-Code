#include<iostream>
using namespace std;

void selectionSort(int n, int arr[]){
    for(int i = 0 ; i < n-1 ; i++){
        int min = arr[i];
        for(int j = i ; j < n ; j++){
            if(min > arr[j]){
                min = arr[j];
                arr[j] = arr [i];
                arr[i] = min; 
            }

        }
    }



}

void print(int n, int arr[]){

    cout << "[";
    for(int i = 0 ; i < n ; i++){
        if(i != n-1){
            cout << arr[i] << ", ";
        }
    }
    cout << arr[n-1] << "]";
}

int main(){

    int arr[] = { 3,5,7,1,2};
    selectionSort(5, arr);
    print(5, arr);

    return 0;
}