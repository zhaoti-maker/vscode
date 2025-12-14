#include<iostream>
#include<map>

using namespace std;

int main(){
    map <string, int> m;
    m["hello"] = 2;
    m["world"] = 3;

    cout << "hello : " << m["hello"] << endl;
    cout << "world : " << m["world"] << endl;
    cout << m.size() << endl;

    for(auto p = m.begin(); p != m.end(); p++){
        cout << p->first << " : " << p->second << endl;
    }
    return 0;
}