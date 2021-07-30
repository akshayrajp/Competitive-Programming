#include <iostream>
using namespace std;
int is_perfect(int input1)
{
    int result = 1, i;
    for (i = 2; i * i <= input1; i++)
        if (input1 % i == 0)
        {
            if (i * i != input1)
                result += i + (input1 / i);
            else
                result += i;
        }
    if (result == input1)
        return 1;
    else
        return 0;
}
int main()
{
    int n;
    cin >> n;
    if (is_perfect(n) == 1)
        cout << "Perfect";
    else
        cout << "Not Perfect";
    return 0;
}
