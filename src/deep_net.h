
#ifndef DEEP_NET_H
#define DEEP_NET_H

#include <string>
#include <vector>
#include "layer.h"

namespace nnbox {
    class deep_net {
    public:
        deep_net(std::string name) {
            this->name = name;
        }

        std::string get_name() { return name; }

        void add_layer(layer net_layer) {
            layers.push_back(net_layer);
        }
        
    private:
        std::string name;
        std::vector<layer> layers;
    };
}

#endif /* end of include guard: DEEP_NET_H */

