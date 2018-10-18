#ifndef DEP_SORT_STL_H
#define DEP_SORT_STL_H

#include "dep_sort.h"

// template alias dep_sort around std::vector/std::unordered_set/std::unordered_map
#include <vector>
#include <unordered_map>
#include <unordered_set>

template<typename T>
using dep_sort_stl = dep_sort<T, std::vector, std::unordered_set, std::unordered_map>;

#endif
