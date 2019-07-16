#include<iostream>

using namespace std;

int main() {

    int test;
    int n, x, y, div;

    cin>> test;

    if(test<100) {
        while(test --) {
            cin>> n;
            cin>>x;
            cin>>y;

            //div = n/x;
            //cout<<"Div is"<<div;
            for(int i = 1; i< n; i++ ) {
                if(i%x == 0 && i%y != 0) {
                    cout<<i<<" ";
                }
            }
           cout<<endl;
        }
    }
    return 0;
}
