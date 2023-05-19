// Question:-

// Given a positive integer N., The task is to find the value of    \sum_{i=1}^{i=n} F(i)  where function F(i) for the number i be defined as the
// sum of all divisors of ‘i‘.

// Approach with T.C = O(N^2)

// Solution:-

#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long sumOfDivisors(int N)
    {
        vector<long long> divisors(N + 1, 0); 
        long long sum = 0;
        for (int i = 1; i <= N; i++){
            for (int j = i; j <= N; j += i){
                divisors[j] += i;
                }
                sum += divisors[i];
            }
        return sum;
    }
};

int main(){
    int t;
    cin >> t;
    while(t--){
        int N;
        cout << "Enter the integer: ";
        cin >> N;

        Solution A;
        auto ans = A.sumOfDivisors(N);
        cout << ans << endl;
    }
}