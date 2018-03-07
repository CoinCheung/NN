#ifndef _LAYER_H_
#define _LAYER_H_


#include<memory>
#include"Matrix.hpp"


typedef Matrix2<double> MATRIX;

// base class for other layers
class Layer
{
    public:
        virtual MATRIX forward(MATRIX&)=0;
        virtual MATRIX backward(MATRIX&)=0;
        virtual ~Layer(){};
};



#endif