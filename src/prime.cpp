
#include "prime.hpp"

#include <vector>
#include <iostream>
#include "prime.hpp"

using std::vector;
using std::cout;
using std::endl;

vector<int> Factorizer::prime_factors(const int& total) {
      int num = total;
      vector<int> factors;
      if (num == 0 || num == 1) {
         return factors;
      }
      do {
         for (int i = 2; i <= num; i++) {
            bool isPrime = true;
            if (i != 2) {
               for (int j = 2; j < i; j++) {
                  if (i % j == 0) {
                     isPrime = false;
                  }
               }
            }
            if (isPrime) {
               if (num % i == 0) {
                  num = num / i;
                  factors.push_back(i);
                  break;
               }
            }
         }
      } while (num != 1);
      PrettyPrint(factors);
      return factors;
   }

void Factorizer::PrettyPrint (const vector<int> &factors) {
      for (int i = 0; i < factors.size(); i++) {
         cout<<factors[i]<<" ";
      }
      cout<<endl;
   }
