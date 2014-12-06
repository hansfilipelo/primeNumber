#include "prime.h"

using namespace std;

int firstCandidate(unsigned long int currPrime, vector<int>& possPrime){
    for (unsigned long int i = currPrime + 1; i < possPrime.size(); i++) {
        if (possPrime.at(i) == 1) {
            return i;
        }
    }
    
    return 0;
}

vector<unsigned long int> firstNPrime(unsigned long int n){
    
    vector<unsigned long int> primes;
    
    vector<int> possPrime;
    unsigned long int currPrime = 1;
    
    for (unsigned long int i = 0; i < n; i++) {
        possPrime.push_back(1);
    }
    possPrime.at(1) = 0;
    
    while (true) {
        currPrime = firstCandidate(currPrime,possPrime);
        
        if (currPrime == 0) {
            return primes;
        }
        
        primes.push_back(currPrime);
        
        for (int i = currPrime; i * currPrime < n; i++) {
            possPrime.at(i*currPrime) = 0;
        }
    }
}

// --------------------------------
