#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector <int> m(10);
    for(int i = 0;i < 10;i++)
        m[i] = 10 - i;

    for(int i = 0;i < 10;i++)
        cout << m[i] << " ";

    m.push_back(100);

    cout << endl;

    sort(m.begin(),m.end());

    for(int i = 0;i < 11;i++)
        cout << m[i] << " ";
    cout << endl;
    for(auto p = m.begin(); p != m.end(); p++)
        cout << *p << " ";
    return 0;
}