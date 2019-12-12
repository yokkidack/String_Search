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

    std::cout << "4 letter alphabet tests" << std::endl;
    //naive 4a
    {
        {
            std::vector<char> needle;
            std::ifstream file("needle_randomtext_4alphabet_10e3.txt");
            if (!file.eof() && !file.fail())
            {
                file.seekg(0, std::ios_base::end);
                std::streampos fileSize = file.tellg();
                needle.resize(fileSize);

                file.seekg(0, std::ios_base::beg);
                file.read(&needle[0], fileSize);
            }

            std::vector<char> heystack;
            std::ifstream file_("randomtext_4alphabet_10e3.txt");
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
            for (auto i{0}; i< 100; i++) a = Naive::Search(heystack, needle);
            auto finish = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> elapsed = finish - start;

            std::cout << "10e3 Naive : " << elapsed.count() << std::endl;
        }
        {
            std::vector<char> needle;
            std::ifstream file("needle_randomtext_4alphabet_10e4.txt");
            if (!file.eof() && !file.fail())
            {
                file.seekg(0, std::ios_base::end);
                std::streampos fileSize = file.tellg();
                needle.resize(fileSize);

                file.seekg(0, std::ios_base::beg);
                file.read(&needle[0], fileSize);
            }

            std::vector<char> heystack;
            std::ifstream file_("randomtext_4alphabet_10e4.txt");
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
            for (auto i{0}; i< 100; i++) a = Naive::Search(heystack, needle);
            auto finish = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> elapsed = finish - start;

            std::cout << "10e4 Naive : " << elapsed.count() << std::endl;
        }
        {
            std::vector<char> needle;
            std::ifstream file("needle_randomtext_4alphabet_10e5.txt");
            if (!file.eof() && !file.fail())
            {
                file.seekg(0, std::ios_base::end);
                std::streampos fileSize = file.tellg();
                needle.resize(fileSize);

                file.seekg(0, std::ios_base::beg);
                file.read(&needle[0], fileSize);
            }

            std::vector<char> heystack;
            std::ifstream file_("randomtext_4alphabet_10e5.txt");
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
            for (auto i{0}; i< 100; i++) a = Naive::Search(heystack, needle);
            auto finish = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> elapsed = finish - start;

            std::cout << "10e5 Naive : " << elapsed.count() << std::endl;
        }
        {
            std::vector<char> needle;
            std::ifstream file("needle_randomtext_4alphabet_10e6.txt");
            if (!file.eof() && !file.fail())
            {
                file.seekg(0, std::ios_base::end);
                std::streampos fileSize = file.tellg();
                needle.resize(fileSize);

                file.seekg(0, std::ios_base::beg);
                file.read(&needle[0], fileSize);
            }

            std::vector<char> heystack;
            std::ifstream file_("randomtext_4alphabet_10e6.txt");
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
            for (auto i{0}; i< 100; i++) a = Naive::Search(heystack, needle);
            auto finish = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> elapsed = finish - start;

            std::cout << "10e6 Naive : " << elapsed.count() << std::endl;
        }
        {
            std::vector<char> needle;
            std::ifstream file("needle_randomtext_4alphabet_10e7.txt");
            if (!file.eof() && !file.fail())
            {
                file.seekg(0, std::ios_base::end);
                std::streampos fileSize = file.tellg();
                needle.resize(fileSize);

                file.seekg(0, std::ios_base::beg);
                file.read(&needle[0], fileSize);
            }

            std::vector<char> heystack;
            std::ifstream file_("randomtext_4alphabet_10e7.txt");
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
            for (auto i{0}; i< 100; i++) a = Naive::Search(heystack, needle);
            auto finish = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> elapsed = finish - start;

            std::cout << "10e7 Naive : " << elapsed.count() << std::endl;
        }
    }
    //kmp 4a
    {
        {
            std::vector<char> needle;
            std::ifstream file("needle_randomtext_4alphabet_10e3.txt");
            if (!file.eof() && !file.fail())
            {
                file.seekg(0, std::ios_base::end);
                std::streampos fileSize = file.tellg();
                needle.resize(fileSize);

                file.seekg(0, std::ios_base::beg);
                file.read(&needle[0], fileSize);
            }

            std::vector<char> heystack;
            std::ifstream file_("randomtext_4alphabet_10e3.txt");
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
            for (auto i{0}; i< 100; i++) a = Knut_Morris_Pratt::Search(heystack, needle);
            auto finish = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> elapsed = finish - start;

            std::cout << "10e3 KMP   : " << elapsed.count() << std::endl;
        }
        {
            std::vector<char> needle;
            std::ifstream file("needle_randomtext_4alphabet_10e4.txt");
            if (!file.eof() && !file.fail())
            {
                file.seekg(0, std::ios_base::end);
                std::streampos fileSize = file.tellg();
                needle.resize(fileSize);

                file.seekg(0, std::ios_base::beg);
                file.read(&needle[0], fileSize);
            }

            std::vector<char> heystack;
            std::ifstream file_("randomtext_4alphabet_10e4.txt");
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
            for (auto i{0}; i< 100; i++) a = Knut_Morris_Pratt::Search(heystack, needle);
            auto finish = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> elapsed = finish - start;

            std::cout << "10e4 KMP   : " << elapsed.count() << std::endl;
        }
        {
            std::vector<char> needle;
            std::ifstream file("needle_randomtext_4alphabet_10e5.txt");
            if (!file.eof() && !file.fail())
            {
                file.seekg(0, std::ios_base::end);
                std::streampos fileSize = file.tellg();
                needle.resize(fileSize);

                file.seekg(0, std::ios_base::beg);
                file.read(&needle[0], fileSize);
            }

            std::vector<char> heystack;
            std::ifstream file_("randomtext_4alphabet_10e5.txt");
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
            for (auto i{0}; i< 100; i++) a = Knut_Morris_Pratt::Search(heystack, needle);
            auto finish = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> elapsed = finish - start;

            std::cout << "10e5 KMP   : " << elapsed.count() << std::endl;
        }
        {
            std::vector<char> needle;
            std::ifstream file("needle_randomtext_4alphabet_10e6.txt");
            if (!file.eof() && !file.fail())
            {
                file.seekg(0, std::ios_base::end);
                std::streampos fileSize = file.tellg();
                needle.resize(fileSize);

                file.seekg(0, std::ios_base::beg);
                file.read(&needle[0], fileSize);
            }

            std::vector<char> heystack;
            std::ifstream file_("randomtext_4alphabet_10e6.txt");
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
            for (auto i{0}; i< 100; i++) a = Knut_Morris_Pratt::Search(heystack, needle);
            auto finish = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> elapsed = finish - start;

            std::cout << "10e6 KMP   : " << elapsed.count() << std::endl;
        }
        {
            std::vector<char> needle;
            std::ifstream file("needle_randomtext_4alphabet_10e7.txt");
            if (!file.eof() && !file.fail())
            {
                file.seekg(0, std::ios_base::end);
                std::streampos fileSize = file.tellg();
                needle.resize(fileSize);

                file.seekg(0, std::ios_base::beg);
                file.read(&needle[0], fileSize);
            }

            std::vector<char> heystack;
            std::ifstream file_("randomtext_4alphabet_10e7.txt");
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
            for (auto i{0}; i< 100; i++) a = Knut_Morris_Pratt::Search(heystack, needle);
            auto finish = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> elapsed = finish - start;

            std::cout << "10e7 KMP   : " << elapsed.count() << std::endl;
        }
    }
    // bm 4a
    {
        {
            std::vector<char> needle;
            std::ifstream file("needle_randomtext_4alphabet_10e3.txt");
            if (!file.eof() && !file.fail())
            {
                file.seekg(0, std::ios_base::end);
                std::streampos fileSize = file.tellg();
                needle.resize(fileSize);

                file.seekg(0, std::ios_base::beg);
                file.read(&needle[0], fileSize);
            }

            std::vector<char> heystack;
            std::ifstream file_("randomtext_4alphabet_10e3.txt");
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
            for (auto i{0}; i< 100; i++) a = Boyer_Moore_for_4_letter_alphabet::Search_bad(heystack, needle);
            auto finish = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> elapsed = finish - start;

            std::cout << "10e3 BM    : " << elapsed.count() << std::endl;
        }
        {
            std::vector<char> needle;
            std::ifstream file("needle_randomtext_4alphabet_10e4.txt");
            if (!file.eof() && !file.fail())
            {
                file.seekg(0, std::ios_base::end);
                std::streampos fileSize = file.tellg();
                needle.resize(fileSize);

                file.seekg(0, std::ios_base::beg);
                file.read(&needle[0], fileSize);
            }

            std::vector<char> heystack;
            std::ifstream file_("randomtext_4alphabet_10e4.txt");
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
            for (auto i{0}; i< 100; i++) a = Boyer_Moore_for_4_letter_alphabet::Search_bad(heystack, needle);
            auto finish = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> elapsed = finish - start;

            std::cout << "10e4 BM    : " << elapsed.count() << std::endl;
        }
        {
            std::vector<char> needle;
            std::ifstream file("needle_randomtext_4alphabet_10e5.txt");
            if (!file.eof() && !file.fail())
            {
                file.seekg(0, std::ios_base::end);
                std::streampos fileSize = file.tellg();
                needle.resize(fileSize);

                file.seekg(0, std::ios_base::beg);
                file.read(&needle[0], fileSize);
            }

            std::vector<char> heystack;
            std::ifstream file_("randomtext_4alphabet_10e5.txt");
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
            for (auto i{0}; i< 100; i++) a = Boyer_Moore_for_4_letter_alphabet::Search_bad(heystack, needle);
            auto finish = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> elapsed = finish - start;

            std::cout << "10e5 BM    : " << elapsed.count() << std::endl;
        }
        {
            std::vector<char> needle;
            std::ifstream file("needle_randomtext_4alphabet_10e6.txt");
            if (!file.eof() && !file.fail())
            {
                file.seekg(0, std::ios_base::end);
                std::streampos fileSize = file.tellg();
                needle.resize(fileSize);

                file.seekg(0, std::ios_base::beg);
                file.read(&needle[0], fileSize);
            }

            std::vector<char> heystack;
            std::ifstream file_("randomtext_4alphabet_10e6.txt");
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
            for (auto i{0}; i< 100; i++) a = Boyer_Moore_for_4_letter_alphabet::Search_bad(heystack, needle);
            auto finish = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> elapsed = finish - start;

            std::cout << "10e6 BM    : " << elapsed.count() << std::endl;
        }
        {
            std::vector<char> needle;
            std::ifstream file("needle_randomtext_4alphabet_10e7.txt");
            if (!file.eof() && !file.fail())
            {
                file.seekg(0, std::ios_base::end);
                std::streampos fileSize = file.tellg();
                needle.resize(fileSize);

                file.seekg(0, std::ios_base::beg);
                file.read(&needle[0], fileSize);
            }

            std::vector<char> heystack;
            std::ifstream file_("randomtext_4alphabet_10e7.txt");
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
            for (auto i{0}; i< 100; i++) a = Boyer_Moore_for_4_letter_alphabet::Search_bad(heystack, needle);
            auto finish = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> elapsed = finish - start;

            std::cout << "10e7 BM    : " << elapsed.count() << std::endl;
        }
    }
    // rk 4a
    {
        {
            std::vector<char> needle;
            std::ifstream file("needle_randomtext_4alphabet_10e3.txt");
            if (!file.eof() && !file.fail())
            {
                file.seekg(0, std::ios_base::end);
                std::streampos fileSize = file.tellg();
                needle.resize(fileSize);

                file.seekg(0, std::ios_base::beg);
                file.read(&needle[0], fileSize);
            }

            std::vector<char> heystack;
            std::ifstream file_("randomtext_4alphabet_10e3.txt");
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
            for (auto i{0}; i< 100; i++) a = Rabin_Karp_for_4_letter_alphabet::Search(heystack, needle);
            auto finish = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> elapsed = finish - start;

            std::cout << "10e3 RK    : " << elapsed.count() << std::endl;
        }
        {
            std::vector<char> needle;
            std::ifstream file("needle_randomtext_4alphabet_10e4.txt");
            if (!file.eof() && !file.fail())
            {
                file.seekg(0, std::ios_base::end);
                std::streampos fileSize = file.tellg();
                needle.resize(fileSize);

                file.seekg(0, std::ios_base::beg);
                file.read(&needle[0], fileSize);
            }

            std::vector<char> heystack;
            std::ifstream file_("randomtext_4alphabet_10e4.txt");
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
            for (auto i{0}; i< 100; i++) a = Rabin_Karp_for_4_letter_alphabet::Search(heystack, needle);
            auto finish = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> elapsed = finish - start;

            std::cout << "10e4 RK    : " << elapsed.count() << std::endl;
        }
        {
            std::vector<char> needle;
            std::ifstream file("needle_randomtext_4alphabet_10e5.txt");
            if (!file.eof() && !file.fail())
            {
                file.seekg(0, std::ios_base::end);
                std::streampos fileSize = file.tellg();
                needle.resize(fileSize);

                file.seekg(0, std::ios_base::beg);
                file.read(&needle[0], fileSize);
            }

            std::vector<char> heystack;
            std::ifstream file_("randomtext_4alphabet_10e5.txt");
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
            for (auto i{0}; i< 100; i++) a = Rabin_Karp_for_4_letter_alphabet::Search(heystack, needle);
            auto finish = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> elapsed = finish - start;

            std::cout << "10e5 RK    : " << elapsed.count() << std::endl;
        }
        {
            std::vector<char> needle;
            std::ifstream file("needle_randomtext_4alphabet_10e6.txt");
            if (!file.eof() && !file.fail())
            {
                file.seekg(0, std::ios_base::end);
                std::streampos fileSize = file.tellg();
                needle.resize(fileSize);

                file.seekg(0, std::ios_base::beg);
                file.read(&needle[0], fileSize);
            }

            std::vector<char> heystack;
            std::ifstream file_("randomtext_4alphabet_10e6.txt");
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
            for (auto i{0}; i< 100; i++) a = Rabin_Karp_for_4_letter_alphabet::Search(heystack, needle);
            auto finish = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> elapsed = finish - start;

            std::cout << "10e6 RK    : " << elapsed.count() << std::endl;
        }
        {
            std::vector<char> needle;
            std::ifstream file("needle_randomtext_4alphabet_10e7.txt");
            if (!file.eof() && !file.fail())
            {
                file.seekg(0, std::ios_base::end);
                std::streampos fileSize = file.tellg();
                needle.resize(fileSize);

                file.seekg(0, std::ios_base::beg);
                file.read(&needle[0], fileSize);
            }

            std::vector<char> heystack;
            std::ifstream file_("randomtext_4alphabet_10e7.txt");
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
            for (auto i{0}; i< 100; i++) a = Rabin_Karp_for_4_letter_alphabet::Search(heystack, needle);
            auto finish = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> elapsed = finish - start;

            std::cout << "10e7 RK    : " << elapsed.count() << std::endl;
        }
    }
    std::cout << "A-Z alphabet tests" << std::endl;
    //naive fa
    {
        {
            std::vector<char> needle;
            std::ifstream file("needle_randomtext_fullalphabet_10e3.txt");
            if (!file.eof() && !file.fail())
            {
                file.seekg(0, std::ios_base::end);
                std::streampos fileSize = file.tellg();
                needle.resize(fileSize);

                file.seekg(0, std::ios_base::beg);
                file.read(&needle[0], fileSize);
            }

            std::vector<char> heystack;
            std::ifstream file_("randomtext_fullalphabet_10e3.txt");
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
            for (auto i{0}; i< 100; i++) a = Naive::Search(heystack, needle);
            auto finish = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> elapsed = finish - start;

            std::cout << "10e3 Naive : " << elapsed.count() << std::endl;
        }
        {
            std::vector<char> needle;
            std::ifstream file("needle_randomtext_fullalphabet_10e4.txt");
            if (!file.eof() && !file.fail())
            {
                file.seekg(0, std::ios_base::end);
                std::streampos fileSize = file.tellg();
                needle.resize(fileSize);

                file.seekg(0, std::ios_base::beg);
                file.read(&needle[0], fileSize);
            }

            std::vector<char> heystack;
            std::ifstream file_("randomtext_fullalphabet_10e4.txt");
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
            for (auto i{0}; i< 100; i++) a = Naive::Search(heystack, needle);
            auto finish = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> elapsed = finish - start;

            std::cout << "10e4 Naive : " << elapsed.count() << std::endl;
        }
        {
            std::vector<char> needle;
            std::ifstream file("needle_randomtext_fullalphabet_10e5.txt");
            if (!file.eof() && !file.fail())
            {
                file.seekg(0, std::ios_base::end);
                std::streampos fileSize = file.tellg();
                needle.resize(fileSize);

                file.seekg(0, std::ios_base::beg);
                file.read(&needle[0], fileSize);
            }

            std::vector<char> heystack;
            std::ifstream file_("randomtext_fullalphabet_10e5.txt");
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
            for (auto i{0}; i< 100; i++) a = Naive::Search(heystack, needle);
            auto finish = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> elapsed = finish - start;

            std::cout << "10e5 Naive : " << elapsed.count() << std::endl;
        }
        {
            std::vector<char> needle;
            std::ifstream file("needle_randomtext_fullalphabet_10e6.txt");
            if (!file.eof() && !file.fail())
            {
                file.seekg(0, std::ios_base::end);
                std::streampos fileSize = file.tellg();
                needle.resize(fileSize);

                file.seekg(0, std::ios_base::beg);
                file.read(&needle[0], fileSize);
            }

            std::vector<char> heystack;
            std::ifstream file_("randomtext_fullalphabet_10e6.txt");
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
            for (auto i{0}; i< 100; i++) a = Naive::Search(heystack, needle);
            auto finish = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> elapsed = finish - start;

            std::cout << "10e6 Naive : " << elapsed.count() << std::endl;
        }
        {
            std::vector<char> needle;
            std::ifstream file("needle_randomtext_fullalphabet_10e7.txt");
            if (!file.eof() && !file.fail())
            {
                file.seekg(0, std::ios_base::end);
                std::streampos fileSize = file.tellg();
                needle.resize(fileSize);

                file.seekg(0, std::ios_base::beg);
                file.read(&needle[0], fileSize);
            }

            std::vector<char> heystack;
            std::ifstream file_("randomtext_fullalphabet_10e7.txt");
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
            for (auto i{0}; i< 100; i++) a = Naive::Search(heystack, needle);
            auto finish = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> elapsed = finish - start;

            std::cout << "10e7 Naive : " << elapsed.count() << std::endl;
        }
    }
    //kmp fa
    {
        {
            std::vector<char> needle;
            std::ifstream file("needle_randomtext_fullalphabet_10e3.txt");
            if (!file.eof() && !file.fail())
            {
                file.seekg(0, std::ios_base::end);
                std::streampos fileSize = file.tellg();
                needle.resize(fileSize);

                file.seekg(0, std::ios_base::beg);
                file.read(&needle[0], fileSize);
            }

            std::vector<char> heystack;
            std::ifstream file_("randomtext_fullalphabet_10e3.txt");
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
            for (auto i{0}; i< 100; i++) a = Knut_Morris_Pratt::Search(heystack, needle);
            auto finish = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> elapsed = finish - start;

            std::cout << "10e3 KMP   : " << elapsed.count() << std::endl;
        }
        {
            std::vector<char> needle;
            std::ifstream file("needle_randomtext_fullalphabet_10e4.txt");
            if (!file.eof() && !file.fail())
            {
                file.seekg(0, std::ios_base::end);
                std::streampos fileSize = file.tellg();
                needle.resize(fileSize);

                file.seekg(0, std::ios_base::beg);
                file.read(&needle[0], fileSize);
            }

            std::vector<char> heystack;
            std::ifstream file_("randomtext_fullalphabet_10e4.txt");
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
            for (auto i{0}; i< 100; i++) a = Knut_Morris_Pratt::Search(heystack, needle);
            auto finish = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> elapsed = finish - start;

            std::cout << "10e4 KMP   : " << elapsed.count() << std::endl;
        }
        {
            std::vector<char> needle;
            std::ifstream file("needle_randomtext_fullalphabet_10e5.txt");
            if (!file.eof() && !file.fail())
            {
                file.seekg(0, std::ios_base::end);
                std::streampos fileSize = file.tellg();
                needle.resize(fileSize);

                file.seekg(0, std::ios_base::beg);
                file.read(&needle[0], fileSize);
            }

            std::vector<char> heystack;
            std::ifstream file_("randomtext_fullalphabet_10e5.txt");
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
            for (auto i{0}; i< 100; i++) a = Knut_Morris_Pratt::Search(heystack, needle);
            auto finish = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> elapsed = finish - start;

            std::cout << "10e5 KMP   : " << elapsed.count() << std::endl;
        }
        {
            std::vector<char> needle;
            std::ifstream file("needle_randomtext_fullalphabet_10e6.txt");
            if (!file.eof() && !file.fail())
            {
                file.seekg(0, std::ios_base::end);
                std::streampos fileSize = file.tellg();
                needle.resize(fileSize);

                file.seekg(0, std::ios_base::beg);
                file.read(&needle[0], fileSize);
            }

            std::vector<char> heystack;
            std::ifstream file_("randomtext_fullalphabet_10e6.txt");
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
            for (auto i{0}; i< 100; i++) a = Knut_Morris_Pratt::Search(heystack, needle);
            auto finish = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> elapsed = finish - start;

            std::cout << "10e6 KMP   : " << elapsed.count() << std::endl;
        }
        {
            std::vector<char> needle;
            std::ifstream file("needle_randomtext_fullalphabet_10e7.txt");
            if (!file.eof() && !file.fail())
            {
                file.seekg(0, std::ios_base::end);
                std::streampos fileSize = file.tellg();
                needle.resize(fileSize);

                file.seekg(0, std::ios_base::beg);
                file.read(&needle[0], fileSize);
            }

            std::vector<char> heystack;
            std::ifstream file_("randomtext_fullalphabet_10e7.txt");
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
            for (auto i{0}; i< 100; i++) a = Knut_Morris_Pratt::Search(heystack, needle);
            auto finish = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> elapsed = finish - start;

            std::cout << "10e7 KMP   : " << elapsed.count() << std::endl;
        }
    }
    // bm fa
    {
        {
            std::vector<char> needle;
            std::ifstream file("needle_randomtext_fullalphabet_10e3.txt");
            if (!file.eof() && !file.fail())
            {
                file.seekg(0, std::ios_base::end);
                std::streampos fileSize = file.tellg();
                needle.resize(fileSize);

                file.seekg(0, std::ios_base::beg);
                file.read(&needle[0], fileSize);
            }

            std::vector<char> heystack;
            std::ifstream file_("randomtext_fullalphabet_10e3.txt");
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

            std::cout << "10e3 BM    : " << elapsed.count() << std::endl;
        }
        {
            std::vector<char> needle;
            std::ifstream file("needle_randomtext_fullalphabet_10e4.txt");
            if (!file.eof() && !file.fail())
            {
                file.seekg(0, std::ios_base::end);
                std::streampos fileSize = file.tellg();
                needle.resize(fileSize);

                file.seekg(0, std::ios_base::beg);
                file.read(&needle[0], fileSize);
            }

            std::vector<char> heystack;
            std::ifstream file_("randomtext_fullalphabet_10e4.txt");
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

            std::cout << "10e4 BM    : " << elapsed.count() << std::endl;
        }
        {
            std::vector<char> needle;
            std::ifstream file("needle_randomtext_fullalphabet_10e5.txt");
            if (!file.eof() && !file.fail())
            {
                file.seekg(0, std::ios_base::end);
                std::streampos fileSize = file.tellg();
                needle.resize(fileSize);

                file.seekg(0, std::ios_base::beg);
                file.read(&needle[0], fileSize);
            }

            std::vector<char> heystack;
            std::ifstream file_("randomtext_fullalphabet_10e5.txt");
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

            std::cout << "10e5 BM    : " << elapsed.count() << std::endl;
        }
        {
            std::vector<char> needle;
            std::ifstream file("needle_randomtext_fullalphabet_10e6.txt");
            if (!file.eof() && !file.fail())
            {
                file.seekg(0, std::ios_base::end);
                std::streampos fileSize = file.tellg();
                needle.resize(fileSize);

                file.seekg(0, std::ios_base::beg);
                file.read(&needle[0], fileSize);
            }

            std::vector<char> heystack;
            std::ifstream file_("randomtext_fullalphabet_10e6.txt");
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

            std::cout << "10e6 BM    : " << elapsed.count() << std::endl;
        }
        {
            std::vector<char> needle;
            std::ifstream file("needle_randomtext_fullalphabet_10e7.txt");
            if (!file.eof() && !file.fail())
            {
                file.seekg(0, std::ios_base::end);
                std::streampos fileSize = file.tellg();
                needle.resize(fileSize);

                file.seekg(0, std::ios_base::beg);
                file.read(&needle[0], fileSize);
            }

            std::vector<char> heystack;
            std::ifstream file_("randomtext_fullalphabet_10e7.txt");
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

            std::cout << "10e7 BM    : " << elapsed.count() << std::endl;
        }
    }
    // rk fa
    {
        {
            std::vector<char> needle;
            std::ifstream file("needle_randomtext_fullalphabet_10e3.txt");
            if (!file.eof() && !file.fail())
            {
                file.seekg(0, std::ios_base::end);
                std::streampos fileSize = file.tellg();
                needle.resize(fileSize);

                file.seekg(0, std::ios_base::beg);
                file.read(&needle[0], fileSize);
            }

            std::vector<char> heystack;
            std::ifstream file_("randomtext_fullalphabet_10e3.txt");
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
            for (auto i{0}; i< 100; i++) a = Rabin_Karp::Search(heystack, needle);
            auto finish = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> elapsed = finish - start;

            std::cout << "10e3 RK    : " << elapsed.count() << std::endl;
        }
        {
            std::vector<char> needle;
            std::ifstream file("needle_randomtext_fullalphabet_10e4.txt");
            if (!file.eof() && !file.fail())
            {
                file.seekg(0, std::ios_base::end);
                std::streampos fileSize = file.tellg();
                needle.resize(fileSize);

                file.seekg(0, std::ios_base::beg);
                file.read(&needle[0], fileSize);
            }

            std::vector<char> heystack;
            std::ifstream file_("randomtext_fullalphabet_10e4.txt");
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
            for (auto i{0}; i< 100; i++) a = Rabin_Karp::Search(heystack, needle);
            auto finish = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> elapsed = finish - start;

            std::cout << "10e4 RK    : " << elapsed.count() << std::endl;
        }
        {
            std::vector<char> needle;
            std::ifstream file("needle_randomtext_fullalphabet_10e5.txt");
            if (!file.eof() && !file.fail())
            {
                file.seekg(0, std::ios_base::end);
                std::streampos fileSize = file.tellg();
                needle.resize(fileSize);

                file.seekg(0, std::ios_base::beg);
                file.read(&needle[0], fileSize);
            }

            std::vector<char> heystack;
            std::ifstream file_("randomtext_fullalphabet_10e5.txt");
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
            for (auto i{0}; i< 100; i++) a = Rabin_Karp::Search(heystack, needle);
            auto finish = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> elapsed = finish - start;

            std::cout << "10e5 RK    : " << elapsed.count() << std::endl;
        }
        {
            std::vector<char> needle;
            std::ifstream file("needle_randomtext_fullalphabet_10e6.txt");
            if (!file.eof() && !file.fail())
            {
                file.seekg(0, std::ios_base::end);
                std::streampos fileSize = file.tellg();
                needle.resize(fileSize);

                file.seekg(0, std::ios_base::beg);
                file.read(&needle[0], fileSize);
            }

            std::vector<char> heystack;
            std::ifstream file_("randomtext_fullalphabet_10e6.txt");
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
            for (auto i{0}; i< 100; i++) a = Rabin_Karp::Search(heystack, needle);
            auto finish = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> elapsed = finish - start;

            std::cout << "10e6 RK    : " << elapsed.count() << std::endl;
        }
        {
            std::vector<char> needle;
            std::ifstream file("needle_randomtext_fullalphabet_10e7.txt");
            if (!file.eof() && !file.fail())
            {
                file.seekg(0, std::ios_base::end);
                std::streampos fileSize = file.tellg();
                needle.resize(fileSize);

                file.seekg(0, std::ios_base::beg);
                file.read(&needle[0], fileSize);
            }

            std::vector<char> heystack;
            std::ifstream file_("randomtext_fullalphabet_10e7.txt");
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
            for (auto i{0}; i< 100; i++) a = Rabin_Karp::Search(heystack, needle);
            auto finish = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> elapsed = finish - start;

            std::cout << "10e7 RK    : " << elapsed.count() << std::endl;
        }
    }
    std::cout<< "100 letter needle test"<<std::endl;
    std::cout << "4 letter alphabet tests" << std::endl;
    //naive 4a
    {
        {
            std::vector<char> needle;
            std::ifstream file("needle_randomtext_4alphabet_10e3_100.txt");
            if (!file.eof() && !file.fail())
            {
                file.seekg(0, std::ios_base::end);
                std::streampos fileSize = file.tellg();
                needle.resize(fileSize);

                file.seekg(0, std::ios_base::beg);
                file.read(&needle[0], fileSize);
            }

            std::vector<char> heystack;
            std::ifstream file_("randomtext_4alphabet_10e3_100.txt");
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
            for (auto i{0}; i< 100; i++) a = Naive::Search(heystack, needle);
            auto finish = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> elapsed = finish - start;

            std::cout << "10e3 Naive : " << elapsed.count() << std::endl;
        }
        {
            std::vector<char> needle;
            std::ifstream file("needle_randomtext_4alphabet_10e4_100.txt");
            if (!file.eof() && !file.fail())
            {
                file.seekg(0, std::ios_base::end);
                std::streampos fileSize = file.tellg();
                needle.resize(fileSize);

                file.seekg(0, std::ios_base::beg);
                file.read(&needle[0], fileSize);
            }

            std::vector<char> heystack;
            std::ifstream file_("randomtext_4alphabet_10e4_100.txt");
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
            for (auto i{0}; i< 100; i++) a = Naive::Search(heystack, needle);
            auto finish = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> elapsed = finish - start;

            std::cout << "10e4 Naive : " << elapsed.count() << std::endl;
        }
        {
            std::vector<char> needle;
            std::ifstream file("needle_randomtext_4alphabet_10e5_100.txt");
            if (!file.eof() && !file.fail())
            {
                file.seekg(0, std::ios_base::end);
                std::streampos fileSize = file.tellg();
                needle.resize(fileSize);

                file.seekg(0, std::ios_base::beg);
                file.read(&needle[0], fileSize);
            }

            std::vector<char> heystack;
            std::ifstream file_("randomtext_4alphabet_10e5_100.txt");
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
            for (auto i{0}; i< 100; i++) a = Naive::Search(heystack, needle);
            auto finish = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> elapsed = finish - start;

            std::cout << "10e5 Naive : " << elapsed.count() << std::endl;
        }
        {
            std::vector<char> needle;
            std::ifstream file("needle_randomtext_4alphabet_10e6_100.txt");
            if (!file.eof() && !file.fail())
            {
                file.seekg(0, std::ios_base::end);
                std::streampos fileSize = file.tellg();
                needle.resize(fileSize);

                file.seekg(0, std::ios_base::beg);
                file.read(&needle[0], fileSize);
            }

            std::vector<char> heystack;
            std::ifstream file_("randomtext_4alphabet_10e6_100.txt");
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
            for (auto i{0}; i< 100; i++) a = Naive::Search(heystack, needle);
            auto finish = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> elapsed = finish - start;

            std::cout << "10e6 Naive : " << elapsed.count() << std::endl;
        }
        {
            std::vector<char> needle;
            std::ifstream file("needle_randomtext_4alphabet_10e7_100.txt");
            if (!file.eof() && !file.fail())
            {
                file.seekg(0, std::ios_base::end);
                std::streampos fileSize = file.tellg();
                needle.resize(fileSize);

                file.seekg(0, std::ios_base::beg);
                file.read(&needle[0], fileSize);
            }

            std::vector<char> heystack;
            std::ifstream file_("randomtext_4alphabet_10e7_100.txt");
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
            for (auto i{0}; i< 100; i++) a = Naive::Search(heystack, needle);
            auto finish = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> elapsed = finish - start;

            std::cout << "10e7 Naive : " << elapsed.count() << std::endl;
        }
    }
    //kmp 4a
    {
        {
            std::vector<char> needle;
            std::ifstream file("needle_randomtext_4alphabet_10e3_100.txt");
            if (!file.eof() && !file.fail())
            {
                file.seekg(0, std::ios_base::end);
                std::streampos fileSize = file.tellg();
                needle.resize(fileSize);

                file.seekg(0, std::ios_base::beg);
                file.read(&needle[0], fileSize);
            }

            std::vector<char> heystack;
            std::ifstream file_("randomtext_4alphabet_10e3_100.txt");
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
            for (auto i{0}; i< 100; i++) a = Knut_Morris_Pratt::Search(heystack, needle);
            auto finish = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> elapsed = finish - start;

            std::cout << "10e3 KMP   : " << elapsed.count() << std::endl;
        }
        {
            std::vector<char> needle;
            std::ifstream file("needle_randomtext_4alphabet_10e4_100.txt");
            if (!file.eof() && !file.fail())
            {
                file.seekg(0, std::ios_base::end);
                std::streampos fileSize = file.tellg();
                needle.resize(fileSize);

                file.seekg(0, std::ios_base::beg);
                file.read(&needle[0], fileSize);
            }

            std::vector<char> heystack;
            std::ifstream file_("randomtext_4alphabet_10e4_100.txt");
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
            for (auto i{0}; i< 100; i++) a = Knut_Morris_Pratt::Search(heystack, needle);
            auto finish = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> elapsed = finish - start;

            std::cout << "10e4 KMP   : " << elapsed.count() << std::endl;
        }
        {
            std::vector<char> needle;
            std::ifstream file("needle_randomtext_4alphabet_10e5_100.txt");
            if (!file.eof() && !file.fail())
            {
                file.seekg(0, std::ios_base::end);
                std::streampos fileSize = file.tellg();
                needle.resize(fileSize);

                file.seekg(0, std::ios_base::beg);
                file.read(&needle[0], fileSize);
            }

            std::vector<char> heystack;
            std::ifstream file_("randomtext_4alphabet_10e5_100.txt");
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
            for (auto i{0}; i< 100; i++) a = Knut_Morris_Pratt::Search(heystack, needle);
            auto finish = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> elapsed = finish - start;

            std::cout << "10e5 KMP   : " << elapsed.count() << std::endl;
        }
        {
            std::vector<char> needle;
            std::ifstream file("needle_randomtext_4alphabet_10e6_100.txt");
            if (!file.eof() && !file.fail())
            {
                file.seekg(0, std::ios_base::end);
                std::streampos fileSize = file.tellg();
                needle.resize(fileSize);

                file.seekg(0, std::ios_base::beg);
                file.read(&needle[0], fileSize);
            }

            std::vector<char> heystack;
            std::ifstream file_("randomtext_4alphabet_10e6_100.txt");
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
            for (auto i{0}; i< 100; i++) a = Knut_Morris_Pratt::Search(heystack, needle);
            auto finish = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> elapsed = finish - start;

            std::cout << "10e6 KMP   : " << elapsed.count() << std::endl;
        }
        {
            std::vector<char> needle;
            std::ifstream file("needle_randomtext_4alphabet_10e7_100.txt");
            if (!file.eof() && !file.fail())
            {
                file.seekg(0, std::ios_base::end);
                std::streampos fileSize = file.tellg();
                needle.resize(fileSize);

                file.seekg(0, std::ios_base::beg);
                file.read(&needle[0], fileSize);
            }

            std::vector<char> heystack;
            std::ifstream file_("randomtext_4alphabet_10e7_100.txt");
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
            for (auto i{0}; i< 100; i++) a = Knut_Morris_Pratt::Search(heystack, needle);
            auto finish = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> elapsed = finish - start;

            std::cout << "10e7 KMP   : " << elapsed.count() << std::endl;
        }
    }
    // bm 4a
    {
        {
            std::vector<char> needle;
            std::ifstream file("needle_randomtext_4alphabet_10e3_100.txt");
            if (!file.eof() && !file.fail())
            {
                file.seekg(0, std::ios_base::end);
                std::streampos fileSize = file.tellg();
                needle.resize(fileSize);

                file.seekg(0, std::ios_base::beg);
                file.read(&needle[0], fileSize);
            }

            std::vector<char> heystack;
            std::ifstream file_("randomtext_4alphabet_10e3_100.txt");
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
            for (auto i{0}; i< 100; i++) a = Boyer_Moore_for_4_letter_alphabet::Search_bad(heystack, needle);
            auto finish = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> elapsed = finish - start;

            std::cout << "10e3 BM    : " << elapsed.count() << std::endl;
        }
        {
            std::vector<char> needle;
            std::ifstream file("needle_randomtext_4alphabet_10e4_100.txt");
            if (!file.eof() && !file.fail())
            {
                file.seekg(0, std::ios_base::end);
                std::streampos fileSize = file.tellg();
                needle.resize(fileSize);

                file.seekg(0, std::ios_base::beg);
                file.read(&needle[0], fileSize);
            }

            std::vector<char> heystack;
            std::ifstream file_("randomtext_4alphabet_10e4_100.txt");
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
            for (auto i{0}; i< 100; i++) a = Boyer_Moore_for_4_letter_alphabet::Search_bad(heystack, needle);
            auto finish = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> elapsed = finish - start;

            std::cout << "10e4 BM    : " << elapsed.count() << std::endl;
        }
        {
            std::vector<char> needle;
            std::ifstream file("needle_randomtext_4alphabet_10e5_100.txt");
            if (!file.eof() && !file.fail())
            {
                file.seekg(0, std::ios_base::end);
                std::streampos fileSize = file.tellg();
                needle.resize(fileSize);

                file.seekg(0, std::ios_base::beg);
                file.read(&needle[0], fileSize);
            }

            std::vector<char> heystack;
            std::ifstream file_("randomtext_4alphabet_10e5_100.txt");
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
            for (auto i{0}; i< 100; i++) a = Boyer_Moore_for_4_letter_alphabet::Search_bad(heystack, needle);
            auto finish = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> elapsed = finish - start;

            std::cout << "10e5 BM    : " << elapsed.count() << std::endl;
        }
        {
            std::vector<char> needle;
            std::ifstream file("needle_randomtext_4alphabet_10e6_100.txt");
            if (!file.eof() && !file.fail())
            {
                file.seekg(0, std::ios_base::end);
                std::streampos fileSize = file.tellg();
                needle.resize(fileSize);

                file.seekg(0, std::ios_base::beg);
                file.read(&needle[0], fileSize);
            }

            std::vector<char> heystack;
            std::ifstream file_("randomtext_4alphabet_10e6_100.txt");
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
            for (auto i{0}; i< 100; i++) a = Boyer_Moore_for_4_letter_alphabet::Search_bad(heystack, needle);
            auto finish = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> elapsed = finish - start;

            std::cout << "10e6 BM    : " << elapsed.count() << std::endl;
        }
        {
            std::vector<char> needle;
            std::ifstream file("needle_randomtext_4alphabet_10e7_100.txt");
            if (!file.eof() && !file.fail())
            {
                file.seekg(0, std::ios_base::end);
                std::streampos fileSize = file.tellg();
                needle.resize(fileSize);

                file.seekg(0, std::ios_base::beg);
                file.read(&needle[0], fileSize);
            }

            std::vector<char> heystack;
            std::ifstream file_("randomtext_4alphabet_10e7_100.txt");
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
            for (auto i{0}; i< 100; i++) a = Boyer_Moore_for_4_letter_alphabet::Search_bad(heystack, needle);
            auto finish = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> elapsed = finish - start;

            std::cout << "10e7 BM    : " << elapsed.count() << std::endl;
        }
    }
    // rk 4a
    {
        {
            std::vector<char> needle;
            std::ifstream file("needle_randomtext_4alphabet_10e3_100.txt");
            if (!file.eof() && !file.fail())
            {
                file.seekg(0, std::ios_base::end);
                std::streampos fileSize = file.tellg();
                needle.resize(fileSize);

                file.seekg(0, std::ios_base::beg);
                file.read(&needle[0], fileSize);
            }

            std::vector<char> heystack;
            std::ifstream file_("randomtext_4alphabet_10e3_100.txt");
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
            for (auto i{0}; i< 100; i++) a = Rabin_Karp_for_4_letter_alphabet::Search(heystack, needle);
            auto finish = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> elapsed = finish - start;

            std::cout << "10e3 RK    : " << elapsed.count() << std::endl;
        }
        {
            std::vector<char> needle;
            std::ifstream file("needle_randomtext_4alphabet_10e4_100.txt");
            if (!file.eof() && !file.fail())
            {
                file.seekg(0, std::ios_base::end);
                std::streampos fileSize = file.tellg();
                needle.resize(fileSize);

                file.seekg(0, std::ios_base::beg);
                file.read(&needle[0], fileSize);
            }

            std::vector<char> heystack;
            std::ifstream file_("randomtext_4alphabet_10e4_100.txt");
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
            for (auto i{0}; i< 100; i++) a = Rabin_Karp_for_4_letter_alphabet::Search(heystack, needle);
            auto finish = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> elapsed = finish - start;

            std::cout << "10e4 RK    : " << elapsed.count() << std::endl;
        }
        {
            std::vector<char> needle;
            std::ifstream file("needle_randomtext_4alphabet_10e5_100.txt");
            if (!file.eof() && !file.fail())
            {
                file.seekg(0, std::ios_base::end);
                std::streampos fileSize = file.tellg();
                needle.resize(fileSize);

                file.seekg(0, std::ios_base::beg);
                file.read(&needle[0], fileSize);
            }

            std::vector<char> heystack;
            std::ifstream file_("randomtext_4alphabet_10e5_100.txt");
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
            for (auto i{0}; i< 100; i++) a = Rabin_Karp_for_4_letter_alphabet::Search(heystack, needle);
            auto finish = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> elapsed = finish - start;

            std::cout << "10e5 RK    : " << elapsed.count() << std::endl;
        }
        {
            std::vector<char> needle;
            std::ifstream file("needle_randomtext_4alphabet_10e6_100.txt");
            if (!file.eof() && !file.fail())
            {
                file.seekg(0, std::ios_base::end);
                std::streampos fileSize = file.tellg();
                needle.resize(fileSize);

                file.seekg(0, std::ios_base::beg);
                file.read(&needle[0], fileSize);
            }

            std::vector<char> heystack;
            std::ifstream file_("randomtext_4alphabet_10e6_100.txt");
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
            for (auto i{0}; i< 100; i++) a = Rabin_Karp_for_4_letter_alphabet::Search(heystack, needle);
            auto finish = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> elapsed = finish - start;

            std::cout << "10e6 RK    : " << elapsed.count() << std::endl;
        }
        {
            std::vector<char> needle;
            std::ifstream file("needle_randomtext_4alphabet_10e7_100.txt");
            if (!file.eof() && !file.fail())
            {
                file.seekg(0, std::ios_base::end);
                std::streampos fileSize = file.tellg();
                needle.resize(fileSize);

                file.seekg(0, std::ios_base::beg);
                file.read(&needle[0], fileSize);
            }

            std::vector<char> heystack;
            std::ifstream file_("randomtext_4alphabet_10e7_100.txt");
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
            for (auto i{0}; i< 100; i++) a = Rabin_Karp_for_4_letter_alphabet::Search(heystack, needle);
            auto finish = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> elapsed = finish - start;

            std::cout << "10e7 RK    : " << elapsed.count() << std::endl;
        }
    }
    std::cout << "A-Z alphabet tests" << std::endl;
    //naive fa
    {
        {
            std::vector<char> needle;
            std::ifstream file("needle_randomtext_fullalphabet_10e3_100.txt");
            if (!file.eof() && !file.fail())
            {
                file.seekg(0, std::ios_base::end);
                std::streampos fileSize = file.tellg();
                needle.resize(fileSize);

                file.seekg(0, std::ios_base::beg);
                file.read(&needle[0], fileSize);
            }

            std::vector<char> heystack;
            std::ifstream file_("randomtext_fullalphabet_10e3_100.txt");
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
            for (auto i{0}; i< 100; i++) a = Naive::Search(heystack, needle);
            auto finish = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> elapsed = finish - start;

            std::cout << "10e3 Naive : " << elapsed.count() << std::endl;
        }
        {
            std::vector<char> needle;
            std::ifstream file("needle_randomtext_fullalphabet_10e4_100.txt");
            if (!file.eof() && !file.fail())
            {
                file.seekg(0, std::ios_base::end);
                std::streampos fileSize = file.tellg();
                needle.resize(fileSize);

                file.seekg(0, std::ios_base::beg);
                file.read(&needle[0], fileSize);
            }

            std::vector<char> heystack;
            std::ifstream file_("randomtext_fullalphabet_10e4_100.txt");
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
            for (auto i{0}; i< 100; i++) a = Naive::Search(heystack, needle);
            auto finish = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> elapsed = finish - start;

            std::cout << "10e4 Naive : " << elapsed.count() << std::endl;
        }
        {
            std::vector<char> needle;
            std::ifstream file("needle_randomtext_fullalphabet_10e5_100.txt");
            if (!file.eof() && !file.fail())
            {
                file.seekg(0, std::ios_base::end);
                std::streampos fileSize = file.tellg();
                needle.resize(fileSize);

                file.seekg(0, std::ios_base::beg);
                file.read(&needle[0], fileSize);
            }

            std::vector<char> heystack;
            std::ifstream file_("randomtext_fullalphabet_10e5_100.txt");
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
            for (auto i{0}; i< 100; i++) a = Naive::Search(heystack, needle);
            auto finish = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> elapsed = finish - start;

            std::cout << "10e5 Naive : " << elapsed.count() << std::endl;
        }
        {
            std::vector<char> needle;
            std::ifstream file("needle_randomtext_fullalphabet_10e6_100.txt");
            if (!file.eof() && !file.fail())
            {
                file.seekg(0, std::ios_base::end);
                std::streampos fileSize = file.tellg();
                needle.resize(fileSize);

                file.seekg(0, std::ios_base::beg);
                file.read(&needle[0], fileSize);
            }

            std::vector<char> heystack;
            std::ifstream file_("randomtext_fullalphabet_10e6_100.txt");
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
            for (auto i{0}; i< 100; i++) a = Naive::Search(heystack, needle);
            auto finish = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> elapsed = finish - start;

            std::cout << "10e6 Naive : " << elapsed.count() << std::endl;
        }
        {
            std::vector<char> needle;
            std::ifstream file("needle_randomtext_fullalphabet_10e7_100.txt");
            if (!file.eof() && !file.fail())
            {
                file.seekg(0, std::ios_base::end);
                std::streampos fileSize = file.tellg();
                needle.resize(fileSize);

                file.seekg(0, std::ios_base::beg);
                file.read(&needle[0], fileSize);
            }

            std::vector<char> heystack;
            std::ifstream file_("randomtext_fullalphabet_10e7_100.txt");
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
            for (auto i{0}; i< 100; i++) a = Naive::Search(heystack, needle);
            auto finish = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> elapsed = finish - start;

            std::cout << "10e7 Naive : " << elapsed.count() << std::endl;
        }
    }
    //kmp fa
    {
        {
            std::vector<char> needle;
            std::ifstream file("needle_randomtext_fullalphabet_10e3_100.txt");
            if (!file.eof() && !file.fail())
            {
                file.seekg(0, std::ios_base::end);
                std::streampos fileSize = file.tellg();
                needle.resize(fileSize);

                file.seekg(0, std::ios_base::beg);
                file.read(&needle[0], fileSize);
            }

            std::vector<char> heystack;
            std::ifstream file_("randomtext_fullalphabet_10e3_100.txt");
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
            for (auto i{0}; i< 100; i++) a = Knut_Morris_Pratt::Search(heystack, needle);
            auto finish = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> elapsed = finish - start;

            std::cout << "10e3 KMP   : " << elapsed.count() << std::endl;
        }
        {
            std::vector<char> needle;
            std::ifstream file("needle_randomtext_fullalphabet_10e4_100.txt");
            if (!file.eof() && !file.fail())
            {
                file.seekg(0, std::ios_base::end);
                std::streampos fileSize = file.tellg();
                needle.resize(fileSize);

                file.seekg(0, std::ios_base::beg);
                file.read(&needle[0], fileSize);
            }

            std::vector<char> heystack;
            std::ifstream file_("randomtext_fullalphabet_10e4_100.txt");
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
            for (auto i{0}; i< 100; i++) a = Knut_Morris_Pratt::Search(heystack, needle);
            auto finish = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> elapsed = finish - start;

            std::cout << "10e4 KMP   : " << elapsed.count() << std::endl;
        }
        {
            std::vector<char> needle;
            std::ifstream file("needle_randomtext_fullalphabet_10e5_100.txt");
            if (!file.eof() && !file.fail())
            {
                file.seekg(0, std::ios_base::end);
                std::streampos fileSize = file.tellg();
                needle.resize(fileSize);

                file.seekg(0, std::ios_base::beg);
                file.read(&needle[0], fileSize);
            }

            std::vector<char> heystack;
            std::ifstream file_("randomtext_fullalphabet_10e5_100.txt");
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
            for (auto i{0}; i< 100; i++) a = Knut_Morris_Pratt::Search(heystack, needle);
            auto finish = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> elapsed = finish - start;

            std::cout << "10e5 KMP   : " << elapsed.count() << std::endl;
        }
        {
            std::vector<char> needle;
            std::ifstream file("needle_randomtext_fullalphabet_10e6_100.txt");
            if (!file.eof() && !file.fail())
            {
                file.seekg(0, std::ios_base::end);
                std::streampos fileSize = file.tellg();
                needle.resize(fileSize);

                file.seekg(0, std::ios_base::beg);
                file.read(&needle[0], fileSize);
            }

            std::vector<char> heystack;
            std::ifstream file_("randomtext_fullalphabet_10e6_100.txt");
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
            for (auto i{0}; i< 100; i++) a = Knut_Morris_Pratt::Search(heystack, needle);
            auto finish = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> elapsed = finish - start;

            std::cout << "10e6 KMP   : " << elapsed.count() << std::endl;
        }
        {
            std::vector<char> needle;
            std::ifstream file("needle_randomtext_fullalphabet_10e7_100.txt");
            if (!file.eof() && !file.fail())
            {
                file.seekg(0, std::ios_base::end);
                std::streampos fileSize = file.tellg();
                needle.resize(fileSize);

                file.seekg(0, std::ios_base::beg);
                file.read(&needle[0], fileSize);
            }

            std::vector<char> heystack;
            std::ifstream file_("randomtext_fullalphabet_10e7_100.txt");
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
            for (auto i{0}; i< 100; i++) a = Knut_Morris_Pratt::Search(heystack, needle);
            auto finish = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> elapsed = finish - start;

            std::cout << "10e7 KMP   : " << elapsed.count() << std::endl;
        }
    }
    // bm fa
    {
        {
            std::vector<char> needle;
            std::ifstream file("needle_randomtext_fullalphabet_10e3_100.txt");
            if (!file.eof() && !file.fail())
            {
                file.seekg(0, std::ios_base::end);
                std::streampos fileSize = file.tellg();
                needle.resize(fileSize);

                file.seekg(0, std::ios_base::beg);
                file.read(&needle[0], fileSize);
            }

            std::vector<char> heystack;
            std::ifstream file_("randomtext_fullalphabet_10e3_100.txt");
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

            std::cout << "10e3 BM    : " << elapsed.count() << std::endl;
        }
        {
            std::vector<char> needle;
            std::ifstream file("needle_randomtext_fullalphabet_10e4_100.txt");
            if (!file.eof() && !file.fail())
            {
                file.seekg(0, std::ios_base::end);
                std::streampos fileSize = file.tellg();
                needle.resize(fileSize);

                file.seekg(0, std::ios_base::beg);
                file.read(&needle[0], fileSize);
            }

            std::vector<char> heystack;
            std::ifstream file_("randomtext_fullalphabet_10e4_100.txt");
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

            std::cout << "10e4 BM    : " << elapsed.count() << std::endl;
        }
        {
            std::vector<char> needle;
            std::ifstream file("needle_randomtext_fullalphabet_10e5_100.txt");
            if (!file.eof() && !file.fail())
            {
                file.seekg(0, std::ios_base::end);
                std::streampos fileSize = file.tellg();
                needle.resize(fileSize);

                file.seekg(0, std::ios_base::beg);
                file.read(&needle[0], fileSize);
            }

            std::vector<char> heystack;
            std::ifstream file_("randomtext_fullalphabet_10e5_100.txt");
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

            std::cout << "10e5 BM    : " << elapsed.count() << std::endl;
        }
        {
            std::vector<char> needle;
            std::ifstream file("needle_randomtext_fullalphabet_10e6_100.txt");
            if (!file.eof() && !file.fail())
            {
                file.seekg(0, std::ios_base::end);
                std::streampos fileSize = file.tellg();
                needle.resize(fileSize);

                file.seekg(0, std::ios_base::beg);
                file.read(&needle[0], fileSize);
            }

            std::vector<char> heystack;
            std::ifstream file_("randomtext_fullalphabet_10e6_100.txt");
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

            std::cout << "10e6 BM    : " << elapsed.count() << std::endl;
        }
        {
            std::vector<char> needle;
            std::ifstream file("needle_randomtext_fullalphabet_10e7_100.txt");
            if (!file.eof() && !file.fail())
            {
                file.seekg(0, std::ios_base::end);
                std::streampos fileSize = file.tellg();
                needle.resize(fileSize);

                file.seekg(0, std::ios_base::beg);
                file.read(&needle[0], fileSize);
            }

            std::vector<char> heystack;
            std::ifstream file_("randomtext_fullalphabet_10e7_100.txt");
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

            std::cout << "10e7 BM    : " << elapsed.count() << std::endl;
        }
    }
    // rk fa
    {
        {
            std::vector<char> needle;
            std::ifstream file("needle_randomtext_fullalphabet_10e3_100.txt");
            if (!file.eof() && !file.fail())
            {
                file.seekg(0, std::ios_base::end);
                std::streampos fileSize = file.tellg();
                needle.resize(fileSize);

                file.seekg(0, std::ios_base::beg);
                file.read(&needle[0], fileSize);
            }

            std::vector<char> heystack;
            std::ifstream file_("randomtext_fullalphabet_10e3_100.txt");
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
            for (auto i{0}; i< 100; i++) a = Rabin_Karp::Search(heystack, needle);
            auto finish = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> elapsed = finish - start;

            std::cout << "10e3 RK    : " << elapsed.count() << std::endl;
        }
        {
            std::vector<char> needle;
            std::ifstream file("needle_randomtext_fullalphabet_10e4_100.txt");
            if (!file.eof() && !file.fail())
            {
                file.seekg(0, std::ios_base::end);
                std::streampos fileSize = file.tellg();
                needle.resize(fileSize);

                file.seekg(0, std::ios_base::beg);
                file.read(&needle[0], fileSize);
            }

            std::vector<char> heystack;
            std::ifstream file_("randomtext_fullalphabet_10e4_100.txt");
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
            for (auto i{0}; i< 100; i++) a = Rabin_Karp::Search(heystack, needle);
            auto finish = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> elapsed = finish - start;

            std::cout << "10e4 RK    : " << elapsed.count() << std::endl;
        }
        {
            std::vector<char> needle;
            std::ifstream file("needle_randomtext_fullalphabet_10e5_100.txt");
            if (!file.eof() && !file.fail())
            {
                file.seekg(0, std::ios_base::end);
                std::streampos fileSize = file.tellg();
                needle.resize(fileSize);

                file.seekg(0, std::ios_base::beg);
                file.read(&needle[0], fileSize);
            }

            std::vector<char> heystack;
            std::ifstream file_("randomtext_fullalphabet_10e5_100.txt");
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
            for (auto i{0}; i< 100; i++) a = Rabin_Karp::Search(heystack, needle);
            auto finish = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> elapsed = finish - start;

            std::cout << "10e5 RK    : " << elapsed.count() << std::endl;
        }
        {
            std::vector<char> needle;
            std::ifstream file("needle_randomtext_fullalphabet_10e6_100.txt");
            if (!file.eof() && !file.fail())
            {
                file.seekg(0, std::ios_base::end);
                std::streampos fileSize = file.tellg();
                needle.resize(fileSize);

                file.seekg(0, std::ios_base::beg);
                file.read(&needle[0], fileSize);
            }

            std::vector<char> heystack;
            std::ifstream file_("randomtext_fullalphabet_10e6_100.txt");
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
            for (auto i{0}; i< 100; i++) a = Rabin_Karp::Search(heystack, needle);
            auto finish = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> elapsed = finish - start;

            std::cout << "10e6 RK    : " << elapsed.count() << std::endl;
        }
        {
            std::vector<char> needle;
            std::ifstream file("needle_randomtext_fullalphabet_10e7_100.txt");
            if (!file.eof() && !file.fail())
            {
                file.seekg(0, std::ios_base::end);
                std::streampos fileSize = file.tellg();
                needle.resize(fileSize);

                file.seekg(0, std::ios_base::beg);
                file.read(&needle[0], fileSize);
            }

            std::vector<char> heystack;
            std::ifstream file_("randomtext_fullalphabet_10e7_100.txt");
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
            for (auto i{0}; i< 100; i++) a = Rabin_Karp::Search(heystack, needle);
            auto finish = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> elapsed = finish - start;

            std::cout << "10e7 RK    : " << elapsed.count() << std::endl;
        }
    }

}
