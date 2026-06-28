#include<iostream>
using namespace std;

void bubbleSort(int n, int arr[]) {
    for (int i = n - 1; i >= 0; i--) {
        int didSwap = 0;
        for (int j = 0; j <= i - 1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;

                didSwap = 1;
            }
        }
        if(didSwap == 0){
            break;  // Already Sorted
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
    int arr[] = {5,4,2,4,12,423,4};
    int Size = sizeof(arr) / sizeof(arr[0]); 

    bubbleSort(Size, arr);
    print(Size, arr);

    return 0;
}