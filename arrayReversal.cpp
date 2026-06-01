#include<iostream>
using namespace std;

void revArr(int arr[], int SIZE){

    int j = SIZE - 1; 

    for( int i = 0 ; i < SIZE ; i++ ){
        while( i < j){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }

}


void print(int arr[], int SIZE){

    int j = SIZE - 1; 

    cout << "{";
    for( int i = 0 ; i < SIZE ; i++ ){

        if ( i !=  SIZE - 1){
            cout << arr[i] << ", ";
        }

        else{
            cout << arr[SIZE - 1] << "}";
        }
        
    }

}

int main(){

    int arr1[] = {1, 2, 3, 4, 5};
    int SIZE = sizeof(arr1)/sizeof(int);
    revArr(arr1, SIZE);
    print(arr1, SIZE);

    return 0;
}