#include "common.h"

int main()
{
    // Your code starts here

    std::cout << "Hello, world!" << std::endl;
    priority_queue<pair<int, int>> pq;

    pq.push({1, 2});
    pq.push({3, 3});
    pq.push({2, 1});

    std::cout << pq.top().first << std::endl;

    pq.pop();

    std::cout << pq.top().first << std::endl;

    return 0;
}
