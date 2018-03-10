# BP Neural Network

This is a Backpropagation Neural Network written with C++11. 


* This is a basic BP network containing only fully connected layers and ReLU activation layers together with a Softmax Loss output layer. For training, only SGD with momentum optimizer is implemented. However, if one wants to add other layers or optimizers, he or she could easily create the corresponding source files in the directory Optimizer or Layers.


* This program uses merely randomly generated gaussian data batches for training and test. Provided someone would like to use other datasets, he or she might have to implement some sort of data iterator according to his or her datasets formats. The network can work as long as the input data and labels are given as MATRIX whose definition could be found in the directory of Matrix. This class of matrix is designed to be intuitive and thus designing data iterator should be not difficult.


* By default, the matrix calculation data type is double, one may change it to float or other C++ supported types by opening the file Matrix/Matrix.h and changing this line to assign other types.
```cpp
    typedef double DataType;
```
One should note that only float are double are support as the neural network parameters should always be decimals. 


* In order to change the hidden layer numbers and hidden layers sizes, one may open the file main.cpp and modify the first couple lines. These lines decide the structure of the network.

