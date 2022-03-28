#include <bits/stdc++.h>

int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int t;
    std::cin >> t;

    while (t--){
        int n;
        std::cin >> n;

        // O(N+N)
        std::vector<bool> flags(100,false);

        int min_val_true = std::numeric_limits<int>::max();
        int max_val_true = std::numeric_limits<int>::min();

        for (int i = 0 ; i < n ; ++i){
            int val;
            std::cin >> val;
            if (!flags[val]) {
                flags[val] = true;
                min_val_true = std::min(min_val_true,val);
                max_val_true = std::max(max_val_true, val);
            }
        }

        bool ans = true;
        for (int i = min_val_true; i <= max_val_true ; ++i){
            if (!flags[i]) {
                ans = false;
                break;
            }
        }

        (ans) ? std::cout << "YES\n" : std::cout << "NO\n";
    }

    return 0;
    
}