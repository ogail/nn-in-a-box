
#ifndef LAYER_H
#define LAYER_H

#include <string>

namespace nnbox {
    class layer {
    public:
        layer(std::string name) {
            this->name = name;
        }
        
        std::string get_name() const { return name; }
    private:
        std::string name;
    };
}

#endif /* end of include guard: LAYER_H */