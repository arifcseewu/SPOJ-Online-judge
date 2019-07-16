#include<iostream>

using namespace std;

int main()
{


    double in, sum =0, avg;

    for (int i =1; i<= 6; i++){
        cin>>in;
        sum += in;
    }
    avg = sum/6;
    cout<<avg<<endl;
    return 0;
}
