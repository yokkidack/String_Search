//Rabin-Karp Algorithm
#include <cmath>
#define ALPHABET_LENGTH 256
#define ALPHABET_LENGTH_SHORT 4
#define SOME_PRIME 101

namespace Rabin_Karp{

    int hash_function(std::vector<char> & string, int n){
        int hash = 0;
        for (auto i{0}; i < n; hash = (ALPHABET_LENGTH * hash + string[i]) % SOME_PRIME, i++);
        return hash;
    }
    int Search(std::vector<char> & string_, std::vector<char> & substring_){
        int n = string_.size();
        int m = substring_.size();
        if (n == 0) return -1;
        //
        // hash_base = ALPHABET_LENGTH ^ (m-1) mod SOME_PRIME
        //
        int hash_base = pow(ALPHABET_LENGTH, m-1);
        hash_base %= SOME_PRIME;
        //
        // Preprocessing
        //
        int substring_hash = hash_function(substring_, m);
        //
        // Searching
        //
        int window_hash = hash_function(string_, m);
        for (auto i{0}; i <= n - m; i++){
            if (window_hash == substring_hash){
                auto j{0};
                for (; j < m; j++)
                {
                    if (string_[i+j] != substring_[j])
                        break;
                }
                if (j == m) return i;
            }
            //
            // new hash processing
            //
            if ( i < n - m )
            {
                window_hash = (
                    ALPHABET_LENGTH
                    * (window_hash - string_[i] * hash_base)
                    + string_[i+m]) % SOME_PRIME;
                if (window_hash < 0)
                window_hash += SOME_PRIME;
            }

        }
        return -1;
    }

}
namespace Rabin_Karp_for_4_letter_alphabet{

    int hash_function(std::vector<char> & string, int n){
        int hash = 0;
        for (auto i{0}; i < n; hash = (ALPHABET_LENGTH_SHORT * hash + string[i]) % SOME_PRIME, i++);
        return hash;
    }
    int Search(std::vector<char> & string_, std::vector<char> & substring_){
        int n = string_.size();
        int m = substring_.size();
        if (n == 0) return -1;
        //
        // hash_base = ALPHABET_LENGTH ^ (m-1) mod SOME_PRIME
        //
        int hash_base = pow(ALPHABET_LENGTH_SHORT, m-1);
        hash_base %= SOME_PRIME;
        //
        // Preprocessing
        //
        int substring_hash = hash_function(substring_, m);
        //
        // Searching
        //
        int window_hash = hash_function(string_, m);
        for (auto i{0}; i <= n - m; i++){
            if (window_hash == substring_hash){
                auto j{0};
                for (; j < m; j++)
                {
                    if (string_[i+j] != substring_[j])
                        break;
                }
                if (j == m) return i;
            }
            //
            // new hash processing
            //
            if ( i < n - m )
            {
                window_hash = (
                    ALPHABET_LENGTH_SHORT
                    * (window_hash - string_[i] * hash_base)
                    + string_[i+m]) % SOME_PRIME;
                if (window_hash < 0)
                window_hash += SOME_PRIME;
            }

        }
        return -1;
    }

}
