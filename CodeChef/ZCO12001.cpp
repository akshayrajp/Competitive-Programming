#include <iostream>
using namespace std;
int main()
{
	int n, i, nesting_depth = 0, nesting_depth_pos = 0, max_sequence = 0, max_sequence_pos = 0;
	int bracket, start_pos = 0, bracketsOpen = 0, sequenceLength = 0;
	cin >> n;

	/* 
	 * The algorithm used here is as follows:
	 * We start by accepting a bracket input.
	 * If the bracket is '(', then we set the value of start to the value of i, to indicate start.
	 * We then increment the value of bracketsOpen and sequenceLength
	 * If the value of bracketsOpen > nesting_depth, then nesting_depth = bracketsOpen
	 * Else if the bracket is ')', decrement the value of bracketsOpen and increment the length of sequenceLength
	 * If the value of bracketsOpen is 0, indicating that all brackets have been closed,
	 * 	check if the value of sequenceLength is greater than max_sequence
	 * 		If yes, max_sequence = sequenceLength and max_sequence_pos = start_pos
	 * If the value of bracketsOpen is 0, reset the value of sequenceLength to 0.
	 */

	for(i = 1; i <= n; i++)
	{
		// Accept the bracket input
		cin >> bracket;
		if(bracket == 1) // If the bracket is '('
		{
			if(sequenceLength == 0)
			{
				start_pos = i;
			}
			sequenceLength ++;
			bracketsOpen ++;
			if(bracketsOpen > nesting_depth)
			{
				nesting_depth = bracketsOpen;
				nesting_depth_pos = i;
			}
		}
		else // If the bracket is ')'
		{
			bracketsOpen --;
			sequenceLength++;
			if(bracketsOpen == 0) // Indicating that all sequences have been closed
			{
				if(sequenceLength > max_sequence)
				{
					max_sequence = sequenceLength;
					max_sequence_pos = start_pos;
				}
				sequenceLength = 0;
			}
		}

	}
	cout << nesting_depth << " " << nesting_depth_pos << " " << max_sequence << " " << max_sequence_pos << '\n';
	return 0;
}
