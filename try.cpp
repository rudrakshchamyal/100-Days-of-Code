#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> vec = { 1, 2, -3, 4,-5};
    int currSum = 0 ;
    int maxSum = vec[0];

    for( int i = 0 ; i < vec.size() ; i++){
        currSum += vec[i];
        maxSum = max( currSum , maxSum);
    }

    if(currSum < 0){
        currSum = 0;
    }

    cout << maxSum;

    return 0;
}