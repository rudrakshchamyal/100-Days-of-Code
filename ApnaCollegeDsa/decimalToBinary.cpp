#include<iostream>
#include<cmath>
using namespace std;

int decToBin( int num ){

    int temp = num;
    int binNum = 0;
    int i = 0;

    while ( temp != 0){

        int n = temp % 2;
        temp /= 2;
        binNum += n * pow(10, i);
        i++;

    };

    return binNum;
    }

int main(){

    cout << "Enter a number in decimal system = ";
    int n;
    cin >> n;

    cout << "Binary form of this number = " << decToBin(n);

    return 0;
}