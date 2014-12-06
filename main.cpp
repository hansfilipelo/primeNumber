#include <iostream>
#include <string>
#include "prime.h"
#include <vector>
#include <stdlib.h>

using namespace std;

int main(int argc, char* argv[]){
    
    unsigned long int max = atoi(argv[1]);
    
    vector<unsigned long int> primes = firstNPrime(max);
    
    
    for (int i = 0; i < primes.size(); i++) {
        cout << primes.at(i) << endl;
    }
    
    return 0;
}