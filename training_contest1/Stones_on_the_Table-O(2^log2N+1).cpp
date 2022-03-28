#include <bits/stdc++.h>

int solve(std::string s, int start, int end){
    if (start >= end) return 0;

    int m = (start+end) / 2;
    
    if (s[m] == s[m+1]) 
        return 1 + solve(s,start,m) + solve(s,m+1,end);
    else
        return solve(s, start, m ) + solve(s, m+1, end);
}

int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int n;
    std::cin >> n;

    std::cin.ignore();

    std::string stones;
    getline(std::cin, stones);

    std::cout << solve(stones,0, stones.size()-1) << '\n';

    return 0;
}