#include "mst.h"
#include <algorithm>
namespace ipd {
    WU_graph kruskal(const WU_graph &g) {
        WU_graph result(g.size());

        std::vector<WU_edge> edges = get_all_edges(g);
        std::sort(edges.begin(), edges.end(), operator<);

        Union_find uf(result.size());
        for (WU_edge &e:edges) {
            if (uf.find(e.u) != uf.find(e.v)) {
                result.add_edge(e.u, e.v, e.w);
                uf.do_union(e.u, e.v);
            }
        }

        return result;
    }


    bool operator<(WU_edge const &x, WU_edge const &y) {
        return (x.w < y.w);
    }
}