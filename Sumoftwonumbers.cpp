#include<iostream>

using namespace std;

int main() {

    int test;
    double number1, number2, answer;

    cin>>test;

    while(test--) {
        cin>>number1;
        cin>>number2;

        answer = number1 + number2;

        cout<<answer<<endl;
    }
    return 0;
}
