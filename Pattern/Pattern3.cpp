#include<iostream>
using namespace std;

void Pattern(int number){
    for(int i = 0; i < number; i++){
        for(int j = 0; j < number; j++){
            cout << "* ";
        }
        cout << endl;
    }
    
}

// int main(){
//     int number;
//     cin >> number;
//     Pattern(number);
//     return 0;
// }

int main(){
    int testCase;
    cin >> testCase;
    for(int i = 0; i< testCase; i++){
        int number;
        cin >> number;
        Pattern(number);
    }
}