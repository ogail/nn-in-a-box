
#ifndef GAUSSIAN_DIST_LAYER_INIT_H
#define GAUSSIAN_DIST_LAYER_INIT_H

#include "layer_init.h"

namespace nnbox {
    class gaussian_dist_layer_init: public layer_init {
    public:
        gaussian_dist_layer_init(double mean, double stdev) : layer_init("gaussian_dist_init") {
            this->mean = mean;
            this->stdev = stdev;
        }

    private:
        double mean;
        double stdev;
    };
}

#endif /* end of include guard: GAUSSIAN_DIST_LAYER_INIT_H */