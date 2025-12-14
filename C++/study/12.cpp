#include<iostream>
#include<stack>

using namespace std;

int main(){
    stack <int> s;
    s.push(1);
    s.push(2);
    s.push(3);

    int a = s.top();
    s.pop();

    cout << a << endl;
    cout << s.top() << endl;
    cout << s.size() << endl;

    return 0;
}