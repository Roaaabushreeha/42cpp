
#include "PmergeMe.hpp"
#include <algorithm>
#include <utility>
#include <cstddef>

struct Item
{
    int value;
    std::size_t id;

    Item() : value(0), id(0) {}
    Item(int v, std::size_t i) : value(v), id(i) {}
};

struct CompareItemValue
{
    bool operator()(const Item &a, const Item &b) const
    {
        return a.value < b.value;
    }
};

static std::vector<Item>::iterator findByIdVector(std::vector<Item> &c, std::size_t id)
{
    for (std::vector<Item>::iterator it = c.begin(); it != c.end(); ++it)
    {
        if (it->id == id)
            return it;
    }
    return c.end();
}

static std::deque<Item>::iterator findByIdDeque(std::deque<Item> &c, std::size_t id)
{
    for (std::deque<Item>::iterator it = c.begin(); it != c.end(); ++it)
    {
        if (it->id == id)
            return it;
    }
    return c.end();
}

static void buildJacobsthalOrder(std::vector<std::size_t> &order, std::size_t m)
{
    if (m <= 1)
        return;

    std::vector<std::size_t> jac;
    jac.push_back(1);
    jac.push_back(3);

    while (jac.back() < m)
        jac.push_back(jac[jac.size() - 1] + 2 * jac[jac.size() - 2]);

    std::size_t prev = 1;
    for (std::size_t i = 1; i < jac.size(); ++i)
    {
        std::size_t curr = jac[i];
        if (curr > m)
            curr = m;

        for (std::size_t j = curr; j > prev; --j)
            order.push_back(j - 1);

        prev = curr;
        if (prev >= m)
            break;
    }

    for (std::size_t j = m; j > prev; --j)
        order.push_back(j - 1);
}

// Ford–Johnson for std::vector<Item>, using bounded insertion up to the paired big.
static void fordJohnsonVector(std::vector<Item> &input)
{
    if (input.size() <= 1)
        return;

    const std::size_t n = input.size();
    const bool hasStraggler = (n % 2 != 0);
    const Item straggler = hasStraggler ? input[n - 1] : Item();

    std::vector< std::pair<Item, Item> > pairs;
    pairs.reserve(n / 2);
    for (std::size_t i = 0; i + 1 < n; i += 2)
    {
        Item a = input[i];
        Item b = input[i + 1];
        if (b.value < a.value)
            std::swap(a, b);
        pairs.push_back(std::make_pair(a, b));
    }

    std::vector<Item> pend;
    std::vector<Item> bigChain;
    std::vector<std::size_t> pairedBigIds;
    pend.reserve(pairs.size());
    bigChain.reserve(pairs.size());
    pairedBigIds.reserve(pairs.size());

    for (std::size_t i = 0; i < pairs.size(); ++i)
    {
        pend.push_back(pairs[i].first);
        bigChain.push_back(pairs[i].second);
        pairedBigIds.push_back(pairs[i].second.id);
    }

    fordJohnsonVector(bigChain);

    std::vector<Item> mainChain = bigChain;
    CompareItemValue cmp;

    if (!pend.empty())
    {
        std::vector<Item>::iterator bigIt = findByIdVector(mainChain, pairedBigIds[0]);
        std::vector<Item>::iterator bound = (bigIt == mainChain.end()) ? mainChain.end() : (bigIt + 1);
        mainChain.insert(std::lower_bound(mainChain.begin(), bound, pend[0], cmp), pend[0]);

        std::vector<std::size_t> order;
        buildJacobsthalOrder(order, pend.size());

        for (std::size_t i = 0; i < order.size(); ++i)
        {
            const std::size_t idx = order[i];
            if (idx == 0 || idx >= pend.size())
                continue;

            bigIt = findByIdVector(mainChain, pairedBigIds[idx]);
            bound = (bigIt == mainChain.end()) ? mainChain.end() : (bigIt + 1);
            mainChain.insert(std::lower_bound(mainChain.begin(), bound, pend[idx], cmp), pend[idx]);
        }
    }

    if (hasStraggler)
        mainChain.insert(std::lower_bound(mainChain.begin(), mainChain.end(), straggler, cmp), straggler);

    input.assign(mainChain.begin(), mainChain.end());
}

// Ford–Johnson for std::deque<Item>, using bounded insertion up to the paired big.
static void fordJohnsonDeque(std::deque<Item> &input)
{
    if (input.size() <= 1)
        return;

    const std::size_t n = input.size();
    const bool hasStraggler = (n % 2 != 0);
    const Item straggler = hasStraggler ? input[n - 1] : Item();

    std::vector< std::pair<Item, Item> > pairs;
    pairs.reserve(n / 2);
    for (std::size_t i = 0; i + 1 < n; i += 2)
    {
        Item a = input[i];
        Item b = input[i + 1];
        if (b.value < a.value)
            std::swap(a, b);
        pairs.push_back(std::make_pair(a, b));
    }

    std::deque<Item> pend;
    std::deque<Item> bigChain;
    std::vector<std::size_t> pairedBigIds;
    pairedBigIds.reserve(pairs.size());

    for (std::size_t i = 0; i < pairs.size(); ++i)
    {
        pend.push_back(pairs[i].first);
        bigChain.push_back(pairs[i].second);
        pairedBigIds.push_back(pairs[i].second.id);
    }

    fordJohnsonDeque(bigChain);

    std::deque<Item> mainChain = bigChain;
    CompareItemValue cmp;

    if (!pend.empty())
    {
        std::deque<Item>::iterator bigIt = findByIdDeque(mainChain, pairedBigIds[0]);
        std::deque<Item>::iterator bound = (bigIt == mainChain.end()) ? mainChain.end() : (bigIt + 1);
        mainChain.insert(std::lower_bound(mainChain.begin(), bound, pend[0], cmp), pend[0]);

        std::vector<std::size_t> order;
        buildJacobsthalOrder(order, pend.size());

        for (std::size_t i = 0; i < order.size(); ++i)
        {
            const std::size_t idx = order[i];
            if (idx == 0 || idx >= pend.size())
                continue;

            bigIt = findByIdDeque(mainChain, pairedBigIds[idx]);
            bound = (bigIt == mainChain.end()) ? mainChain.end() : (bigIt + 1);
            mainChain.insert(std::lower_bound(mainChain.begin(), bound, pend[idx], cmp), pend[idx]);
        }
    }

    if (hasStraggler)
        mainChain.insert(std::lower_bound(mainChain.begin(), mainChain.end(), straggler, cmp), straggler);

    input.assign(mainChain.begin(), mainChain.end());
}

// ================= VECTOR VERSION =================

void PmergeMe::sortVector(std::vector<int> &input)
{
    if (input.size() <= 1)
        return;

    std::vector<Item> items;
    items.reserve(input.size());
    for (std::size_t i = 0; i < input.size(); ++i)
        items.push_back(Item(input[i], i));

    fordJohnsonVector(items);

    for (std::size_t i = 0; i < items.size(); ++i)
        input[i] = items[i].value;
}

// ================= DEQUE VERSION =================

void PmergeMe::sortDeque(std::deque<int> &input)
{
    if (input.size() <= 1)
        return;

    std::deque<Item> items;
    for (std::size_t i = 0; i < input.size(); ++i)
        items.push_back(Item(input[i], i));

    fordJohnsonDeque(items);

    for (std::size_t i = 0; i < items.size(); ++i)
        input[i] = items[i].value;

}
