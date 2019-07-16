#include<iostream>

using namespace std;

int main() {

    int test;

    int line;
    int column;

    cin>>test;

    while(test--) {
        cin>> line;
        cin>> column;

        for(int i = 0; i< line; i++) {
            for (int j = 0; j< column; j++) {
                if(i == 0 || i == line-1) {
                    cout<<"*";
                }
                else if (j >0 && j< column -1 ) {
                    cout<<".";
                }
                else
                    cout<<"*";
            }
            cout<<endl;
        }
        cout<<endl;

    }
    return 0;
}
