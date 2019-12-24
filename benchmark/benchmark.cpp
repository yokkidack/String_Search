#include <iostream>
#include <fstream>
#include <chrono>
#include <string>
#include <streambuf>
#include <array>
#include <utility>      // std::pair, std::make_pair

#include "../algorithms/naive_string_search.hxx"
#include "../algorithms/boyer_moore_search.hxx"
#include "../algorithms/knuth_morris_pratt_search.hxx"
#include "../algorithms/rabin_karp_search.hxx"

std::vector<char> getFileContents(std::string fileName){
    std::vector<char> contents;
    std::ifstream file(fileName);
    if (!file.eof() && !file.fail())
    {
        file.seekg(0, std::ios_base::end);
        std::streampos fileSize = file.tellg();
        contents.resize(fileSize);

        file.seekg(0, std::ios_base::beg);
        file.read(&contents[0], fileSize);
    }
    return contents;
}

std::vector <std::string> filenames_4l10n = {
    "randomtext_4alphabet_10e3.txt",
    "randomtext_4alphabet_10e4.txt",
    "randomtext_4alphabet_10e5.txt",
    "randomtext_4alphabet_10e6.txt",
    "randomtext_4alphabet_10e7.txt"
};

std::vector <std::string> filenames_4l100n = {
    "randomtext_4alphabet_10e3_100.txt",
    "randomtext_4alphabet_10e4_100.txt",
    "randomtext_4alphabet_10e5_100.txt",
    "randomtext_4alphabet_10e6_100.txt",
    "randomtext_4alphabet_10e7_100.txt"
};

std::vector <std::string> needle_filenames_4l10n = {
    "needle_randomtext_4alphabet_10e3.txt",
    "needle_randomtext_4alphabet_10e4.txt",
    "needle_randomtext_4alphabet_10e5.txt",
    "needle_randomtext_4alphabet_10e6.txt",
    "needle_randomtext_4alphabet_10e7.txt"
};

std::vector <std::string> needle_filenames_4l100n = {
    "needle_randomtext_4alphabet_10e3_100.txt",
    "needle_randomtext_4alphabet_10e4_100.txt",
    "needle_randomtext_4alphabet_10e5_100.txt",
    "needle_randomtext_4alphabet_10e6_100.txt",
    "needle_randomtext_4alphabet_10e7_100.txt"
};

std::vector <std::string> filenames_full10n = {
    "randomtext_fullalphabet_10e3.txt",
    "randomtext_fullalphabet_10e4.txt",
    "randomtext_fullalphabet_10e5.txt",
    "randomtext_fullalphabet_10e6.txt",
    "randomtext_fullalphabet_10e7.txt"
};

std::vector <std::string> filenames_full100n = {
    "randomtext_fullalphabet_10e3_100.txt",
    "randomtext_fullalphabet_10e4_100.txt",
    "randomtext_fullalphabet_10e5_100.txt",
    "randomtext_fullalphabet_10e6_100.txt",
    "randomtext_fullalphabet_10e7_100.txt"
};

std::vector <std::string> needle_filenames_full10n = {
    "needle_randomtext_fullalphabet_10e3.txt",
    "needle_randomtext_fullalphabet_10e4.txt",
    "needle_randomtext_fullalphabet_10e5.txt",
    "needle_randomtext_fullalphabet_10e6.txt",
    "needle_randomtext_fullalphabet_10e7.txt"
};

std::vector <std::string> needle_filenames_full100n = {
    "needle_randomtext_fullalphabet_10e3_100.txt",
    "needle_randomtext_fullalphabet_10e4_100.txt",
    "needle_randomtext_fullalphabet_10e5_100.txt",
    "needle_randomtext_fullalphabet_10e6_100.txt",
    "needle_randomtext_fullalphabet_10e7_100.txt"
};
std::vector <std::string> algorithm_names = {
        "Naive",
        "K~M~P",
        "Bo~~M",
        "Bo~M4",
        "Ra~~K",
        "Ra~K4"
};
int main(){
    std::vector<char> needle, heystack;
    std::chrono::time_point<std::chrono::system_clock> start, finish;
    std::chrono::duration<double> elapsed;
    std::vector <std::string> needle_source, heystack_source;
    long a{0};
    for (auto j{0}; j < 4; j-=-1){
        switch (j)
        {
        case 0:
            std::cout << "4 L.A. 10 L.N." << std::endl;
            needle_source = needle_filenames_4l10n;
            heystack_source = filenames_4l10n;
            break;
        case 1:
            std::cout << "4 L.A. 100 L.N." << std::endl;
            needle_source = needle_filenames_4l100n;
            heystack_source = filenames_4l100n;
            break;
        case 2:
            std::cout << "Full A. 10 L.N." << std::endl;
            needle_source = needle_filenames_full10n;
            heystack_source = filenames_full10n;
            break;
        case 3:
            std::cout << "Full A. 100 L.N." << std::endl;
            needle_source = needle_filenames_full100n;
            heystack_source = filenames_full100n;
            break;
        }
        if ((j == 0) or (j == 1)){
            for (auto i{0}; i < 5; i-=-1){
                heystack=getFileContents(heystack_source[i]);
                needle=getFileContents(needle_source[i]);
                start = std::chrono::system_clock::now();
                for (auto i{0}; i< 100; i++) a = Rabin_Karp_for_4_letter_alphabet::Search(heystack, needle);
                finish = std::chrono::system_clock::now();
                elapsed = finish - start;
                std::cout << "10e"<< i +3<<" "<<algorithm_names[5]<<" : " << elapsed.count() << std::endl;
            }
            for (auto i{0}; i < 5; i-=-1){
                heystack=getFileContents(heystack_source[i]);
                needle=getFileContents(needle_source[i]);
                start = std::chrono::system_clock::now();
                for (auto i{0}; i< 100; i++) a = Boyer_Moore_for_4_letter_alphabet::Search(heystack, needle);
                finish = std::chrono::system_clock::now();
                elapsed = finish - start;
                std::cout << "10e"<< i +3<<" "<<algorithm_names[3]<<" : " << elapsed.count() << std::endl;
            }
        }
        for (auto i{0}; i < 5; i-=-1){
            heystack=getFileContents(heystack_source[i]);
            needle=getFileContents(needle_source[i]);
            start = std::chrono::system_clock::now();
            for (auto i{0}; i< 100; i++) a = Naive::Search(heystack, needle);
            finish = std::chrono::system_clock::now();
            elapsed = finish - start;
            std::cout << "10e"<< i +3<<" "<<algorithm_names[0]<<" : " << elapsed.count() << std::endl;
        }
        for (auto i{0}; i < 5; i-=-1){
            heystack=getFileContents(heystack_source[i]);
            needle=getFileContents(needle_source[i]);
            start = std::chrono::system_clock::now();
            for (auto i{0}; i< 100; i++) a = Knut_Morris_Pratt::Search(heystack, needle);
            finish = std::chrono::system_clock::now();
            elapsed = finish - start;
            std::cout << "10e"<< i +3<<" "<<algorithm_names[1]<<" : " << elapsed.count() << std::endl;
        }
        for (auto i{0}; i < 5; i-=-1){
            heystack=getFileContents(heystack_source[i]);
            needle=getFileContents(needle_source[i]);
            start = std::chrono::system_clock::now();
            for (auto i{0}; i< 100; i++) a = Boyer_Moore::Search(heystack, needle);
            finish = std::chrono::system_clock::now();
            elapsed = finish - start;
            std::cout << "10e"<< i +3<<" "<<algorithm_names[2]<<" : " << elapsed.count() << std::endl;
        }
        for (auto i{0}; i < 5; i-=-1){
            heystack=getFileContents(heystack_source[i]);
            needle=getFileContents(needle_source[i]);
            start = std::chrono::system_clock::now();
            for (auto i{0}; i< 100; i++) a = Rabin_Karp::Search(heystack, needle);
            finish = std::chrono::system_clock::now();
            elapsed = finish - start;
            std::cout << "10e"<< i +3<<" "<<algorithm_names[4]<<" : " << elapsed.count() << std::endl;
        }
    }
}
