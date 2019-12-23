#define TEST_PATH "./tests/"
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include <fstream>
#include <streambuf>

#include "../algorithms/naive_string_search.hxx"
#include "../algorithms/boyer_moore_search.hxx"
#include "../algorithms/knuth_morris_pratt_search.hxx"
#include "../algorithms/rabin_karp_search.hxx"

TEST_CASE("dummy test")
{
    REQUIRE(1 != 0);
}

TEST_CASE("Naive Nothrow via file")
{
    std::string name {TEST_PATH};
    name += "nothrow.dat";
    std::fstream in_string(name, std::ios_base::in);
    std::string a((std::istreambuf_iterator<char>(in_string)),
        (std::istreambuf_iterator<char>()));
    in_string.close();
    a = a.substr(0, a.size() - 1);
    name = TEST_PATH;
    name += "nothrow.needle";
    std::fstream in_substring(name, std::ios_base::in);
    std::string b((std::istreambuf_iterator<char>(in_substring)),
        (std::istreambuf_iterator<char>()));
    in_substring.close();
    b = b.substr(0, b.size() - 1);
    std::vector<char> string_(a.begin(), a.end());
    std::vector<char> substring_(b.begin(), b.end());
    REQUIRE_NOTHROW(Naive::Search(string_, substring_));
}
TEST_CASE("BM_bad Nothrow via file")
{
    std::string name {TEST_PATH};
    name += "nothrow.dat";
    std::fstream in_string(name, std::ios_base::in);
    std::string a((std::istreambuf_iterator<char>(in_string)),
        (std::istreambuf_iterator<char>()));
    in_string.close();
    a = a.substr(0, a.size() - 1);
    name = TEST_PATH;
    name += "nothrow.needle";
    std::fstream in_substring(name, std::ios_base::in);
    std::string b((std::istreambuf_iterator<char>(in_substring)),
        (std::istreambuf_iterator<char>()));
    in_substring.close();
    b = b.substr(0, b.size() - 1);
    std::vector<char> string_(a.begin(), a.end());
    std::vector<char> substring_(b.begin(), b.end());
    REQUIRE_NOTHROW(Boyer_Moore::Search(string_, substring_));
}
TEST_CASE("Knut_Morris_Pratt Nothrow via file")
{
    std::string name {TEST_PATH};
    name += "nothrow.dat";
    std::fstream in_string(name, std::ios_base::in);
    std::string a((std::istreambuf_iterator<char>(in_string)),
        (std::istreambuf_iterator<char>()));
    in_string.close();
    a = a.substr(0, a.size() - 1);
    name = TEST_PATH;
    name += "nothrow.needle";
    std::fstream in_substring(name, std::ios_base::in);
    std::string b((std::istreambuf_iterator<char>(in_substring)),
        (std::istreambuf_iterator<char>()));
    in_substring.close();
    b = b.substr(0, b.size() - 1);
    std::vector<char> string_(a.begin(), a.end());
    std::vector<char> substring_(b.begin(), b.end());
    REQUIRE_NOTHROW(Knut_Morris_Pratt::Search(string_, substring_));
}

TEST_CASE("Rabin_Karp Nothrow via file")
{
    std::string name {TEST_PATH};
    name += "nothrow.dat";
    std::fstream in_string(name, std::ios_base::in);
    std::string a((std::istreambuf_iterator<char>(in_string)),
        (std::istreambuf_iterator<char>()));
    in_string.close();
    a = a.substr(0, a.size() - 1);
    name = TEST_PATH;
    name += "nothrow.needle";
    std::fstream in_substring(name, std::ios_base::in);
    std::string b((std::istreambuf_iterator<char>(in_substring)),
        (std::istreambuf_iterator<char>()));
    in_substring.close();
    b = b.substr(0, b.size() - 1);
    std::vector<char> string_(a.begin(), a.end());
    std::vector<char> substring_(b.begin(), b.end());
    REQUIRE_NOTHROW(Rabin_Karp::Search(string_, substring_));
}
TEST_CASE("Naive search test")
{
    std::string a{"hellohiahoyhaloprivethi"};
    std::string b{"hi"};
    std::vector<char> string_(a.begin(), a.end());
    std::vector<char> substring_(b.begin(), b.end());
    REQUIRE(Naive::Search(string_, substring_) == 5);
}
TEST_CASE("Knut_Morris_Pratt search test")
{
    std::string a{"hellohiahoyhaloprivethi"};
    std::string b{"hi"};
    std::vector<char> string_(a.begin(), a.end());
    std::vector<char> substring_(b.begin(), b.end());
    REQUIRE(Knut_Morris_Pratt::Search(string_, substring_) == 5);
}
TEST_CASE("BM_bad search test")
{
    std::string a{"hellohiahoyhaloprivethi"};
    std::string b{"hi"};
    std::vector<char> string_(a.begin(), a.end());
    std::vector<char> substring_(b.begin(), b.end());
    REQUIRE(Boyer_Moore::Search(string_, substring_) == 5);
}
TEST_CASE("Rabin_Karp search test")
{
    std::string a{"hellohiahoyhaloprivethi"};
    std::string b{"hi"};
    std::vector<char> string_(a.begin(), a.end());
    std::vector<char> substring_(b.begin(), b.end());
    REQUIRE(Rabin_Karp::Search(string_, substring_) == 5);
}
TEST_CASE("Naive search test via file")
{
    std::string name {TEST_PATH};
    name += "trivial_dummy.dat";
    std::ifstream in_string(name, std::ios_base::in);
    std::string a;
    a.assign( (std::istreambuf_iterator<char>(in_string) ),
                (std::istreambuf_iterator<char>()    ) );
    name = TEST_PATH;
    name += "trivial_dummy.needle";
    std::fstream in_substring(name, std::ios_base::in);
    std::string b((std::istreambuf_iterator<char>(in_substring)),
        (std::istreambuf_iterator<char>()));
    in_substring.close();
    b = b.substr(0, b.size() - 1);
    std::vector<char> string_(a.begin(), a.end());
    std::vector<char> substring_(b.begin(), b.end());
    REQUIRE(Naive::Search(string_, substring_) == 5);
}
TEST_CASE("BM_bad search test via file")
{
    std::string name {TEST_PATH};
    name += "trivial_dummy.dat";
    std::ifstream in_string(name, std::ios_base::in);
    std::string a;
    a.assign( (std::istreambuf_iterator<char>(in_string) ),
                (std::istreambuf_iterator<char>()    ) );
    name = TEST_PATH;
    name += "trivial_dummy.needle";
    std::fstream in_substring(name, std::ios_base::in);
    std::string b((std::istreambuf_iterator<char>(in_substring)),
        (std::istreambuf_iterator<char>()));
    in_substring.close();
    b = b.substr(0, b.size() - 1);
    std::vector<char> string_(a.begin(), a.end());
    std::vector<char> substring_(b.begin(), b.end());
    REQUIRE(Boyer_Moore::Search(string_, substring_) == 5);
}
TEST_CASE("Knut_Morris_Pratt search test via file")
{
    std::string name {TEST_PATH};
    name += "trivial_dummy.dat";
    std::ifstream in_string(name, std::ios_base::in);
    std::string a;
    a.assign( (std::istreambuf_iterator<char>(in_string) ),
                (std::istreambuf_iterator<char>()    ) );
    name = TEST_PATH;
    name += "trivial_dummy.needle";
    std::fstream in_substring(name, std::ios_base::in);
    std::string b((std::istreambuf_iterator<char>(in_substring)),
        (std::istreambuf_iterator<char>()));
    in_substring.close();
    b = b.substr(0, b.size() - 1);
    std::vector<char> string_(a.begin(), a.end());
    std::vector<char> substring_(b.begin(), b.end());
    REQUIRE(Knut_Morris_Pratt::Search(string_, substring_) == 5);
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
TEST_CASE("Knut_Morris_Pratt search test - match at the end of line")
{
    std::string a{"helloahoyhaloprivethi"};
    std::string b{"hi"};
    std::vector<char> string_(a.begin(), a.end());
    std::vector<char> substring_(b.begin(), b.end());
    REQUIRE_NOTHROW(Knut_Morris_Pratt::Search(string_, substring_));
    REQUIRE(Knut_Morris_Pratt::Search(string_, substring_) != -1);
}

TEST_CASE("Naive search test - match at the end of line via file")
{
    std::string name {TEST_PATH};
    name += "trivial_dummy.dat";
    std::ifstream in_string(name, std::ios_base::in);
    std::string a;
    a.assign( (std::istreambuf_iterator<char>(in_string) ),
                (std::istreambuf_iterator<char>()    ) );
    name = TEST_PATH;
    name += "trivial_dummy.needle";
    std::fstream in_substring(name, std::ios_base::in);
    std::string b((std::istreambuf_iterator<char>(in_substring)),
        (std::istreambuf_iterator<char>()));
    in_substring.close();
    b = b.substr(0, b.size() - 1);
    std::vector<char> string_(a.begin(), a.end());
    std::vector<char> substring_(b.begin(), b.end());
    REQUIRE_NOTHROW(Naive::Search(string_, substring_));
    REQUIRE(Naive::Search(string_, substring_) != -1);
}
TEST_CASE("Knut_Morris_Pratt search test - match at the end of line via file")
{
    std::string name {TEST_PATH};
    name += "trivial_dummy.dat";
    std::ifstream in_string(name, std::ios_base::in);
    std::string a;
    a.assign( (std::istreambuf_iterator<char>(in_string) ),
                (std::istreambuf_iterator<char>()    ) );
    name = TEST_PATH;
    name += "trivial_dummy.needle";
    std::fstream in_substring(name, std::ios_base::in);
    std::string b((std::istreambuf_iterator<char>(in_substring)),
        (std::istreambuf_iterator<char>()));
    in_substring.close();
    b = b.substr(0, b.size() - 1);
    std::vector<char> string_(a.begin(), a.end());
    std::vector<char> substring_(b.begin(), b.end());
    REQUIRE_NOTHROW(Knut_Morris_Pratt::Search(string_, substring_));
    REQUIRE(Knut_Morris_Pratt::Search(string_, substring_) != -1);
}
TEST_CASE("Rabin_Karp search test - match at the end of line via file")
{
    std::string name {TEST_PATH};
    name += "trivial_dummy.dat";
    std::ifstream in_string(name, std::ios_base::in);
    std::string a;
    a.assign( (std::istreambuf_iterator<char>(in_string) ),
                (std::istreambuf_iterator<char>()    ) );
    name = TEST_PATH;
    name += "trivial_dummy.needle";
    std::fstream in_substring(name, std::ios_base::in);
    std::string b((std::istreambuf_iterator<char>(in_substring)),
        (std::istreambuf_iterator<char>()));
    in_substring.close();
    b = b.substr(0, b.size() - 1);
    std::vector<char> string_(a.begin(), a.end());
    std::vector<char> substring_(b.begin(), b.end());
    REQUIRE_NOTHROW(Rabin_Karp::Search(string_, substring_));
    REQUIRE(Rabin_Karp::Search(string_, substring_) != -1);
}
// подстроку в строке сложно найти, но не надо делать для меня исключений
TEST_CASE("BM_bad search test - match at the end of line via file")
{
    std::string name {TEST_PATH};
    name += "trivial_dummy.dat";
    std::ifstream in_string(name, std::ios_base::in);
    std::string a;
    a.assign( (std::istreambuf_iterator<char>(in_string) ),
                (std::istreambuf_iterator<char>()    ) );
    name = TEST_PATH;
    name += "trivial_dummy.needle";
    std::fstream in_substring(name, std::ios_base::in);
    std::string b((std::istreambuf_iterator<char>(in_substring)),
        (std::istreambuf_iterator<char>()));
    in_substring.close();
    b = b.substr(0, b.size() - 1);
    std::vector<char> string_(a.begin(), a.end());
    std::vector<char> substring_(b.begin(), b.end());
    REQUIRE_NOTHROW(Boyer_Moore::Search(string_, substring_));
    REQUIRE(Boyer_Moore::Search(string_, substring_) != -1);
}

TEST_CASE("human_en_000 Naive")
{
    std::string name {TEST_PATH};
    name += "human_en_000.dat";
    std::ifstream in_string(name, std::ios_base::in);
    std::string a;
    a.assign( (std::istreambuf_iterator<char>(in_string) ),
                (std::istreambuf_iterator<char>()    ) );
    name = TEST_PATH;
    name += "human_en_000.needle";
    std::fstream in_substring(name, std::ios_base::in);
    std::string b((std::istreambuf_iterator<char>(in_substring)),
        (std::istreambuf_iterator<char>()));
    in_substring.close();
    b = b.substr(0, b.size() - 1);
    name = TEST_PATH;
    name += "human_en_000.ans";
    std::fstream in_ans(name, std::ios_base::in);
    std::string c((std::istreambuf_iterator<char>(in_ans)),
        (std::istreambuf_iterator<char>()));
    in_ans.close();
    c = c.substr(0, c.size() - 1);
    std::vector<char> string_(a.begin(), a.end());
    std::vector<char> substring_(b.begin(), b.end());
    int ans = stoi(c);
    REQUIRE(Naive::Search(string_, substring_) == ans);
}
TEST_CASE("human_en_000 Knut_Morris_Pratt")
{
    std::string name {TEST_PATH};
    name += "human_en_000.dat";
    std::ifstream in_string(name, std::ios_base::in);
    std::string a;
    a.assign( (std::istreambuf_iterator<char>(in_string) ),
                (std::istreambuf_iterator<char>()    ) );
    name = TEST_PATH;
    name += "human_en_000.needle";
    std::fstream in_substring(name, std::ios_base::in);
    std::string b((std::istreambuf_iterator<char>(in_substring)),
        (std::istreambuf_iterator<char>()));
    in_substring.close();
    b = b.substr(0, b.size() - 1);
    name = TEST_PATH;
    name += "human_en_000.ans";
    std::fstream in_ans(name, std::ios_base::in);
    std::string c((std::istreambuf_iterator<char>(in_ans)),
        (std::istreambuf_iterator<char>()));
    in_ans.close();
    c = c.substr(0, c.size() - 1);
    std::vector<char> string_(a.begin(), a.end());
    std::vector<char> substring_(b.begin(), b.end());
    int ans = stoi(c);
    REQUIRE(Knut_Morris_Pratt::Search(string_, substring_) == ans);
}
TEST_CASE("human_en_001 Naive")
{
    std::string name {TEST_PATH};
    name += "human_en_001.dat";
    std::ifstream in_string(name, std::ios_base::in);
    std::string a;
    a.assign( (std::istreambuf_iterator<char>(in_string) ),
                (std::istreambuf_iterator<char>()    ) );
    name = TEST_PATH;
    name += "human_en_001.needle";
    std::fstream in_substring(name, std::ios_base::in);
    std::string b((std::istreambuf_iterator<char>(in_substring)),
        (std::istreambuf_iterator<char>()));
    in_substring.close();
    b = b.substr(0, b.size() - 1);
    name = TEST_PATH;
    name += "human_en_001.ans";
    std::fstream in_ans(name, std::ios_base::in);
    std::string c((std::istreambuf_iterator<char>(in_ans)),
        (std::istreambuf_iterator<char>()));
    in_ans.close();
    c = c.substr(0, c.size() - 1);
    std::vector<char> string_(a.begin(), a.end());
    std::vector<char> substring_(b.begin(), b.end());
    int ans = stoi(c);
    REQUIRE(Naive::Search(string_, substring_) == ans);
}
TEST_CASE("human_en_001 Knut_Morris_Pratt")
{
    std::string name {TEST_PATH};
    name += "human_en_001.dat";
    std::ifstream in_string(name, std::ios_base::in);
    std::string a;
    a.assign( (std::istreambuf_iterator<char>(in_string) ),
                (std::istreambuf_iterator<char>()    ) );
    name = TEST_PATH;
    name += "human_en_001.needle";
    std::fstream in_substring(name, std::ios_base::in);
    std::string b((std::istreambuf_iterator<char>(in_substring)),
        (std::istreambuf_iterator<char>()));
    in_substring.close();
    b = b.substr(0, b.size() - 1);
    name = TEST_PATH;
    name += "human_en_001.ans";
    std::fstream in_ans(name, std::ios_base::in);
    std::string c((std::istreambuf_iterator<char>(in_ans)),
        (std::istreambuf_iterator<char>()));
    in_ans.close();
    c = c.substr(0, c.size() - 1);
    std::vector<char> string_(a.begin(), a.end());
    std::vector<char> substring_(b.begin(), b.end());
    int ans = stoi(c);
    REQUIRE(Knut_Morris_Pratt::Search(string_, substring_) == ans);
}
TEST_CASE("human_en_001 BM_bad")
{
    std::string name {TEST_PATH};
    name += "human_en_001.dat";
    std::ifstream in_string(name, std::ios_base::in);
    std::string a;
    a.assign( (std::istreambuf_iterator<char>(in_string) ),
                (std::istreambuf_iterator<char>()    ) );
    name = TEST_PATH;
    name += "human_en_001.needle";
    std::fstream in_substring(name, std::ios_base::in);
    std::string b((std::istreambuf_iterator<char>(in_substring)),
        (std::istreambuf_iterator<char>()));
    in_substring.close();
    b = b.substr(0, b.size() - 1);
    name = TEST_PATH;
    name += "human_en_001.ans";
    std::fstream in_ans(name, std::ios_base::in);
    std::string c((std::istreambuf_iterator<char>(in_ans)),
        (std::istreambuf_iterator<char>()));
    in_ans.close();
    c = c.substr(0, c.size() - 1);
    std::vector<char> string_(a.begin(), a.end());
    std::vector<char> substring_(b.begin(), b.end());
    int ans = stoi(c);
    REQUIRE(Boyer_Moore::Search(string_, substring_) == ans);
}
TEST_CASE("human_it_001 Naive")
{
    std::string name {TEST_PATH};
    name += "human_it_001.dat";
    std::ifstream in_string(name, std::ios_base::in);
    std::string a;
    a.assign( (std::istreambuf_iterator<char>(in_string) ),
                (std::istreambuf_iterator<char>()    ) );
    name = TEST_PATH;
    name += "human_it_001.needle";
    std::fstream in_substring(name, std::ios_base::in);
    std::string b((std::istreambuf_iterator<char>(in_substring)),
        (std::istreambuf_iterator<char>()));
    in_substring.close();
    b = b.substr(0, b.size() - 1);
    name = TEST_PATH;
    name += "human_it_001.ans";
    std::fstream in_ans(name, std::ios_base::in);
    std::string c((std::istreambuf_iterator<char>(in_ans)),
        (std::istreambuf_iterator<char>()));
    in_ans.close();
    c = c.substr(0, c.size() - 1);
    std::vector<char> string_(a.begin(), a.end());
    std::vector<char> substring_(b.begin(), b.end());
    int ans = stoi(c);
    REQUIRE(Naive::Search(string_, substring_) == ans);
}
TEST_CASE("human_it_001 Knut_Morris_Pratt")
{
    std::string name {TEST_PATH};
    name += "human_it_001.dat";
    std::ifstream in_string(name, std::ios_base::in);
    std::string a;
    a.assign( (std::istreambuf_iterator<char>(in_string) ),
                (std::istreambuf_iterator<char>()    ) );
    name = TEST_PATH;
    name += "human_it_001.needle";
    std::fstream in_substring(name, std::ios_base::in);
    std::string b((std::istreambuf_iterator<char>(in_substring)),
        (std::istreambuf_iterator<char>()));
    in_substring.close();
    b = b.substr(0, b.size() - 1);
    name = TEST_PATH;
    name += "human_it_001.ans";
    std::fstream in_ans(name, std::ios_base::in);
    std::string c((std::istreambuf_iterator<char>(in_ans)),
        (std::istreambuf_iterator<char>()));
    in_ans.close();
    c = c.substr(0, c.size() - 1);
    std::vector<char> string_(a.begin(), a.end());
    std::vector<char> substring_(b.begin(), b.end());
    int ans = stoi(c);
    REQUIRE(Knut_Morris_Pratt::Search(string_, substring_) == ans);
}
TEST_CASE("human_du_001 Naive")
{
    std::string name {TEST_PATH};
    name += "human_du_001.dat";
    std::ifstream in_string(name, std::ios_base::in);
    std::string a;
    a.assign( (std::istreambuf_iterator<char>(in_string) ),
                (std::istreambuf_iterator<char>()    ) );
    name = TEST_PATH;
    name += "human_du_001.needle";
    std::fstream in_substring(name, std::ios_base::in);
    std::string b((std::istreambuf_iterator<char>(in_substring)),
        (std::istreambuf_iterator<char>()));
    in_substring.close();
    b = b.substr(0, b.size() - 1);
    name = TEST_PATH;
    name += "human_du_001.ans";
    std::fstream in_ans(name, std::ios_base::in);
    std::string c((std::istreambuf_iterator<char>(in_ans)),
        (std::istreambuf_iterator<char>()));
    in_ans.close();
    c = c.substr(0, c.size() - 1);
    std::vector<char> string_(a.begin(), a.end());
    std::vector<char> substring_(b.begin(), b.end());
    int ans = stoi(c);
    REQUIRE(Naive::Search(string_, substring_) == ans);
}
TEST_CASE("human_du_001 Knut_Morris_Pratt")
{
    std::string name {TEST_PATH};
    name += "human_du_001.dat";
    std::ifstream in_string(name, std::ios_base::in);
    std::string a;
    a.assign( (std::istreambuf_iterator<char>(in_string) ),
                (std::istreambuf_iterator<char>()    ) );
    name = TEST_PATH;
    name += "human_du_001.needle";
    std::fstream in_substring(name, std::ios_base::in);
    std::string b((std::istreambuf_iterator<char>(in_substring)),
        (std::istreambuf_iterator<char>()));
    in_substring.close();
    b = b.substr(0, b.size() - 1);
    name = TEST_PATH;
    name += "human_du_001.ans";
    std::fstream in_ans(name, std::ios_base::in);
    std::string c((std::istreambuf_iterator<char>(in_ans)),
        (std::istreambuf_iterator<char>()));
    in_ans.close();
    c = c.substr(0, c.size() - 1);
    std::vector<char> string_(a.begin(), a.end());
    std::vector<char> substring_(b.begin(), b.end());
    int ans = stoi(c);
    REQUIRE(Knut_Morris_Pratt::Search(string_, substring_) == ans);
}

TEST_CASE("reflective Naive")
{
    std::string name {TEST_PATH};
    name += "trivial_reflexive.dat";
    std::ifstream in_string(name, std::ios_base::in);
    std::string a;
    a.assign( (std::istreambuf_iterator<char>(in_string) ),
                (std::istreambuf_iterator<char>()    ) );
    name = TEST_PATH;
    name += "trivial_reflexive.needle";
    std::fstream in_substring(name, std::ios_base::in);
    std::string b((std::istreambuf_iterator<char>(in_substring)),
        (std::istreambuf_iterator<char>()));
    in_substring.close();
    b = b.substr(0, b.size() - 1);
    name = TEST_PATH;
    name += "trivial_reflexive.ans";
    std::fstream in_ans(name, std::ios_base::in);
    std::string c((std::istreambuf_iterator<char>(in_ans)),
        (std::istreambuf_iterator<char>()));
    in_ans.close();
    c = c.substr(0, c.size() - 1);
    std::vector<char> string_(a.begin(), a.end());
    std::vector<char> substring_(b.begin(), b.end());
    int ans = stoi(c);
    REQUIRE(Naive::Search(string_, substring_) == ans);
}
TEST_CASE("reflective Knut_Morris_Pratt")
{
    std::string name {TEST_PATH};
    name += "trivial_reflexive.dat";
    std::ifstream in_string(name, std::ios_base::in);
    std::string a;
    a.assign( (std::istreambuf_iterator<char>(in_string) ),
                (std::istreambuf_iterator<char>()    ) );
    name = TEST_PATH;
    name += "trivial_reflexive.needle";
    std::fstream in_substring(name, std::ios_base::in);
    std::string b((std::istreambuf_iterator<char>(in_substring)),
        (std::istreambuf_iterator<char>()));
    in_substring.close();
    b = b.substr(0, b.size() - 1);
    name = TEST_PATH;
    name += "trivial_reflexive.ans";
    std::fstream in_ans(name, std::ios_base::in);
    std::string c((std::istreambuf_iterator<char>(in_ans)),
        (std::istreambuf_iterator<char>()));
    in_ans.close();
    c = c.substr(0, c.size() - 1);
    std::vector<char> string_(a.begin(), a.end());
    std::vector<char> substring_(b.begin(), b.end());
    int ans = stoi(c);
    REQUIRE(Knut_Morris_Pratt::Search(string_, substring_) == ans);
}
TEST_CASE("Naive search test - match at the end of line via file ")
{
    std::string name {TEST_PATH};
    name += "trivial_eol.dat";
    std::ifstream in_string(name, std::ios_base::in);
    std::string a;
    a.assign( (std::istreambuf_iterator<char>(in_string) ),
                (std::istreambuf_iterator<char>()    ) );
    name = TEST_PATH;
    name += "trivial_eol.needle";
    std::fstream in_substring(name, std::ios_base::in);
    std::string b((std::istreambuf_iterator<char>(in_substring)),
        (std::istreambuf_iterator<char>()));
    in_substring.close();
    b = b.substr(0, b.size() - 1);
    name = TEST_PATH;
    name += "trivial_eol.ans";
    std::fstream in_ans(name, std::ios_base::in);
    std::string c((std::istreambuf_iterator<char>(in_ans)),
        (std::istreambuf_iterator<char>()));
    in_ans.close();
    c = c.substr(0, c.size() - 1);
    std::vector<char> string_(a.begin(), a.end());
    std::vector<char> substring_(b.begin(), b.end());
    int ans = stoi(c);
    REQUIRE(Naive::Search(string_, substring_) == ans);
}
TEST_CASE("Knut_Morris_Pratt search test - match at the end of line via file ")
{
    std::string name {TEST_PATH};
    name += "trivial_eol.dat";
    std::ifstream in_string(name, std::ios_base::in);
    std::string a;
    a.assign( (std::istreambuf_iterator<char>(in_string) ),
                (std::istreambuf_iterator<char>()    ) );
    name = TEST_PATH;
    name += "trivial_eol.needle";
    std::fstream in_substring(name, std::ios_base::in);
    std::string b((std::istreambuf_iterator<char>(in_substring)),
        (std::istreambuf_iterator<char>()));
    in_substring.close();
    b = b.substr(0, b.size() - 1);
    name = TEST_PATH;
    name += "trivial_eol.ans";
    std::fstream in_ans(name, std::ios_base::in);
    std::string c((std::istreambuf_iterator<char>(in_ans)),
        (std::istreambuf_iterator<char>()));
    in_ans.close();
    c = c.substr(0, c.size() - 1);
    std::vector<char> string_(a.begin(), a.end());
    std::vector<char> substring_(b.begin(), b.end());
    int ans = stoi(c);
    REQUIRE(Knut_Morris_Pratt::Search(string_, substring_) == ans);
}
TEST_CASE("Rabin_Karp search test - match at the end of line via file ")
{
    std::string name {TEST_PATH};
    name += "trivial_eol.dat";
    std::ifstream in_string(name, std::ios_base::in);
    std::string a;
    a.assign( (std::istreambuf_iterator<char>(in_string) ),
                (std::istreambuf_iterator<char>()    ) );
    name = TEST_PATH;
    name += "trivial_eol.needle";
    std::fstream in_substring(name, std::ios_base::in);
    std::string b((std::istreambuf_iterator<char>(in_substring)),
        (std::istreambuf_iterator<char>()));
    in_substring.close();
    b = b.substr(0, b.size() - 1);
    name = TEST_PATH;
    name += "trivial_eol.ans";
    std::fstream in_ans(name, std::ios_base::in);
    std::string c((std::istreambuf_iterator<char>(in_ans)),
        (std::istreambuf_iterator<char>()));
    in_ans.close();
    c = c.substr(0, c.size() - 1);
    std::vector<char> string_(a.begin(), a.end());
    std::vector<char> substring_(b.begin(), b.end());
    int ans = stoi(c);
    REQUIRE(Rabin_Karp::Search(string_, substring_) == ans);
}

//
// h+<слово> = <слово> так как h - пустое слово
//      => первое вхождение пустой строки в не пустой строке == 0
//
TEST_CASE("Naive search test - match empty needle")
{
    std::string name {TEST_PATH};
    name += "trivial_empty_needle.dat";
    std::ifstream in_string(name, std::ios_base::in);
    std::string a;
    a.assign( (std::istreambuf_iterator<char>(in_string) ),
                (std::istreambuf_iterator<char>()    ) );
    std::string b = "";
    name = TEST_PATH;
    name += "trivial_empty_needle.ans";
    std::fstream in_ans(name, std::ios_base::in);
    std::string c((std::istreambuf_iterator<char>(in_ans)),
        (std::istreambuf_iterator<char>()));
    in_ans.close();
    c = c.substr(0, c.size() - 1);
    std::vector<char> string_(a.begin(), a.end());
    std::vector<char> substring_(b.begin(), b.end());
    int ans = 0;
    REQUIRE(Naive::Search(string_, substring_) == ans);
}

TEST_CASE("Rabin_Karp search test - match empty needle")
{
    std::string name {TEST_PATH};
    name += "trivial_empty_needle.dat";
    std::ifstream in_string(name, std::ios_base::in);
    std::string a;
    a.assign( (std::istreambuf_iterator<char>(in_string) ),
                (std::istreambuf_iterator<char>()    ) );
    std::string b = "";
    name = TEST_PATH;
    name += "trivial_empty_needle.ans";
    std::fstream in_ans(name, std::ios_base::in);
    std::string c((std::istreambuf_iterator<char>(in_ans)),
        (std::istreambuf_iterator<char>()));
    in_ans.close();
    c = c.substr(0, c.size() - 1);
    std::vector<char> string_(a.begin(), a.end());
    std::vector<char> substring_(b.begin(), b.end());
    int ans = 0;
    REQUIRE(Rabin_Karp::Search(string_, substring_) == ans);
}
TEST_CASE("Knut_Morris_Pratt search test - match empty needle")
{
    std::string name {TEST_PATH};
    name += "trivial_empty_needle.dat";
    std::ifstream in_string(name, std::ios_base::in);
    std::string a;
    a.assign( (std::istreambuf_iterator<char>(in_string) ),
                (std::istreambuf_iterator<char>()    ) );
    std::string b = "";
    name = TEST_PATH;
    name += "trivial_empty_needle.ans";
    std::fstream in_ans(name, std::ios_base::in);
    std::string c((std::istreambuf_iterator<char>(in_ans)),
        (std::istreambuf_iterator<char>()));
    in_ans.close();
    c = c.substr(0, c.size() - 1);
    std::vector<char> string_(a.begin(), a.end());
    std::vector<char> substring_(b.begin(), b.end());
    int ans = 0;
    REQUIRE(Knut_Morris_Pratt::Search(string_, substring_) == ans);
}

//
// В пустой строке найти подстроку невозможно
//
TEST_CASE("Naive search test - match empty heystack")
{
    std::string name {TEST_PATH};
    name += "trivial_empty_heystack.dat";
    std::ifstream in_string(name, std::ios_base::in);
    std::string b;
    b.assign( (std::istreambuf_iterator<char>(in_string) ),
                (std::istreambuf_iterator<char>()    ) );
    std::string a = "";
    std::vector<char> string_(a.begin(), a.end());
    std::vector<char> substring_(b.begin(), b.end());
    int ans = -1;
    REQUIRE(Naive::Search(string_, substring_) == ans);
}
TEST_CASE("Knut_Morris_Pratt search test - match empty heystack")
{
    std::string name {TEST_PATH};
    name += "trivial_empty_heystack.dat";
    std::ifstream in_string(name, std::ios_base::in);
    std::string b;
    b.assign( (std::istreambuf_iterator<char>(in_string) ),
                (std::istreambuf_iterator<char>()    ) );
    std::string a = "";
    std::vector<char> string_(a.begin(), a.end());
    std::vector<char> substring_(b.begin(), b.end());
    int ans = -1;
    REQUIRE(Knut_Morris_Pratt::Search(string_, substring_) == ans);
}
TEST_CASE("Rabin_Karp search test - match empty heystack")
{
    std::string name {TEST_PATH};
    name += "trivial_empty_heystack.dat";
    std::ifstream in_string(name, std::ios_base::in);
    std::string b;
    b.assign( (std::istreambuf_iterator<char>(in_string) ),
                (std::istreambuf_iterator<char>()    ) );
    std::string a = "";
    std::vector<char> string_(a.begin(), a.end());
    std::vector<char> substring_(b.begin(), b.end());
    int ans = -1;
    REQUIRE(Rabin_Karp::Search(string_, substring_) == ans);
}
