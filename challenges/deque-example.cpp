#include <iostream>
#include <deque>

int main()
{
    // Create a deque containing integers
    std::deque<int> d = {7, 5, 16, 8};
    int v;

    // Add an integer to the beginning and end of the deque
    d.push_front(d.back());
    d.pop_back();

    // Iterate and print values of deque
    for(int n : d) {
        std::cout << n << '\n';
    }
}