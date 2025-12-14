#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool cmp(int a, int b){
    return a > b;
}

int main(){
    vector <int> v;
    for(int i = 1; i <= 10; i++)
        v.push_back(i);
    for(auto p = v.begin(); p != v.end(); p++)
        cout << *p << " ";
    cout << endl;

    sort(v.begin(), v.end(), cmp);

    for(auto p = v.begin(); p != v.end(); p++)
        cout << *p << " ";
    cout << endl;
    return 0;
}