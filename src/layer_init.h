
#ifndef LAYER_INIT_H
#define LAYER_INIT_H

#include <string>

namespace nnbox {
    class layer_init {
    public:
        layer_init(std::string name) {
            this->name = name;
        }
        
        std::string get_name() const { return name; }
    private:
        std::string name;
    };
}

#endif /* end of include guard: LAYER_INIT_H */