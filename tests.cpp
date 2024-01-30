#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions_to_implement.cpp"
#include <vector>

TEST_CASE("factorial test cases", "[factorial]"){
    REQUIRE(Factorial(0) == 1);
    REQUIRE(Factorial(-1) == 1);
    REQUIRE(Factorial(-10) == 1);
    REQUIRE(Factorial(1) == 1);
    REQUIRE(Factorial(2) == 2);
    REQUIRE(Factorial(4) == 24);
    REQUIRE(Factorial(7) == 5040);
}

// TEST_CASE("MultiplesFilter TESTS", "[MultiplesFilter]"){
//     std::vector<double> vec = {3.0,6.0,9.0,12.0,15.0};
//     //normal
//     std::vector<double> ans = MultiplesFilter(vec,3);
//     std::vector<double> exp = {3.0,6.0,9.0,12.0,15.0};
//     REQUIRE( ans == exp );
//     //zero vec
//     vec = {0,0,0};
//     ans = MultiplesFilter(vec,3.0);
//     exp = {0.0,0.0,0.0};
//     REQUIRE(ans == exp);
//     //empty vec
//     vec = {};
//     ans = MultiplesFilter(vec,3);
//     exp ={};
//     REQUIRE( ans == exp);
// }

TEST_CASE("GreaterMask tests", "[GreaterMask]"){
    std::vector<double> vec{3,6,9,12,15};
    std::vector<bool> exp{0,1,1,1,1};
    std::vector<bool> ans= GreaterMask(vec,5);
    std::cout << ans[1] << std::endl;
    
    REQUIRE(ans == exp);

    vec = {1,2,3,4,5,6,78};
    exp = {0,0,0,0,0,0,1};
    ans = GreaterMask(vec,9);

    REQUIRE(ans == exp);

    vec = {};

    exp = {};

    ans = GreaterMask(vec,5);

    REQUIRE(ans == exp);
}
TEST_CASE("LessMask tests", "[LessMask]"){
    std::vector<double> vec = {3,6,9,12,15};
    std::vector<bool> exp = {1,0,0,0,0};
    //normal
    REQUIRE(LessMask(vec,5) == exp);

    vec = {1,2,3,4,5,6,78};

    exp = {1,1,1,1,1,1,0};

    REQUIRE(LessMask(vec,9) == exp);

    vec = {};

    exp = {};

    REQUIRE(LessMask(vec,5) == exp);
}