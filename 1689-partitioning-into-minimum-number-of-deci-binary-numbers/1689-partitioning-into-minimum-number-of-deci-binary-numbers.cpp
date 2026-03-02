class Solution {
public:
    int minPartitions(string n) {
        auto max_char_it = std::max_element(n.begin(), n.end());
        char largest_char = *max_char_it;
        int num = largest_char - '0';
        return num;
    }
};