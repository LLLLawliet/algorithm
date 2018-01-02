//
// Created by Tao on 2018/1/3.
//

#ifndef ALGORITHM_VECTOR_H
#define ALGORITHM_VECTOR_H

#include <initializer_list>
template <typename T>
class Vector {
public:
    //constructor,destructor
    Vector();
    Vector(int _size);
    Vector(int _size, T _value);
    Vector(Vector<T>& V);
    ~Vector();

    //operator overlord
    Vector& operator=(const Vector& other);
    Vector& operator=(Vector&& other);
    Vector& operator=(std::initializer_list<T> iList);

    //capacity
    bool emtpy(){   return _size==0?true:false;}
    unsigned int size(){    return _size;};
    unsigned int capacity() {   return _capacity;}
    void reserve(int _size);
    void shrink_to_fit();



private:
    unsigned int _size;
    unsigned int _capacity;
};


#endif //ALGORITHM_VECTOR_H
