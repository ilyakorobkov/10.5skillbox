#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include "vector_functions.cpp"
#include "vector3d.cpp"

namespace py = pybind11;

PYBIND11_MODULE(vector_module, m) {
    m.def("add", &add, "A function that adds two vectors");
    m.def("subtract", &subtract, "A function that subtracts two vectors");
    m.def("dot_product", &dot_product, "A function that computes the dot product of two vectors");

    py::class_<Vector3D>(m, "Vector3D")
        .def(py::init<double, double, double>())
        .def("length", &Vector3D::length)
        .def("normalize", &Vector3D::normalize)
        .def_readwrite("x", &Vector3D::x)
        .def_readwrite("y", &Vector3D::y)
        .def_readwrite("z", &Vector3D::z);
}
