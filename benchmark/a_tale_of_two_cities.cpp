#include <iostream>
#include <fstream>
#include <chrono>
#include <string>
#include <streambuf>

#include "../algorithms/naive_string_search.hxx"
#include "../algorithms/boyer_moore_search.hxx"
#include "../algorithms/knuth_morris_pratt_search.hxx"
#include "../algorithms/rabin_karp_search.hxx"

int main(){
    {
        std::vector<char> needle;
        std::ifstream file("needle_OUR_YOUNG_FOLKS.txt");
        if (!file.eof() && !file.fail())
        {
            file.seekg(0, std::ios_base::end);
            std::streampos fileSize = file.tellg();
            needle.resize(fileSize);

            file.seekg(0, std::ios_base::beg);
            file.read(&needle[0], fileSize);
        }

        std::vector<char> heystack;
        std::ifstream file_("OUR_YOUNG_FOLKS.txt");
        if (!file_.eof() && !file_.fail())
        {
            file_.seekg(0, std::ios_base::end);
            std::streampos fileSize = file_.tellg();
            heystack.resize(fileSize);

            file_.seekg(0, std::ios_base::beg);
            file_.read(&heystack[0], fileSize);
        }
        long a  = 0;
        auto start = std::chrono::high_resolution_clock::now();
        for (auto i{0}; i< 100; i++) a = Boyer_Moore::Search_bad(heystack, needle);
        auto finish = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> elapsed = finish - start;

        std::cout << "Boyer_Moore : " << elapsed.count() << std::endl;
    }
    {
        std::vector<char> needle;
        std::ifstream file("needle_cleopatra.txt");
        if (!file.eof() && !file.fail())
        {
            file.seekg(0, std::ios_base::end);
            std::streampos fileSize = file.tellg();
            needle.resize(fileSize);

            file.seekg(0, std::ios_base::beg);
            file.read(&needle[0], fileSize);
        }

        std::vector<char> heystack;
        std::ifstream file_("cleopatra.txt");
        if (!file_.eof() && !file_.fail())
        {
            file_.seekg(0, std::ios_base::end);
            std::streampos fileSize = file_.tellg();
            heystack.resize(fileSize);

            file_.seekg(0, std::ios_base::beg);
            file_.read(&heystack[0], fileSize);
        }
        long a  = 0;
        auto start = std::chrono::high_resolution_clock::now();
        for (auto i{0}; i< 100; i++) a = Boyer_Moore::Search_bad(heystack, needle);
        auto finish = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> elapsed = finish - start;

        std::cout << "Boyer_Moore : " << elapsed.count() << std::endl;
    }
    {
        std::vector<char> needle;
        std::ifstream file("needle_a_tale_of_two_cites.txt");
        if (!file.eof() && !file.fail())
        {
            file.seekg(0, std::ios_base::end);
            std::streampos fileSize = file.tellg();
            needle.resize(fileSize);

            file.seekg(0, std::ios_base::beg);
            file.read(&needle[0], fileSize);
        }

        std::vector<char> heystack;
        std::ifstream file_("a_tale_of_two_cites.txt");
        if (!file_.eof() && !file_.fail())
        {
            file_.seekg(0, std::ios_base::end);
            std::streampos fileSize = file_.tellg();
            heystack.resize(fileSize);

            file_.seekg(0, std::ios_base::beg);
            file_.read(&heystack[0], fileSize);
        }
        long a  = 0;
        auto start = std::chrono::high_resolution_clock::now();
        for (auto i{0}; i< 100; i++) a = Boyer_Moore::Search_bad(heystack, needle);
        auto finish = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> elapsed = finish - start;

        std::cout << "Boyer_Moore : " << elapsed.count() << std::endl;
    }
}
