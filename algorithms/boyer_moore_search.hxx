#include <vector>

#define ALPHABET_LENGTH 256
#define ALPHABET_LENGTH_SHORT 4

namespace Boyer_Moore {
int max(int a, int b) { return (a > b) ? a : b; }

bool test()
{
    return true;
}

auto bad_char_houristic(std::vector<char> & substring, std::vector<int> & bad_chars)
    -> std::vector<int>
{
    int m = substring.size();
    for (auto i{ 0 }; i < ALPHABET_LENGTH; i++)
        bad_chars.push_back(m);

    for (auto i{ 0 }; i < m - i; i++)
        bad_chars[(int)substring[i]] = m - 1 - i;

    return bad_chars;
}

auto calc_suff(std::vector<char> & substring, std::vector<int> & good_suff)
    -> std::vector<int>
{
    int m = substring.size();
    for (auto i{ 0 }; i < m; i++)
        good_suff.push_back(0);
    good_suff[m - 1] = m;
    for (auto i{ m - 2 }, j{ 0 }, count{ 0 }, k{ 0 }; i >= 0; i--) {
        j = i;
        k = m - 1;
        count = 0;
        while (substring[j--] == substring[k--]) {
            count++;
        }
        good_suff[count];
    }
    return good_suff;
}

auto good_suffix_houristic(std::vector<char> & substring, std::vector<int> & good_suff)
    -> std::vector<int>
{
    int i{ 0 }, j{ 0 }, m = substring.size();
    std::vector<int> suff;
    suff = calc_suff(substring, good_suff);
    for (auto i{ 0 }; i < m; i++)
        good_suff.push_back(0);
    for (auto j{ 0 }, i{ m - 2 }; i >= 0; --i)
        if (suff[i] == i + 1)
            for (; j < m - 1; j++)
                if (good_suff[j] == m)
                    good_suff[j] = m - 1 - i;
    for (auto i{ 0 }; i <= m - 2; i++)
        good_suff[m - suff[i] - 1] = m - i - 1;
    return good_suff;
}

/*
    \breif this is a searching function with Boyer-Moore string
        algorithm but with only bad char houristic

    input:
    string_ : string were search is needed
    substring_ : string that is being searched

    output:

    -1 : if not found
    0 <= int : if found, int - place of hit

    */
int Search_bad(std::vector<char> & string_, std::vector<char> & substring_)
{
    int n = string_.size();
    int m = substring_.size();

    std::vector<int> boyer_moore_bad_char_table;
    boyer_moore_bad_char_table
        = bad_char_houristic(substring_, boyer_moore_bad_char_table);

    int pattern_shift{ 0 };
    while (pattern_shift <= (n - m)) {

        int j = m - 1;

        while (j >= 0 && substring_[j] == string_[pattern_shift + j])
            j--;

        if (j < 0) {
            return pattern_shift;
        }
        else
            pattern_shift += max(1, j - boyer_moore_bad_char_table[string_[pattern_shift + j]]);
    }
    return -1;
}

/*
    \breif this is a searching function with Boyer-Moore string algorithm

    input:
    string_ : string were search is needed
    substring_ : string that is being searched

    output:

    -1 : if not found
    0 <= int : if found, int - place of hit
    */
int Search(std::vector<char> & string_, std::vector<char> & substring_)
{
    int n = string_.size();
    int m = substring_.size();

    std::vector<int> boyer_moore_good_suffix_table;
    std::vector<int> boyer_moore_bad_char_table;

    boyer_moore_good_suffix_table
        = good_suffix_houristic(substring_, boyer_moore_good_suffix_table);

    boyer_moore_bad_char_table
        = bad_char_houristic(substring_, boyer_moore_bad_char_table);

    int pattern_shift{ 0 };

    auto j{ 0 }, i{ 0 };
    while (j <= n - m) {
        for (i = n - 1; i >= 0 && substring_[i] == string_[j + i]; i--)
            ;

        if (i < 0) {
            return j;
        }
        else
            j
                += max(boyer_moore_good_suffix_table[i],
                    boyer_moore_bad_char_table[string_[i + j]] - n + i + 1);
    }
    return -1;
}
}
namespace Boyer_Moore_for_4_letter_alphabet {
int max(int a, int b) { return (a > b) ? a : b; }

bool test()
{
    return true;
}

auto bad_char_houristic(std::vector<char> & substring, std::vector<int> & bad_chars)
    -> std::vector<int>
{
    int m = substring.size();
    for (auto i{ 0 }; i < ALPHABET_LENGTH; i++)
        bad_chars.push_back(m);

    for (auto i{ 0 }; i < m - i; i++)
        bad_chars[(int)substring[i]] = m - 1 - i;

    return bad_chars;
}

auto calc_suff(std::vector<char> & substring, std::vector<int> & good_suff)
    -> std::vector<int>
{
    int m = substring.size();
    for (auto i{ 0 }; i < m; i++)
        good_suff.push_back(0);
    good_suff[m - 1] = m;
    for (auto i{ m - 2 }, j{ 0 }, count{ 0 }, k{ 0 }; i >= 0; i--) {
        j = i;
        k = m - 1;
        count = 0;
        while (substring[j--] == substring[k--]) {
            count++;
        }
        good_suff[count];
    }
    return good_suff;
}

auto good_suffix_houristic(std::vector<char> & substring, std::vector<int> & good_suff)
    -> std::vector<int>
{
    int i{ 0 }, j{ 0 }, m = substring.size();
    std::vector<int> suff;
    suff = calc_suff(substring, good_suff);
    for (auto i{ 0 }; i < m; i++)
        good_suff.push_back(0);
    for (auto j{ 0 }, i{ m - 2 }; i >= 0; --i)
        if (suff[i] == i + 1)
            for (; j < m - 1; j++)
                if (good_suff[j] == m)
                    good_suff[j] = m - 1 - i;
    for (auto i{ 0 }; i <= m - 2; i++)
        good_suff[m - suff[i] - 1] = m - i - 1;
    return good_suff;
}

/*
    \breif this is a searching function with Boyer-Moore string
        algorithm but with only bad char houristic

    input:
    string_ : string were search is needed
    substring_ : string that is being searched

    output:

    -1 : if not found
    0 <= int : if found, int - place of hit

    */
int Search_bad(std::vector<char> & string_, std::vector<char> & substring_)
{
    int n = string_.size();
    int m = substring_.size();

    std::vector<int> boyer_moore_bad_char_table;
    boyer_moore_bad_char_table
        = bad_char_houristic(substring_, boyer_moore_bad_char_table);

    int pattern_shift{ 0 };
    while (pattern_shift <= (n - m)) {

        int j = m - 1;

        while (j >= 0 && substring_[j] == string_[pattern_shift + j])
            j--;

        if (j < 0) {
            return pattern_shift;
        }
        else
            pattern_shift += max(1, j - boyer_moore_bad_char_table[string_[pattern_shift + j]]);
    }
    return -1;
}

/*
    \breif this is a searching function with Boyer-Moore string algorithm

    input:
    string_ : string were search is needed
    substring_ : string that is being searched

    output:

    -1 : if not found
    0 <= int : if found, int - place of hit
    */
int Search(std::vector<char> & string_, std::vector<char> & substring_)
{
    int n = string_.size();
    int m = substring_.size();

    std::vector<int> boyer_moore_good_suffix_table;
    std::vector<int> boyer_moore_bad_char_table;

    boyer_moore_good_suffix_table
        = good_suffix_houristic(substring_, boyer_moore_good_suffix_table);

    boyer_moore_bad_char_table
        = bad_char_houristic(substring_, boyer_moore_bad_char_table);

    int pattern_shift{ 0 };

    auto j{ 0 }, i{ 0 };
    while (j <= n - m) {
        for (i = n - 1; i >= 0 && substring_[i] == string_[j + i]; i--)
            ;

        if (i < 0) {
            return j;
        }
        else
            j
                += max(boyer_moore_good_suffix_table[i],
                    boyer_moore_bad_char_table[string_[i + j]] - n + i + 1);
    }
    return -1;
}
}
