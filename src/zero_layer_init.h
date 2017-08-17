
#ifndef ZERO_LAYER_INIT_H
#define ZERO_LAYER_INIT_H

#include "layer_init.h"

namespace nnbox {
    class zero_layer_init: public layer_init {
    public:
        zero_layer_init() : layer_init("zero_init") {}
    };
}

#endif /* end of include guard: ZERO_LAYER_INIT_H */