#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'hurdleRace' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER k
 *  2. INTEGER_ARRAY height
 */

int hurdleRace(int k, vector<int> height)
{
    return std::max(*std::max_element(height.begin(), height.end())-k, 0);
}

int hurdleRace2(int k, vector<int> height)
{
    int result = 0;
    int max = *std::max_element(height.begin(), height.end());
    result = std::max(max-k, 0);

    return result;
}
