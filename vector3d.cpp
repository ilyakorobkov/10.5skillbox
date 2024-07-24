#include <cmath>

class Vector3D {
public:
    double x, y, z;

    Vector3D(double x, double y, double z) : x(x), y(y), z(z) {}

    double length() const {
        return std::sqrt(x*x + y*y + z*z);
    }

    Vector3D normalize() const {
        double len = length();
        return Vector3D(x / len, y / len, z / len);
    }
};
