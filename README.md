
# Neural Network in a Box

Neural network in a box is an educational project for MNIST Deep Network training implemented in native C++ from scratch!  Yes, no TensorFlow, no black boxes, everything is exposed!

This repo has a submodule, to successfully clone is, run

    $ git clone https://github.com/ogail/nn-in-a-box.git && cd nn-in-a-box && git checkout dev
    $ git submodule update --init --recursive

To build the project and execute the training, run

    $ mkdir build && cd build && cmake .. && make
    $ ./bin/nn-in-a-box
    
To run the unit tests using googletest, run

    $ make check
