#include "Union_find.h"
#include <catch.h>

using namespace ipd;

TEST_CASE("Test: union find of size 0")
{
    Union_find uf(0);
    CHECK(0 == uf.size());
}

TEST_CASE("Test: union find of size 5")
{
    Union_find uf(5);
    CHECK(5 == uf.size());
    CHECK(uf.find(4) == 4);
    CHECK(uf.find(3) == 3);
    CHECK(uf.find(2) == 2);
}

TEST_CASE("Size 7 Union Find with union and find operations")
{
    Union_find uf(7);
    CHECK(7 == uf.size());
    CHECK(uf.find(0) == 0);
    CHECK(uf.find(6) == 6);

    uf.do_union(0,1);
    uf.do_union(1,2);
    uf.do_union(3,4);
    uf.do_union(5,6);
    uf.do_union(4,5);
    uf.do_union(2,6);

    CHECK(3 == uf.find(0));
    CHECK(3 == uf.find(1));
    CHECK(3 == uf.find(2));
    CHECK(3 == uf.find(3));
    CHECK(3 == uf.find(4));
    CHECK(3 == uf.find(5));
    CHECK(3 == uf.find(6));
    CHECK(2 == get_rank(uf, 3));
}

