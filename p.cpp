#include<iostream>
using namespace std;
int main(){

    int n;
    
    cout << "Enter a number (1-7) = ";
    cin >> n;

    switch(n){
        case 1:
            cout << "Monday";
            break;

        case 2:
            cout << "Mo";
            break;

        case 3:
            cout << "Mon";
            break;

        case 4:
            cout << "Mond";
            break;

        case 5:
            cout << "Mondad";
            break;

        default:
            cout << " ppp";
    }

    return 0;

}