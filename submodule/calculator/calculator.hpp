class calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    int subtract(int a, int b) {
        return a - b;
    }

    int multiply(int a, int b) {
        return a * b;
    }

    int divide(int a, int b) {
        if (b != 0) {
            return a / b;
        } else {
            throw std::runtime_error("Division by zero");
        }
    }
};
