#include <iostream>
#include <string>
using namespace std;
int main()
{
    long unsigned int n, i;
    bool isCompatible = false;
    string groomDrinks, brideDrinks;
    cin >> n;
    cin >> brideDrinks >> groomDrinks;
    while (1)
    {
        isCompatible = false;
        for (i = 0; i < brideDrinks.length(); i++)
        {
            if (brideDrinks[0] == groomDrinks[0])
            {
                brideDrinks.erase(0, 1);
                groomDrinks.erase(0, 1);
                isCompatible = true;
                break;
            }
            else
            {
                groomDrinks += groomDrinks[0];
                groomDrinks.erase(0, 1);
            }
        }
        if (isCompatible == false)
            break;
    }
    cout << groomDrinks.size();
    return 0;
}