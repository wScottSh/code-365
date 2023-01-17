//
//  202301170944.cpp
//  codewars-2023
//  https://www.codewars.com/kata/561e9c843a2ef5a40c0000a4/train/cpp
//  Created by Scott Sheppard on 1/17/23.
//

#include <cmath>
#include <vector>

class GapInPrimes
{
public:
    static int isPrime(int n) {
        if (n <= 1) {
            return 0;
        }
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                return i;
            }
        }
        return 0;
    }
    
    static std::pair<long long, long long> gap(int g, long long m, long long n) {
        std::vector<int> primes;
        int first = primes.at(0);
        int second = primes.at(1);
        
        // iterate through the start and end numbers, finding the list of primes
       for (long long i = m; i <= n; i++) {
           if (isPrime(i)) primes.push_back(i);
       }
       
       // take the first two primes in the list and check the gap
       while (primes.size()) {
           if (second - first == g) {
               return std::pair {first, second};
           } else {
               primes.erase(primes.begin());
           }
        }
    }
};

