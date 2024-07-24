#include <vector>

std::vector<double> add(const std::vector<double>& a, const std::vector<double>& b) {
    std::vector<double> result(3);
    for (int i = 0; i < 3; ++i) {
        result[i] = a[i] + b[i];
    }
    return result;
}

std::vector<double> subtract(const std::vector<double>& a, const std::vector<double>& b) {
    std::vector<double> result(3);
    for (int i = 0; i < 3; ++i) {
        result[i] = a[i] - b[i];
    }
    return result;
}

double dot_product(const std::vector<double>& a, const std::vector<double>& b) {
    double result = 0;
    for (int i = 0; i < 3; ++i) {
        result += a[i] * b[i];
    }
    return result;
}
