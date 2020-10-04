int hourglassSum(vector<vector<int>> arr)
{
    int i, j, sum = 0, max = -2147483648;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            sum = arr[i][j] + arr[i][j + 1] + arr[i][j + 2] + arr[i + 1][j + 1] + arr[i + 2][j] + arr[i + 2][j + 1] + arr[i + 2][j + 2];
            if (sum > max)
                max = sum;
        }
    }
    return max;
}