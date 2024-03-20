#include <stdio.h>

// Singleton class

// Declaration of singleton class

typedef struct Singleton {
  int data;
} Singleton;

// Static instance of the singleton class

static Singleton instance;

// Function to get the instance of the singleton class

Singleton* getInstance() {
  return &instance;
}

// Main function

int main() {
  Singleton* singleton = getInstance();

  // Set data in singleton object
  singleton->data = 10;

  // Access data from singleton object
  int data = singleton->data;

  return 0;
}
