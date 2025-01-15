// #Question:-

// Link-> https://leetcode.com/problems/minimize-xor/description/?envType=daily-question&envId=2025-01-15

// Date-> 15/01/25

// #Solution:-

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimizeXor(int num1, int num2) {
        int result = 0;

        int targetSetBitsCount = __builtin_popcount(num2);
        int setBitsCount = 0;
        int currentBit = 31;
        while (setBitsCount < targetSetBitsCount) {
            if (isSet(num1, currentBit) ||
                (targetSetBitsCount - setBitsCount > currentBit)) {
                setBit(result, currentBit);
                setBitsCount++;
            }
            currentBit--;
        }

        return result;
    }

private:
    bool isSet(int x, int bit) { return x & (1 << bit); }

    void setBit(int &x, int bit) { x |= (1 << bit); }
};