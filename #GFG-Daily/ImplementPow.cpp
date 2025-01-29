// #Question:-

// Link-> https://www.geeksforgeeks.org/problems/powx-n/1

// Date-> 29/01/25

// #Solution:-

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    double solve(double b, int e){
        double ans = 1;
        while(e){
            if(e&1){
                ans=ans*b;
            }
            b=b*b;
            e=e>>1;
        }
        return ans;
    }
    double power(double b, int e) {
        long long p = e;
        if(p<0){
            double ans = solve(b,-1*p);
            return (1/ans);
        }
        
        double ans = solve(b,p);
        return ans;
        
    }
};