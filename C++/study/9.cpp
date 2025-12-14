#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector <int> v;

    v.resize(10);

    v.push_back(-1);

    for(auto p = v.begin(); p != v.end(); p++)
        cout << *p << " ";

    return 0;
}