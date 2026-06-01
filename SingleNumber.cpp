#include<iostream>
#include<vector>
using namespace std;

int singleNumber(vector<int> &vec){
    int sum = 0;
    for(int i = 0 ; i < vec.size() ; i++){

        sum ^= vec[i];
    }
    return sum;
}

int main(){

    vector<int> v = {1, 1, 2, 2, 3, 4, 4};
    cout << "Single Number in the vector is = " << singleNumber(v);

    return 0;
}