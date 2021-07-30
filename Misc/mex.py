class Solution{
public:
 string Shortest(string s){
    if(s == "")return "0";

    int i, n = s.length();
    int pos[] = {n, n};
    vector < pair < int, int >> v(n+1); // (length, top digit)
    vector < int > z(n+1);
    v[n] = {1, 0};
    z[n] = -1;
    for(i=n-1; i >= 0; i--){
        int digit = s[i]-'0';

        pos[digit] = i;

        if(pos[0] == n){
            v[i] = {1, 0};
            z[i] = n;
            continue; }
        if(pos[1] == n){
            v[i] = {1, 1};
            z[i] = n;
            continue; }

        auto p0 = v[pos[0]+1];
        auto p1 = v[pos[1]+1];

        if(p0.first <= p1.first){
           v[i] = {p0.first+1, 0};
           z[i] = pos[0]+1;}
        else{
           v[i] = {p1.first+1, 1};
           z[i] = pos[1]+1;}
    }

    int offset = 0;
    string ans;
    for(i=v[0].first-1; i >= 0; i--){
        ans += '0'+v[offset].second;
        offset = z[offset];}
    return ans; }
