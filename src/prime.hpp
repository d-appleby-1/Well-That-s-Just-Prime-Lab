#pragma once

#include<vector>

using std::vector;

class Factorizer {
public:
    Factorizer() = default;
    static vector<int> prime_factors(const int& total);
    static void PrettyPrint (const vector<int> &factors);
};
