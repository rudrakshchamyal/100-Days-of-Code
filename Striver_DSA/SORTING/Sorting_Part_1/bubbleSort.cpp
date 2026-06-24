#include<iostream>
using namespace std;

void bubbleSort(int n, int arr[]){
    // Outer loop now uses 'i'
    for(int i = 0; i < n - 1; i++){
        
        // Inner loop now uses 'j'
        // Stops at n - 1 - i to stay safely within bounds
        for(int j = 0; j < n - 1 - i; j++){
            if(arr[j+1] < arr[j]){
                // Swap the elements using a temporary variable
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void print(int n, int arr[]){
    cout << "[";
    for(int i = 0; i < n ; i++){
        cout << arr[i];
        if(i != n - 1){
            cout << ", ";
        }
    }
    cout << "]" << endl;
}

int main(){
    int arr[] = {3, 1, 2, 4, 6, 5, 10, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]); 

    bubbleSort(size, arr);
    print(size, arr);

    return 0;
}