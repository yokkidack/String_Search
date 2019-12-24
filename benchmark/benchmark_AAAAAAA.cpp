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
        std::ifstream file("needle_AAAA10e6.txt");
        if (!file.eof() && !file.fail())
        {
            file.seekg(0, std::ios_base::end);
            std::streampos fileSize = file.tellg();
            needle.resize(fileSize);

            file.seekg(0, std::ios_base::beg);
            file.read(&needle[0], fileSize);
        }

        std::vector<char> heystack;
        std::ifstream file_("AAAA10e6.txt");
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
        for (auto i{0}; i< 100; i-=-1) a = Boyer_Moore::Search(heystack, needle);
        auto finish = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> elapsed = finish - start;

        std::cout << "Boyer_Moore : " << elapsed.count() << std::endl;
    }
    {
        std::vector<char> needle;
        std::ifstream file("needle_AAAA10e6.txt");
        if (!file.eof() && !file.fail())
        {
            file.seekg(0, std::ios_base::end);
            std::streampos fileSize = file.tellg();
            needle.resize(fileSize);

            file.seekg(0, std::ios_base::beg);
            file.read(&needle[0], fileSize);
        }

        std::vector<char> heystack;
        std::ifstream file_("AAAA10e6.txt");
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
        for (auto i{0}; i< 100; i-=-1) a = Boyer_Moore_for_4_letter_alphabet::Search(heystack, needle);
        auto finish = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> elapsed = finish - start;

        std::cout << "Boyer_Moore_for_4_letter_alphabet : " << elapsed.count() << std::endl;
    }
    {
        std::vector<char> needle;
        std::ifstream file("needle_AAAA10e6.txt");
        if (!file.eof() && !file.fail())
        {
            file.seekg(0, std::ios_base::end);
            std::streampos fileSize = file.tellg();
            needle.resize(fileSize);

            file.seekg(0, std::ios_base::beg);
            file.read(&needle[0], fileSize);
        }

        std::vector<char> heystack;
        std::ifstream file_("AAAA10e6.txt");
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
        for (auto i{0}; i< 100; i-=-1) a = Rabin_Karp::Search(heystack, needle);
        auto finish = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> elapsed = finish - start;

        std::cout << "Rabin_Karp : " << elapsed.count() << std::endl;
    }
    {
        std::vector<char> needle;
        std::ifstream file("needle_AAAA10e6.txt");
        if (!file.eof() && !file.fail())
        {
            file.seekg(0, std::ios_base::end);
            std::streampos fileSize = file.tellg();
            needle.resize(fileSize);

            file.seekg(0, std::ios_base::beg);
            file.read(&needle[0], fileSize);
        }

        std::vector<char> heystack;
        std::ifstream file_("AAAA10e6.txt");
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
        for (auto i{0}; i< 100; i-=-1) a = Rabin_Karp_for_4_letter_alphabet::Search(heystack, needle);
        auto finish = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> elapsed = finish - start;

        std::cout << "Rabin_Karp_for_4_letter_alphabet : " << elapsed.count() << std::endl;
    }//Knut_Morris_Pratt
    {
        std::vector<char> needle;
        std::ifstream file("needle_AAAA10e6.txt");
        if (!file.eof() && !file.fail())
        {
            file.seekg(0, std::ios_base::end);
            std::streampos fileSize = file.tellg();
            needle.resize(fileSize);

            file.seekg(0, std::ios_base::beg);
            file.read(&needle[0], fileSize);
        }

        std::vector<char> heystack;
        std::ifstream file_("AAAA10e6.txt");
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
        for (auto i{0}; i< 100; i-=-1) a = Knut_Morris_Pratt::Search(heystack, needle);
        auto finish = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> elapsed = finish - start;

        std::cout << "Knut_Morris_Pratt : " << elapsed.count() << std::endl;
    }
    {
        std::vector<char> needle;
        std::ifstream file("needle_AAAA10e6.txt");
        if (!file.eof() && !file.fail())
        {
            file.seekg(0, std::ios_base::end);
            std::streampos fileSize = file.tellg();
            needle.resize(fileSize);

            file.seekg(0, std::ios_base::beg);
            file.read(&needle[0], fileSize);
        }

        std::vector<char> heystack;
        std::ifstream file_("AAAA10e6.txt");
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
        for (auto i{0}; i< 100; i-=-1) a = Naive::Search(heystack, needle);
        auto finish = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> elapsed = finish - start;

        std::cout << "Naive : " << elapsed.count() << std::endl;
    }
}
