#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/prime.hpp"

using std::vector;

TEST_CASE( "handles empty vector and primes" ) {
    REQUIRE( Factorizer::prime_factors(0).empty() );
    REQUIRE( Factorizer::prime_factors(1).empty() );
    REQUIRE( Factorizer::prime_factors(17) == vector<int>{17}  );
    REQUIRE( Factorizer::prime_factors(2) == vector<int>{2}  );

}
TEST_CASE( "handles composites") {
    REQUIRE( Factorizer::prime_factors(10) == vector<int>{2,5}  );
    REQUIRE( Factorizer::prime_factors(100) == vector<int>{2,2,5,5}  );
    REQUIRE( Factorizer::prime_factors(24) == vector<int>{2,2,2,3}  );
}
