#include<iostream>
#include<bitset>
using namespace std;

//bitset <位数> 变量名(初始值);
//处理请自行询问AI

int main(){
    bitset <5> b("10111");
    cout << b << endl;
    for(int i = 0; i < (int)b.size(); i++)
        cout << b[i] << " ";
    cout << endl;
    return 0;
}