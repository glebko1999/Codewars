#include <iostream>
#include <vector>
using namespace std;

static long MY_findMissing(vector<long> list) {   // (Последнее - первое) / кол-во = шаг. Дальше просто найти где неправильный шаг.
    long long Step = ((int)list.back() - (int)list.front()) / (int)list.size();
    long long Sum = (list.size() * Step);
    Sum += (2 * list.front());
    Sum *= (long double)(list.size() + 1) / 2;
    for (auto& Elem : list)
    {
        Sum -= Elem;
    }
    return Sum;
}

#include <numeric>
static long BEST_findMissing(std::vector<long> list)
{
    long long expectedSum = (list.front() + list.back()) * (list.size() + 1);
    long long actualSum = std::accumulate(list.begin(), list.end(), 0ll);

    return (expectedSum - 2 * actualSum) / 2;
}

static long SECOND_BEST_findMissing(std::vector<long> list) {
    long diff = (list.back() - list.front()) / static_cast<long>(list.size());
    for (int i = 0; i < list.size(); ++i)  if (list[i] + diff != list[i + 1]) return list[i] + diff;
}