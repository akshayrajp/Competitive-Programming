#include <iostream>
#include <string>
using namespace std;
int main()
{
    string T, buffer;
    int i, noOfVowels = 0, noOfConsonants = 0, noOfDigits = 0;
    while (getline(cin, buffer))
    {
        if (buffer.find(".......", 0) != string::npos)
            break;
        T += buffer + ' ';
    }
    for (i = 0; i < T.length(); i++)
    {
        if (T[i] >= 48 && T[i] <= 57)
            noOfDigits++;
        else if ((T[i] >= 65 && T[i] <= 90) || (T[i] >= 97 && T[i] <= 122))
        {
            if (T[i] >= 65 && T[i] <= 90)
                T[i] += 32;
            switch (T[i])
            {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                noOfVowels++;
                break;
            default:
                noOfConsonants++;
            }
        }
    }
    cout << "Number of Vowels = " << noOfVowels << "\nNumber of Consonants = " << noOfConsonants << "\nNumber of Digits = " << noOfDigits;
    return 0;
}