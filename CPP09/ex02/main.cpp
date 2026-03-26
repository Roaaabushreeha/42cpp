#include "PmergeMe.hpp"
#include <iostream>
#include <vector>
#include <deque>
#include <cstdlib>
#include <climits>
#include <time.h>
#include <iomanip>

static long long monotonicTimeNs()
{
   struct timespec ts;
    clock_gettime(CLOCK_MONOTONIC, &ts);
    return ts.tv_sec * 1000000.0 + ts.tv_nsec / 1000.0;
}

static bool isPositiveNumber(const char *s)
{
    if (!s || !*s)
        return false;

    for (int i = 0; s[i]; ++i)
    {
        if (s[i] < '0' || s[i] > '9')
            return false;
    }
    return true;
}

static bool parseInput(int argc, char **argv, std::vector<int> &numbers)
{
    for (int i = 1; i < argc; ++i)
    {
        if (!isPositiveNumber(argv[i]))
            return false;

        long value = std::strtol(argv[i], NULL, 10);
        if (value <= 0 || value > INT_MAX)
            return false;

        numbers.push_back(static_cast<int>(value));
    }
    return true;
}

template <typename T>
static void printSequence(const T &c)
{
    for (typename T::const_iterator it = c.begin(); it != c.end(); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

static double measureVectorSortUs(const std::vector<int> &input, std::vector<int> &sorted)
{
    const long long start = monotonicTimeNs();
    sorted = input;
    PmergeMe::sortVector(sorted);
    const long long end = monotonicTimeNs();
    return static_cast<double>(end - start) / 1000.0;
}

static double measureDequeSortUs(const std::vector<int> &input, std::deque<int> &sorted)
{
    const long long start = monotonicTimeNs();
    sorted.assign(input.begin(), input.end());
    PmergeMe::sortDeque(sorted);
    const long long end = monotonicTimeNs();
    return static_cast<double>(end - start) / 1000.0;
}

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        std::cerr << "Error" << std::endl;
        return 1;
    }

    std::vector<int> input;
    if (!parseInput(argc, argv, input))
    {
        std::cerr << "Error" << std::endl;
        return 1;
    }

    std::vector<int> vec;
    std::deque<int> deq;

    std::cout << "Before: ";
    printSequence(input);

    const double timeVec = measureVectorSortUs(input, vec);
    const double timeDeq = measureDequeSortUs(input, deq);

    std::cout << "After:  ";
    printSequence(vec);

    std::cout << std::fixed << std::setprecision(5);
    std::cout << "Time to process a range of "
              << vec.size()
              << " elements with std::vector : "
              << timeVec << " us" << std::endl;
    std::cout << "Time to process a range of "
              << deq.size()
              << " elements with std::deque  : "
              << timeDeq << " us" << std::endl;
    return 0;
}
