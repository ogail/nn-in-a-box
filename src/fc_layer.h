
#ifndef FC_LAYER_H
#define FC_LAYER_H

#include <string>
#include "layer.h"
#include "variable.h"
#include "nonlinear_func.h"

namespace nnbox {
    class fc_layer: public layer {
    public:
        fc_layer(std::string name, variable weights, variable biases, nonlinear_func func) : layer(name),
            name(name), weights(weights), biases(biases), func(func) {}

        fc_layer(std::string name, variable weights, variable biases) : layer(name),
            name(name), weights(weights), biases(biases), func(nonlinear_func("")) {}

    private:
        std::string name;
        variable weights;
        variable biases;
        nonlinear_func func;
    };
}

#endif /* end of include guard: FC_LAYER_H */