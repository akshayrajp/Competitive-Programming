int jumpingOnClouds(vector<int> c)
{
    int steps = 0;
    for (int i = 0; i < c.size() - 1; i++)
    {
        if (c[i] == 0)
            i++;
        ++steps;
    }
    return steps;
}