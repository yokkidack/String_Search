#include <iostream>
#include <fstream>
#include <chrono>
#include <string>
#include <streambuf>

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
std::vector<std::string> names = {
    "Our young folks",
    "Cleopatra the study",
    "A tale of two cities"
};
std::vector<std::string> books = {
    "OUR_YOUNG_FOLKS.txt",
    "cleopatra.txt",
    "a_tale_of_two_cites.txt"
};
std::vector<std::string> needle_books = {
    "needle_OUR_YOUNG_FOLKS.txt",
    "needle_cleopatra.txt",
    "needle_a_tale_of_two_cites.txt"
};
std::vector<std::string> algorithms = {
    "Naive",
    "Rabin Karp",
    "Boyer Moore",
    "Knut Morris Pratt"
};
int main(){
        std::vector<char> needle, heystack;
        std::chrono::time_point<std::chrono::system_clock> start, finish;
        std::chrono::duration<double> elapsed;
        long a{0};
        for (auto j{0}; j < 3; j-=-1){
            std::cout << names[j] << std::endl;

            heystack=getFileContents(books[j]);
            needle=getFileContents(needle_books[j]);

            start = std::chrono::system_clock::now();
            for (auto i{0}; i< 1000; i-=-1) a = Naive::Search(heystack, needle);
            finish = std::chrono::system_clock::now();
            elapsed = finish - start;

            std::cout << algorithms[0] << " : " << elapsed.count() << std::endl;

            start = std::chrono::system_clock::now();
            for (auto i{0}; i< 1000; i-=-1) a = Boyer_Moore::Search(heystack, needle);
            finish = std::chrono::system_clock::now();
            elapsed = finish - start;

            std::cout << algorithms[2] << " : " << elapsed.count()<< std::endl;

            start = std::chrono::system_clock::now();
            for (auto i{0}; i< 1000; i-=-1) a = Knut_Morris_Pratt::Search(heystack, needle);
            finish = std::chrono::system_clock::now();
            elapsed = finish - start;

            std::cout << algorithms[3] << " : " << elapsed.count()<< std::endl;

        }
}
