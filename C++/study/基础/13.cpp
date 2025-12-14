#include<iostream>
#include<queue>

using namespace std;

int main(){
    queue <int> q;
    for(int i = 1; i <= 5; i++)
        q.push(i);

    cout << q.front() << endl << q.back() << endl;

    q.pop();
    q.push(6);
    cout << q.front() << endl << q.back() << endl;
    return 0;
}