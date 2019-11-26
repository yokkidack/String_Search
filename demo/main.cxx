#include <iostream>
#include <fstream>

#include "../algorithms/naive_string_search.hxx"
#include "../algorithms/boyer_moore_search.hxx"
#include "../algorithms/knuth_morris_pratt_search.hxx"
#include "../algorithms/rabin_karp_search.hxx"


void inline usage() {
    std::cout << "hi, you did not provided enough of i/o files, try:"
              << " ./<target> <input file name> <substring input file name> "
              <<"<output file name>";
}

int main(int argc, char* argv[])
{
    if (argc != 4){
        usage();
        return 0;
    }
    std::fstream in_string(argv[1], std::ios_base::in);
    std::string a((std::istreambuf_iterator<char>(in_string)),
        (std::istreambuf_iterator<char>()));
    in_string.close();
    a = a.substr(0, a.size() - 1);
    std::fstream in_substring(argv[2], std::ios_base::in);
    std::string b((std::istreambuf_iterator<char>(in_substring)),
        (std::istreambuf_iterator<char>()));
    in_substring.close();
    b = b.substr(0, b.size() - 1);
    std::vector<char> string_(a.begin(), a.end());
    std::vector<char> substring_(b.begin(), b.end());
    std::ofstream out(argv[3], std::ios::app);
    int output;
    output = Naive::Search(string_, substring_);
    out << "Legend: -1 if not found, -2 if not yet implemented, "
        <<"other number if found, else who knows\n";
    out << "Naive\n";
    out << output;
    output = Boyer_Moore::Search_bad(string_, substring_);
    out << "\nBoyer Moore\n";
    out << output;
    output = Knut_Morris_Pratt::Search(string_, substring_);
    out << "\nKnut Morris Pratt\n";
    out << output;
    output = Rabin_Karp::Search(string_, substring_);
    out << "\nRabin Karp\n";
    out << output;
    out.close();
}
