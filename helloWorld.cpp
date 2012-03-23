#include <Python.h>
#include <iostream>
using namespace std;

static PyObject * print_hello_world(PyObject *self, PyObject *args)
{
    wstring w = L"hello";
    PyObject *list = PySet_New(NULL);
    PySet_Add(list, Py_BuildValue("O", PyUnicode_FromWideChar(w.c_str(), w.length())));
    //PyList_Append(list, Py_BuildValue("O", PyUnicode_FromWideChar(w.c_str(), w.length())));
    return Py_BuildValue("O", list);
}

static PyMethodDef HelloWorldMethods[] = {
    {"printHelloWorld",  print_hello_world, METH_VARARGS, "Prints hello World"},
    {NULL, NULL, 0, NULL}
};

PyMODINIT_FUNC inithelloWorld(void)
{
    (void) Py_InitModule("helloWorld", HelloWorldMethods);
}

int main(void) {
    return 0;
}
