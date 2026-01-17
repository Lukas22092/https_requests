#include "foo.hpp"

Point2i::Point2i(int x, int y) : x(x), y(y){};

void Point2i::foo(){std::cout << 42;};