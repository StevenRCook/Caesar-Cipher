// CaesarCipherList.cpp
// Implementation file for the CaesarCipherList class
#include "CaesarCipherList.h"
using namespace std;

// Constructor
CaesarCipherList::CaesarCipherList(int size) {
    numElements = 0;
    this->capacity = size;
    list = new CaesarCipher[size];
    //for (int i = 0; i < size; i++)    // not required for integer array
      //  list[i] = 0;
}

// Destructor
CaesarCipherList::~CaesarCipherList() {
    delete [] list;
}

// Overloaded assignment operator
CaesarCipherList& CaesarCipherList::operator=(const CaesarCipherList &obj) {
    if (this != &obj) {    // only assign if this != &obj
        // delete list
        delete [] list;

        // assign numElements and size (from obj)
        numElements = obj.numElements;
        capacity = obj.capacity;

        // allocate memory based on size
        list = new CaesarCipher[capacity];

        // copy over elements (from obj)
        for (int i = 0; i < numElements; i++)
            list[i] = obj.list[i];
    }
    return *this;
}

// Copy Constructor
CaesarCipherList::CaesarCipherList(const CaesarCipherList &obj) {
    // assign numElements and size (from obj)
    numElements = obj.numElements;
    capacity = obj.capacity;

    // allocate memory based on size
    list = new CaesarCipher[capacity];

    // copy over elements (from obj)
    for (int i = 0; i < numElements; i++)
        list[i] = obj.list[i];
}

void CaesarCipherList::addElement(CaesarCipher el) {
    // if the array is full, resize
    if (numElements >= capacity)
        resize();

    // the new element will be added whether
    // resize() is called or not!
    list[numElements] = el;
    numElements++;
}

int CaesarCipherList::findElement(CaesarCipher el) {    // similar to linear search
    for (int i = 0; i < numElements; i++) {
        if (list[i] == el)
            return i;
    }
    return -1;
}

void CaesarCipherList::resize() {
    // update size
    capacity *= 2;

    // create new array based on updated size
    CaesarCipher * tempArr = new CaesarCipher[capacity];

    // copy old array values to new array
    int i = 0;
    for (; i < numElements; i++)
        tempArr[i] = list[i];
    // not necessary, but good practice to make the rest of the values 0
//    for (; i < capacity; i++)
//        tempArr[i] = 0;

    // delete old array
    delete [] list;

    // reassign old array to new array
    list = tempArr;
}
CaesarCipher CaesarCipherList :: getElement(int index) const{

	return list[index];
}

// Get list size;
    int CaesarCipherList :: size() const{
    	return numElements;
    }
