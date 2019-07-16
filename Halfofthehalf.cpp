#include<iostream>
#include<string>

using namespace std;

int main() {
    int t;
    string str;

    cin>>t;
    while(t--){
        cin>>str;
        int half = str.length()/2;
        int j =0;
        while(j<half) {
            cout<<str[j];
            j +=2;
        }
        cout<<endl;
    }
    return 0;
}
