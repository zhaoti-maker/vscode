#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < 10; i++)
        cout << n << " ";
    cout << endl;
    for(int i = 0; i < 10; i++)
        cout << n + 1 << " ";
    
    return 0;
}