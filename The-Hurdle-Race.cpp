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
