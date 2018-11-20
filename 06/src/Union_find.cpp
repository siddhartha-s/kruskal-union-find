#include "Union_find.h"

namespace ipd
{

    Union_find::Union_find(size_t n) {
        for(size_t i = 0; i < n; i++){
            uset.push_back({i,0});
        }

    }

    size_t Union_find::size() const {
        return uset.size();
    }

    void Union_find::do_union(size_t x, size_t y)
    {

        size_t parent_x = find(x);
        size_t parent_y = find(y);
        if(parent_x == parent_y)
            return;
        else if(uset.at(parent_x).rank_==uset.at(parent_y).rank_){
            uset.at(parent_y).parent_=x;
            uset.at(parent_x).rank_ += 1;
        }
        else if(uset.at(parent_x).rank_>uset.at(parent_y).rank_){
            uset.at(parent_y).parent_=x;
        }
        else{
            uset.at(parent_x).parent_=y;
        }

    }

    size_t Union_find::find(size_t x) {
        size_t parent = uset.at(x).parent_;

            if(parent  == x){
                return parent;
            }
            uset.at(x).parent_ = find(uset.at(x).parent_);
            return uset.at(x).parent_;
    }

    size_t get_rank(Union_find const& u, size_t x)
    {
        return u.uset.at(x).rank_;
    }

}

