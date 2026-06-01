#include<iostream>
using namespace std;

int main(){

    int arr[] = {1, 2, 3, 4, 5};
    int num;
    
    cout << "Enter Element to check = ";
    cin >> num;

    bool found = false;

    for( int i = 0 ; i < 5 ; i++){
        if (num == arr[i]){
            found = true;
            break;
        }
    }

    if(found){
        cout << "Number is present!";
    }

    else{
        cout << "Number is absent!";
    }

    return 0;
}