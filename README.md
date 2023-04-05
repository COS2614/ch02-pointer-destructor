# ch02-pointer-destructor
## This example implements a destructor for a class that uses a raw pointer

In this example, we have a class MyClass that has a dynamically allocated integer array data_ as a data member. The constructor allocates memory for this array using the new operator, and the destructor deallocates the memory using the delete[] operator.

When an object of MyClass is created in main(), the constructor is called and allocates memory for data_. When the object goes out of scope at the end of main(), the destructor is called and deallocates the memory for data_.

It's important to implement a destructor when a class has a pointer data member, to ensure that the memory allocated for that data member is properly deallocated when the object is destroyed. If a destructor is not implemented, this could lead to memory leaks and other issues.
