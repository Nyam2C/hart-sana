#include <torch/extension.h>
#include <pybind11/pybind11.h>
#include <torch/extension.h>

#include "layernorm/layernorm.h"



// Bind the function to Python
PYBIND11_MODULE(TORCH_EXTENSION_NAME, m) {
    m.def("rms_norm", &rms_norm, py::arg("out"), py::arg("input"),
    py::arg("weight"), py::arg("epsilon"), py::arg("use_quant") = false,
    "Apply Root Mean Square (RMS) Normalization to the input tensor.");
}