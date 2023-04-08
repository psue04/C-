#include "number.h"
#include <sstream>

void Number::setNumber(int num) {
    _num = num;
}

int Number::getNumber() const {
    std::stringstream sstream;
    sstream << "GetNumber(): " << getNumber() << '\n';
    return _num;
}

int Square::getSquare() const {
    return _num * _num;
}

int Cube::getCube() const {
    std::stringstream sstream;
    sstream << Number::getString()
            << "GetSquare(): " << getSquare() << '\n';
    sstream << Square::GetString()
            << "GetCube(): " << GetCube() << '\n';
    return _num * _num * _num;
}