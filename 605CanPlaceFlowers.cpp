#include <common.h>

class Solution {
    public:
        bool canPlaceFlowers(vector<int>& flowerbed, int n) {
            int current_count = 0;
            for (int i = 0; i < flowerbed.size(); i++) {
                if (flowerbed[i] == 1 || i == flowerbed.size() - 1) {
                    int flowers = current_count / 2 - 1;
                    if (flowers > 0)
                        n -= flowers;
                    if (n <= 0)
                        return true;
                }
                else  {
                    current_count++;
                }
            }
            return false;
        }
    };