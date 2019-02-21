#include <vector>
#include <string>
#include <iostream>

using std::vector;
using std::string;
using std::cout;
using std::ostream;


template <typename T>
class Number{
public:
    Number(T num){
        number = num;
    }

    T get_number(){
        return number;
    }

    T const operator+ (T num){
        return number + num;
    }

    T const operator-(T num){
        return number - num;
    }

    T const operator/(T num){
        return number / num;
    }

    T const operator*(T num){
        return number * num;
    }
private:
    T number;
};
