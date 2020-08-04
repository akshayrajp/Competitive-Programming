#include <iostream>
#include <string>
using namespace std;
int main()
{
    string name = "Akshay";
    int i = 2;
    name.erase(i, 1);
    cout << name;
}