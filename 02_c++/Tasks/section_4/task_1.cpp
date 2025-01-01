/*********************************************
*******************integar class**************
*********************************************/

#include <iostream>
#include <utility> 

class Integer {
private:    
    int *_val;
public:
    /*parameterized constructor*/
    explicit Integer(int val = 0) : _val(new int (val) {
        std::cout<<"Constructor called, allocating int: " << *_val << std::endl;
    }
    /*copy constructor*/
    Integer(const Integer &other) : _val(new int(*other._val)) {
       //this->_val = new int (*other._val);
    std::cout<<"Copy Constructor called, copy int: " << *_val << std::endl;
    }

    /*copy assignment operator*/
    Integer &operator=(const Integer &other) {
        std::cout << "Copy assignment operator called." << std::endl;
        if(this == &other){
            return *this;
        }
        delete _val;
        this->_val = new int(*other._val);
        return *this; 
    }

    /*move constructor*/
    Integer (Integer &&other) : _val(other._val) {
        std::cout << "Move constructor called, moving int: " << *_val << std::endl;
        other._val = nullptr;
    }

     /*move assignment operator*/
    Integer &operator=(Integer &&other) {
        std::cout << "Move assignment operator called." << std::endl;
        if(this == &other){
            return *this;
        }
        delete _val;
        this->_val = other._val;
        other._val = nullptr;
        return *this;
    }
    
    /*Destructor*/
    ~Integer() { 
        delete _val; 
        std::cout << "Destructor called, freeing memory for int: " << (_val ? *_val : 0) << std::endl;
    }

    void print() {
        std::cout << (_val ? *_val : 0) << std::endl;
    }
};


int main() {
    Integer int1(10);   // constructor

    //Integer int2(I);      //copy constructor
    Integer int2 = int1;    // copy constructor

    Integer int3(20);   // constructor
    int3 = int1;            // copy assignment operator
    int3.print();

    Integer int4 = std::move(int1);   //move constructor
    int4.print();
    int1.print();

    Integer int5(30);        // constructor
    int5 = std::move(int2); //move assignment operator
    int5.print();

    return 0;
}