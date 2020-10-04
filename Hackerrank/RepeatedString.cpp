long repeatedString(string s, long n)
{
    long i, c = 0;

    for (i = 0; i < s.length(); i++)
        if (s[i] == 'a')
            ++c;

    c *= n / s.length();

    for (i = 0; i < n % s.length(); i++)
        if (s[i] == 'a')
            ++c;
    return c;
}