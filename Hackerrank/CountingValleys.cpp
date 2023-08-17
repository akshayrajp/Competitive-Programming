int countingValleys(int steps, string path)
{
    int pos = 0, c = 0;
    bool descent = false;
    for (int i = 0; i < path.length(); i++)
    {
        path[i] == 'U' ? ++pos : --pos;
        if (pos < 0)
            descent = true;
        if (pos >= 0 && descent == true)
        {
            descent = false;
            c++;
        }
    }
    return c;
}