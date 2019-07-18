#include<iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int sum = 0;

    cin>> a;
    cin >> b;

    for (int i= a; i<= b; i++)
    {
        sum += i*i;
    }
    cout<<sum<<endl;
    return 0;
}
