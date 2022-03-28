#include <bits/stdc++.h>

int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int n;
    std::cin >> n;

    std::cin.ignore();

    std::string stones;
    getline(std::cin, stones);

    // O(N)
    int len = stones.size();

    int cnt = 0;
    for (int i = 0 ; i < len-1 ; ++i){
        if (stones[i] == stones[i+1]) cnt++;
    }

    std::cout << cnt << '\n';

    return 0;
}