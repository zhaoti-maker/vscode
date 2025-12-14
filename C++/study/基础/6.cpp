#include<iostream>

using namespace std;

struct student{
    string name;
    int age;
};

int main() {
    student a[10];
    a[0].name = "zhangsan";
    a[0].age = 18;
    cout << a[0].name << " " << a[0].age << endl;
    return 0;
}