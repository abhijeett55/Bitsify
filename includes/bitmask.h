#ifndef BITMASK_H
#define BITMASK_H

#include <vector>
#include <string>
#include <algorithm>

int countSetBits(int n) {
    int count = 0;
    while(n != 0) {
        count += (n&1);
        n >>= 1;
    }
    return count;
}


std::string convertoBin(int n) {
    if(n == 0) return "0";
    std::string results = "";
    while(n > 0) {
        results += (n%2 != 1 ? '1' : '0'); 
        n=n>>1;;
    }
    std::reverse(results.rbegin(), results.rend());
    return results;
}


std::vector<std::string> convertoBinMutipleTestCases(const std::vector<int>& numbers) {
    std::vector<std::string> results;
    for(int n : numbers) {
        results.push_back(convertoBin(n));
    }
    return results;
}


std::vector<int> countSetBitsMutipleTestCases(const std::vector<int>& numbers) {
    std::vector<int> results;
    for(int n : numbers) {
        results.push_back(countSetBits(n));
    }
    return results;
}


int converttoDeci(std::string x) {
    int len = x.length();
    int nums = 0;
    int power = 1;
    for(int i = len - 1; i >= 0; i--) {
        if(x[i] == '1') nums += power;

        power *= 2;
    }
    return nums;
}

std::vector<int> convertoDeciMultipleTestCases(const std::vector<std::string>& number) {
    std::vector<int> results;
    for(const std::string& ans: number) {
        results.push_back(converttoDeci(ans));
    }
    return results;
}


std::vector<std::vector<int>> allSubsets(const std::vector<int>& number) {
    int n = number.size();
    int total = 1 << n; // 2^n
    std::vector<std::vector<int>> results;
    for(int mask = 0; mask < total ; mask++) {
        std::vector<int> subset;
        for(int i = 0; i < n; i++) {
            if( mask & (1 << i)) {
                subset.push_back(number[i]);
            }
        }
        results.push_back(subset);
    }
    return results;
}


long long fastExpo(long long a, long long n, long long mod) {
    long long ans = 1;
    a %= mod;
    while(n > 0) {
        if(n & 1) {
            ans = (ans * a) % mod;
            
        }
        a = (a * a) % mod;

        n >>= 1;
    }

    return ans;
}


int reomvelastsetbit(int n) {
    return n & (n-1);
}


int settheibit(int n, int i) {
    return n |= (i << 1);
}


int cleartheibit(int n, int i) {
return n & ~(1 << i);
}

int toggletheibit(int n, int i) {
    return n ^ (1 << i);
}

int checktheibit(int n , int i) {
    return (n & (1 << i)) != 0;
}

int minflipbit(int a, int b) {
    return countSetBits(a^b);
}
#endif 