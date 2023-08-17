int sockMerchant(int n, vector<int> ar) {
        sort(ar.begin(),ar.end());
        int c = 0;
        for(int i = 0; i < ar.size(); i++)
        {
            if(ar[i] == ar[i+1])
                c++, i++;
        }
        return c;
}