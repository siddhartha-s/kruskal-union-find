#include "mst.h"
#include <catch.h>
#include <iostream>

using namespace ipd;

TEST_CASE("Finding an MST: Ensuring right weights are chosen ")
{
    WU_graph g(3);
    g.add_edge(0,1,1);
    g.add_edge(1,2,2);
    g.add_edge(2,0,7);

    WU_graph gmst = kruskal(g);

    CHECK(1 == gmst.get_edge(0,1));
    CHECK(2 == gmst.get_edge(1,2));
    CHECK(WU_graph::NO_EDGE == gmst.get_edge(2,0));

}

TEST_CASE("Finding an MST: Test to check avoiding cycles ")
{
    WU_graph g2(4);
    g2.add_edge(0,1,1);
    g2.add_edge(0,2,3);
    g2.add_edge(1,2,2);
    g2.add_edge(1,3,1);
    g2.add_edge(2,3,1);

    WU_graph gmst2 = kruskal(g2);

    CHECK(1 == gmst2.get_edge(0,1));
    CHECK(1 == gmst2.get_edge(1,3));
    CHECK(1 == gmst2.get_edge(2,3));
    CHECK(WU_graph::NO_EDGE == gmst2.get_edge(0,2));
    CHECK(WU_graph::NO_EDGE == gmst2.get_edge(1,2));
}

TEST_CASE("Finding an MST: 2 disconnected nodes")
{
    WU_graph g(2);

    WU_graph gmst = kruskal(g);

    CHECK(WU_graph::NO_EDGE == gmst.get_edge(0,1));
}

TEST_CASE("Finding an MST: Empty graph")
{
    WU_graph g(0);


    WU_graph gmst = kruskal(g);
    CHECK(0 == gmst.size());
}

TEST_CASE("Finding an MST: 2 disconnected graphs") {
    WU_graph g(7);
    g.add_edge(0, 1, 1);
    g.add_edge(1, 2, 1);
    g.add_edge(2, 0, 10);
    g.add_edge(3, 4, 1);
    g.add_edge(4, 5, 2);
    g.add_edge(5, 6, 1);
    g.add_edge(6, 3, 20);

    WU_graph gmst = kruskal(g);

    CHECK(1 == gmst.get_edge(0, 1));
    CHECK(1 == gmst.get_edge(1, 2));
    CHECK(WU_graph::NO_EDGE == gmst.get_edge(2, 0));
    CHECK(1 == gmst.get_edge(3, 4));
    CHECK(2 == gmst.get_edge(4, 5));
    CHECK(1 == gmst.get_edge(5, 6));
    CHECK(WU_graph::NO_EDGE == gmst.get_edge(6, 3));

    for(int i = 3; i<7; i++){
        CHECK(WU_graph::NO_EDGE == gmst.get_edge(0, i));
        CHECK(WU_graph::NO_EDGE == gmst.get_edge(1, i));
        CHECK(WU_graph::NO_EDGE == gmst.get_edge(2, i));
    }

}

