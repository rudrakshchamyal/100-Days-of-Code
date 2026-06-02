#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> vec = { 2, 7, 11, 15};
    int i = 0 ;
    int j = vec.size() - 1;
    int target = 18;


    while(i < j){

        int pSum = vec[i] + vec[j];
        
        if( pSum < target ){
            i++;
        }

        else if(pSum == target){
            break;
        }

        else if(pSum > target){
            j--;
        }
    }
    cout << "(" << vec[i] << ", " << vec[j] << ")";

    return 0;
}