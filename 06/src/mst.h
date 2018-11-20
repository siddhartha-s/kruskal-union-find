#pragma once

#include "WU_graph.h"
#include "Union_find.h"

namespace ipd
{

// Computes a minimum spanning forest by Kruskal's algorithm.
WU_graph kruskal(const WU_graph&);


//overloads the <operator to compare WU_edges `x` and `y`
bool operator<(WU_edge const&, WU_edge const&);
}
