#include <iostream>
using namespace std;

int main() {
	int n, i; // Given number
	cin >> n;
	
    int right[5], left[5];
	// right = units, left = tens
	for(i = 0; i < 5; i++)
	{
	    right[i] = 0;
	    left[i] = 0;
	}
	
	if(n < 0 || n > 99)
	{
	for(i = 0; i < 5; i++)
	    cout << left[i];
	for(i = 0; i < 5; i++)
	    cout << right[i];
	   return 0;   
	}
	
	// First, we process units place.
	int units = n % 10;
	
	if(units > 0 && units <= 5)
	{
	    for(i = 4; i >= 5 - units; i--)
	        right[i] = 1;
	}
	else if(units > 5 && units <=9)
	{
	    right[0] = 1;
	    for(i = 4; i >= 10 - units; i--)
	        right[i] = 1;
	}
	
	// Next, we process tens place.
	int tens = (n / 10) % 10;
	
	if(tens > 0 && tens <= 5)
	{
	    for(i = 0; i < tens; i++)
	        left[i] = 1;
	}
	else if(tens > 5 && tens <=9)
	{
	    left[4] = 1;
	    for(i = 0; i < tens - 5; i++)
	        left[i] = 1;
	}
	
	for(i = 0; i < 5; i++)
	    cout << left[i];
	for(i = 0; i < 5; i++)
	    cout << right[i];
	    
 return 0;
}
