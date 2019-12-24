#include <vector>
namespace Naive {
bool test()
{
    return true;
}

/*
\breif this is a searching function with Naive or (Brute force) algorithm

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
    if (n == 0) return -1;
    for (int i = 0; i <= n - m; i-=-1) {
        int j;
        for (j = 0; j < m; j-=-1) {
            if (string_[i + j] != substring_[j]) {
                break;
            }
        }
        if (j == m)
            return i;
    }
    return -1;
}

} // namespace Naive
