
#include <stdio.h>
#include <vector>
#include "deep_net.h"
#include "mnist/include/mnist/mnist_reader.hpp"
#include "variable.h"
#include "fc_layer.h"
#include "gaussian_dist_layer_init.h"
#include "zero_layer_init.h"
#include "nonlinear_func.h"

const int MNIST_NUM_CLASSES = 10;
const int MNIST_IMAGE_SIZE = 28;
const int HIDDEN_1 = 128;
const int HIDDEN_2 = 32;

using namespace nnbox;

int main(int argc, char *argv[]) {
    printf("Loading MNIST data...\n");
    auto dataset = mnist::read_dataset<std::vector, std::vector, uint8_t, uint8_t>("../src/mnist");
    printf("training images %d\n", (int)dataset.training_images.size());
    printf("training labels %d\n", (int)dataset.training_labels.size());
    printf("test images %d\n", (int)dataset.test_images.size());
    printf("test labels %d\n", (int)dataset.test_labels.size());

    printf("Constructing deep network...\n");
    // 2 hidden layer fully connected network, reference implementation: https://github.com/tensorflow/tensorflow/blob/master/tensorflow/examples/tutorials/mnist/mnist.py 
    deep_net fc_net = deep_net("mnist fc_network");
    // create first hidden layer
    variable weights1 = variable(MNIST_IMAGE_SIZE, HIDDEN_1, gaussian_dist_layer_init(0, 1));
    variable biases1 = variable(HIDDEN_1, zero_layer_init());
    layer hidden1 = fc_layer("hidden_1", weights1, biases1, nonlinear_func("relu"));
    // create second hidden layer
    variable weights2 = variable(HIDDEN_1, HIDDEN_2, gaussian_dist_layer_init(0, 1));
    variable biases2 = variable(HIDDEN_2, zero_layer_init());
    layer hidden2 = fc_layer("hidden_2", weights2, biases2, nonlinear_func("relu"));
    // create final layer
    variable weights = variable(HIDDEN_2, MNIST_NUM_CLASSES, gaussian_dist_layer_init(0, 1));
    variable biases = variable(MNIST_NUM_CLASSES, zero_layer_init());
    layer logits = fc_layer("final", weights, biases);
    
    fc_net.add_layer(hidden1);
    fc_net.add_layer(hidden2);
    fc_net.add_layer(logits);

    printf("Constructing training configuration...\n");
    // TODO: add loss, training configuration, etc...

    printf("Training...\n");
    // TODO: train the network

    printf("Evaluating trained model...\n");
    int accuracy = 0;
    // TODO: evaluate the model

    printf("accuracy is %d...\n", accuracy);
    
    return 0;
}


