#include <stdio.h>
#include <stdlib.h>

typedef struct Product {
    int value;
} Product;

typedef struct Creator {
    Product* (*factoryMethod)(int);
} Creator;

Product* createProduct(int value) {
    Product* product = (Product*)malloc(sizeof(Product));
    product->value = value;
    return product;
}

Product* creatorFactoryMethod(int value) {
    return createProduct(value);
}

int main() {
    Creator creator;
    creator.factoryMethod = &creatorFactoryMethod;
    Product* product = creator.factoryMethod(10);
    printf("Product value: %d\n", product->value);
    free(product);
    return 0;
}
