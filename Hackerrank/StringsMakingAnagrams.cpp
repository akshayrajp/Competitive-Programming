int makeAnagram(string a, string b)
{
    int a_freq[26] = {0}, b_freq[26] = {0}, i, c = 0;

    for (i = 0; i < a.length(); i++)
        a_freq[a[i] - 97]++;

    for (i = 0; i < b.length(); i++)
        b_freq[b[i] - 97]++;

    for (i = 0; i < 26; i++)
        c += abs(a_freq[i] - b_freq[i]);
    return c;
}