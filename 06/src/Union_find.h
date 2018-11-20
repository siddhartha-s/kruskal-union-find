#pragma once

#include <cstddef>
#include<vector>

namespace ipd
{
    //A distinct set structure, representing parent and rank of the set
    struct dset{
        size_t parent_;
        size_t rank_;
    };

// A union-find object representing disjoint sets of `size()` objects.
class Union_find
{
public:
    // Creates a new union-find of `n` objects.
    explicit Union_find(size_t n);

    // Returns the number of objects in the union-find.
    size_t size() const;

    // Unions the sets specified by the two given objects.
    void do_union(size_t, size_t);

    // Finds the set representative for a given object.
    size_t find(size_t);


private:

    std::vector<dset> uset;

    //returns rank of `u`, used in test cases.
    friend size_t get_rank(Union_find const&, size_t);

};


}
