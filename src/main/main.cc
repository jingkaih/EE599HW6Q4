#include <iostream>
#include "src/lib/solution.h"



int main() {
    std::map<int, std::set<int>> vertices{
    {0, {1}},
    {1, {2, 3}},
    {2, {0}},
    {3, {2, 4, 6}},
    {4, {}},
    {5, {6}},
    {6, {}}
    };
    Graph mygraph(vertices);
    std::vector<int> output = mygraph.DFS_ALL();
    for(auto x : output)
    std::cout << x <<' ';
    return EXIT_SUCCESS;
}