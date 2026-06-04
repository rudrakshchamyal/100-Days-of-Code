#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> arr = {1,11,4,4,4,4,5};
    int count;
    int majorityElement;

    for( int i = 0 ; i < arr.size() ; i++){
        count = 1;
        for( int j = 0 ; j < arr.size() ; j++){
            if( i != j && arr[i] == arr[j]){
                count++;

            }

            if( count >= arr.size()/2){
                majorityElement = arr[i];
                count = 0;
                break;
            }

        }
    }

    cout << majorityElement << endl;

    return 0;
}