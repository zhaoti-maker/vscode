#include<iostream>
#include<vector>

using namespace std;

int main() {
    vector <int> v;
    v.resize(10);          //初始值均为0
    for(int i = 0; i < 10; i++) {
        v[i] = i;
    }

    v.push_back(100);

    for(int i = 0; i < 11; i++) {
        cout << v[i] << " ";
    }

    cout << endl << v.size() << endl;

    vector <int> v1(10);
    for(int i = 0; i < 10; i++) {
        cout << v1[i] << " ";
    }

    cout << endl;

    vector <int> v2(10, 2);
    for(int i = 0; i < 10; i++) {
        cout << v2[i] << " ";
    }

    return 0;
}