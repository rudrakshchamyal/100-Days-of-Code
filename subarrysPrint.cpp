#include<iostream>
using namespace std;

int main(){

    int arr[] = {1, 2, 3, 4, 5};
    int Size = sizeof(arr)/sizeof(int);

    for( int i = 0 ; i < Size ; i++){
        for(int j = i ; j < Size ; j++){
            for( int k = i ; k <= j ; k++){
                cout << arr[k] <<",";
            }
            cout << "\t";
        }
        cout << endl;
    }

    return 0;
}