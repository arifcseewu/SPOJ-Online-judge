#include<iostream>

using namespace std;

int main() {
    int n, line, column;

    cin>>n;
    while(n--) {

        cin>> line;
        cin>> column;

        for(int i=0; i< line; i++){
            for(int j = 0; j< column ; j++){
                if((i+j)%2==0)
                {
                    cout<<"*";
                }
                else
                    cout<<".";
            }
            cout<<endl;

        }
    }

    return 0;
}
