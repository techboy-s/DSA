// * * * * *
// * * * *
// * * *
// * *
// *

#include<iostream>
using namespace std;

void Pattern(int number){
    for(int i = 0; i<=number; i++){
        for(int j = i; j<=number; j++){
            cout << "* ";
        }

        cout << endl;
    }
}

int main(){
    int number;
    cin >> number;
    Pattern(number);
    return 0;
}