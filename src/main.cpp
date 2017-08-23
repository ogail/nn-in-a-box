#include <stdio.h>
#include "mnist/mnist_reader.hpp"

int main(int argc, char *argv[]) {
    printf("Loading MNIST data...\n");
    auto dataset = mnist::read_dataset<std::vector, std::vector, uint8_t, uint8_t>("../src/mnist");
    printf("training images %d\n", (int)dataset.training_images.size());
    printf("training labels %d\n", (int)dataset.training_labels.size());
    printf("test images %d\n", (int)dataset.test_images.size());
    printf("test labels %d\n", (int)dataset.test_labels.size());
    return 0;
}


