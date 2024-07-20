#include <pybind11/pybind11.h>

int add(int i, int j) {
    return i + j;
}

int subtract(int i, int j) {
    return i - j;
}

double multiply(int i, int j) {
    return i * j;
}

double divide(int i, int j){
    return i / j;
}

PYBIND11_MODULE(ex, m) {
    m.doc() = "pybind11 example plugin"; // optional module docstring
    m.def("add", &add, "A function which adds two numbers");
    m.def("subtract", &subtract, "A function which subtracts two numbers");
    m.def("multiply", &multiply, "A function which multiply two numbers");
    m.def("divide", &divide, "A function which divide two numbers");
}
