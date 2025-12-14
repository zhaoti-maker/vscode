#include<iostream>

using namespace std;

int main()
{
    string s = "hello";
    string s2 = "world!";
    string s3 = s + " " + s2;

    getline(cin, s);

    cout << s << endl;
    cout << s3 << endl;
    cout << s3.length() << endl;

    string s4 = s3.substr(0, 7);
    cout << s4 << endl;

    return 0;
}