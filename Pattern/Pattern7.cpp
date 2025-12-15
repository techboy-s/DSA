// 1 
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5


#include<iostream>
using namespace std;

void Pattern(int number){
    for(int i = 1; i <= number; i++){
        for(int j = 1; j<= i; j++){
            cout << i << " ";
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