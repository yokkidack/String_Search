/* TODO:
human_du_000.ans
human_du_001.ans
human_en_000.ans
human_en_001.ans
human_it_000.ans
human_it_001.ans
meta.ans
random_000.ans
random_001.ans
trivial_dummy.ans
trivial_empty_heystack.ans
trivial_empty_needle.ans
trivial_eol.ans
trivial_reflexive.ans
trivial_smaller_heystack.ans
trivial_sol.ans
*/

#define CATCH_CONFIG_MAIN
#include "catch.hpp"
/*
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include "../algorithms/naive_string_search.hxx"
#include "../algorithms/boyer_moore_search.hxx"
#include "../algorithms/knuth_morris_pratt_search.hxx"
#include "../algorithms/rabin_karp_search.hxx"


TEST_CASE("dummy test")
{
    REQUIRE(1 != 0);
}

TEST_CASE("Naive no except")
{
    std::string a{"hellohiahoyhaloprivethi"};
    std::string b{"hi"};
    std::vector<char> string_(a.begin(), a.end());
    std::vector<char> substring_(b.begin(), b.end());
    REQUIRE_NOTHROW(Naive::Search(string_, substring_));
}

TEST_CASE("Naive search test")
{
    std::string a{"hellohiahoyhaloprivethi"};
    std::string b{"hi"};
    std::vector<char> string_(a.begin(), a.end());
    std::vector<char> substring_(b.begin(), b.end());
    REQUIRE(Naive::Search(string_, substring_) == 5);
}

TEST_CASE("Naive search test - match at the end of line")
{
    std::string a{"helloahoyhaloprivethi"};
    std::string b{"hi"};
    std::vector<char> string_(a.begin(), a.end());
    std::vector<char> substring_(b.begin(), b.end());
    REQUIRE_NOTHROW(Naive::Search(string_, substring_));
    REQUIRE(Naive::Search(string_, substring_) != -1);
}

TEST_CASE("Naive search test - no macth")
{
    std::string a{"hellohiahoyhaloprivethi"};
    std::string b{"heyo"};
    std::vector<char> string_(a.begin(), a.end());
    std::vector<char> substring_(b.begin(), b.end());
    REQUIRE(Naive::Search(string_, substring_) == -1);
}

TEST_CASE("Boyer Moore with only bad houristic - no except")
{
    std::string a{"hellohiahoyhaloprivethi"};
    std::string b{"hi"};
    std::vector<char> string_(a.begin(), a.end());
    std::vector<char> substring_(b.begin(), b.end());
    REQUIRE_NOTHROW(Boyer_Moore::Search_bad(string_, substring_));
}

TEST_CASE("BM search test with only bad houristic")
{
    std::string a{"hellohiahoyhaloprivethi"};
    std::string b{"hi"};
    std::vector<char> string_(a.begin(), a.end());
    std::vector<char> substring_(b.begin(), b.end());
    REQUIRE(Boyer_Moore::Search_bad(string_, substring_) == 5);
}
/*
TEST_CASE("Boyer Moore no except")
{
    std::string a{"hellohiahoyhaloprivethi"};
    std::string b{"hi"};
    std::vector<char> string_(a.begin(), a.end());
    std::vector<char> substring_(b.begin(), b.end());
    REQUIRE_NOTHROW(Boyer_Moore::Search(string_, substring_));
}


TEST_CASE("BM search test")
{
    std::string a{"hellohiahoyhaloprivethi"};
    std::string b{"hi"};
    std::vector<char> string_(a.begin(), a.end());
    std::vector<char> substring_(b.begin(), b.end());
    REQUIRE(Boyer_Moore::Search(string_, substring_) == 5);
}

TEST_CASE("KMP no except")
{
    std::string a{"hellohiahoyhaloprivethi"};
    std::string b{"hi"};
    std::vector<char> string_(a.begin(), a.end());
    std::vector<char> substring_(b.begin(), b.end());
    REQUIRE_NOTHROW(Knut_Morris_Pratt::Search(string_, substring_));
}

TEST_CASE("KMP search test")
{
    std::string a{"hellohiahoyhaloprivethi"};
    std::string b{"hi"};
    std::vector<char> string_(a.begin(), a.end());
    std::vector<char> substring_(b.begin(), b.end());
    REQUIRE(Knut_Morris_Pratt::Search(string_, substring_) == 5);
}

TEST_CASE("Rabin Karp no except")
{
    std::string a{"hellohiahoyhaloprivethi"};
    std::string b{"hi"};
    std::vector<char> string_(a.begin(), a.end());
    std::vector<char> substring_(b.begin(), b.end());
    REQUIRE_NOTHROW(Rabin_Karp::Search(string_, substring_));
}

TEST_CASE("Rabin Karp search test")
{
    std::string a{"hellohiahoyhaloprivethi"};
    std::string b{"hi"};
    std::vector<char> string_(a.begin(), a.end());
    std::vector<char> substring_(b.begin(), b.end());
    REQUIRE(Rabin_Karp::Search(string_, substring_) == 5);
}
*/
