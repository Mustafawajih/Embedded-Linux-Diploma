/*********************************************
*******************string class***************
*********************************************/

#include <iostream>
#include <utility> 
#include <cstring> 

class String {
private:
    char *_str;
    size_t length;
public:
    explicit String(const char *str = "") {
        length = strlen(str);
        _str = new char[length + 1];
        strcpy(_str,str);
        //_str[length] = '\0';     // Ensure the string is null-terminated (optional since strcpy does this)
        std::cout << "Constructor called for string: " << _str << std::endl;
    }

    ~String() {
        delete[] _str;
        _str = nullptr;     // Avoid dangling pointer issues
        std::cout << "Destructor called, freeing memory for string"<< std::endl;
    }

    /*copy constructor*/
    String(const String &other) : length(other.length) { 
        std::cout<<"Copy Constructor called, copy string"<< std::endl;
        _str = new char[length + 1];
        strcpy(_str,other._str);
    }

    /*copy assignment operator*/
    String &operator = (const String &other) {
        std::cout << "Copy assignment operator called." << std::endl;
        if(this == &other) {
            return *this;
        }
        delete [] _str;
        length = other.length;
        _str = new char[length + 1];
        strcpy(_str,other._str);
        return *this;
    }

    /*move constructor*/
    String (String&&other) noexcept : length(other.length),_str(other._str) {
        std::cout << "Move constructor called for string"<< std::endl;
        other.length = 0;
        other._str = nullptr;
    }

    /*move assignment operator*/
    String &operator =(String &&other) noexcept{
        std::cout << "Move assignment operator called." << std::endl;
        if(this != &other) {
        delete [] _str;
        length = other.length;
        _str = other._str;

        other.length = 0;
        other._str = nullptr;
        }
        return *this;
    }

    void print() const {
        std::cout<< _str <<std::endl;
    }
};

int main () {
    String string1("hello");   //constructor

    //String string2(string1);  //copy constructor
    String string2 = string1;   //copy constructor
    string2.print();

    String string3("world");    //constructor
    string3 = string1;      //copy assgnment operator
    string3.print();

    String string4 = std::move(string1); //move constructor
    string4.print();

    String string5("mustafa");     //constructor
    string5 = std::move(string2);       //move assgnment operator
    string5.print();

    return 0;
}