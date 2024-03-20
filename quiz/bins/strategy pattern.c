#include<stdio.h>

// Strategy Interface
typedef struct {
    void (*execute)(int, int);
} Strategy;

// Concrete Strategies
void add(int a, int b) {
    int result = a + b;
    printf("Addition: %d\n", result);
}

void subtract(int a, int b) {
    int result = a - b;
    printf("Subtraction: %d\n", result);
}

void multiply(int a, int b) {
    int result = a * b;
    printf("Multiplication: %d\n", result);
}

// Context
typedef struct {
    Strategy* strategy;
} Context;

void executeStrategy(Context* context, int a, int b) {
    context->strategy->execute(a, b);
}

int main() {
    // Create context
    Context context;

    // Create strategies
    Strategy addStrategy = { add };
    Strategy subtractStrategy = { subtract };
    Strategy multiplyStrategy = { multiply };

    // Set strategy
    context.strategy = &addStrategy;

    // Execute strategy
    executeStrategy(&context, 10, 5);

    // Change strategy to subtract
    context.strategy = &subtractStrategy;

    // Execute strategy
    executeStrategy(&context, 10, 5);

    // Change strategy to multiply
    context.strategy = &multiplyStrategy;

    // Execute strategy
    executeStrategy(&context, 10, 5);

    return 0;
}