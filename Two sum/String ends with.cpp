#include <iostream>
#include <vector>

std::pair<std::size_t, std::size_t> BEST_two_sum(const std::vector<int>& numbers, int target) {
    for (auto i = 0; i < numbers.size(); i++)
        for (auto j = i + 1; j < numbers.size(); j++)
            if (numbers[i] + numbers[j] == target) return { i, j };
}

std::pair<std::size_t, std::size_t> MY_two_sum(const std::vector<int>& numbers, int target) {
    for (unsigned int i = 0; i < numbers.size() - 1; i++)
    {
        for (unsigned int j = i + 1; j < numbers.size(); j++)
        {
            // std::cout << "|Numbers:" << numbers[i] << ";" << numbers[j] << "|Sum:" << numbers[i] + numbers[j] << "|Target:" << target << std::endl;
            if (numbers[i] + numbers[j] == target)
            {
                //  std::cout << "Target";
                return { i,j };
            }
        }
    }
}

