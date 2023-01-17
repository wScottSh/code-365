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
    static bool isPrime(long long n) { // create a function that checks if a number is prime
        if (n <= 1) { // if the number is less than or equal to 1...
            return false; // then it can't be prime
        }
        for (long long i = 2; i <= sqrt(n); i++) { //starting at 2, iterate up to the square root of the provided number
            if (n % i == 0) { // if the provided number is not evenly divisible by the iterated integer
                return false; // it isn't prime
            }
        }
        return true; // if it passes this far, the remaining number is prime - return true
    }
    
    static std::pair<long long, long long> gap(int g, long long m, long long n) {
        std::vector<long long> primes; // initialize a vector to hold the primes
        for (long long i = m; i <= n; i++) { // iterate through the starting (m) and ending (n) numbers
           if (isPrime(i)) primes.push_back(i); // push all the primes into `primes` vector
        }
        
        for (int i = 1; i < primes.size(); ++i) { // iterate through the primes vector
            if (primes[i] - primes[i-1] == g) { // compare the gap between the first two numbers in the primes vector against the provided gap (g)
                return std::make_pair(primes[i-1], primes[i]); // if it passes, return the first two elements as a pair
            }
        }
        return std::make_pair(0,0); // otherwise default to returning (0,0)
    }
};

