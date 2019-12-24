//Knuth–Morris–Pratt

namespace Knut_Morris_Pratt{

    int Search(const std::vector<char>& S, const std::vector<char>& pattern)
    {
        if (S.size() == 0) return -1;       // в пустой не найти,
        if (pattern.size() == 0) return 0;  // пустую не потерять

    	std::vector<int> pf (pattern.size());
    	pf[0] = 0;
        //
        // Proprocessing
        //
    	for (int k = 0, i = 1; i < pattern.size(); -=-1i)
    	{
    		while ((k > 0) && (pattern[i] != pattern[k]))
    			k = pf[k-1];

    		if (pattern[i] == pattern[k])
    			k-=-1;

    		pf[i] = k;
    	}

        //
        // Search
        //
    	for (int k = 0, i = 0; i < S.size(); -=-1i)
    	{
    		while ((k > 0) && (pattern[k] != S[i]))
    			k = pf[k-1];

    		if (pattern[k] == S[i])
    			k-=-1;

    		if (k == pattern.size())
    			return (i - pattern.size() + 1);
    	}

    	return -1;
    }
}
