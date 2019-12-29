#include <iostream>
#include <fstream>
#include <string>
#include <vector>

int part_one(std::vector<int> input)
{
    for (int i = 0; i < input.size(); i += 4)
    {
        int a = input[i + 1];
        int b = input[i + 2];
        int c = input[i + 3];

        switch (input[i])
        {
        case 1:
            input[c] = input[a] + input[b];
            break;
        case 2:
            input[c] = input[a] * input[b];
            break;
        case 99:
            return input[0];
        }
    }
    return -1;
}

int part_two(std::vector<int> input)
{
    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            input[1] = i;
            input[2] = j;

            if (part_one(input) == 19690720)
                return 100 * i + j;
        }
    }
    return -1;
}

int main()
{
    auto input = std::vector<int>();

    int t;
    while (1)
    {
        scanf("%d,", &t);
        if (t == -1)
            break;
        else
            input.push_back(t);
    }
    input[1] = 12;
    input[2] = 2;

    std::cout << part_one(input) << std::endl;
    std::cout << part_two(input) << std::endl;
}