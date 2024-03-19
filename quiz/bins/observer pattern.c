#include <stdio.h>
#include <stdlib.h>

// Observer Interface
struct Observer {
    void (*update)(struct Observer*, int);
};

// Concrete Observer
struct ConcreteObserver {
    struct Observer base;
    int id;
};

void ConcreteObserver_update(struct Observer* observer, int value) {
    struct ConcreteObserver* concreteObserver = (struct ConcreteObserver*) observer;
    printf("Observer %d: Value updated to %d\n", concreteObserver->id, value);
}

// Subject
struct Subject {
    struct Observer* observers[10];
    int numObservers;
};

void Subject_registerObserver(struct Subject* subject, struct Observer* observer) {
    subject->observers[subject->numObservers++] = observer;
}

void Subject_notifyObservers(struct Subject* subject, int value) {
    for (int i = 0; i < subject->numObservers; i++) {
        subject->observers[i]->update(subject->observers[i], value);
    }
}

int main() {
    struct Subject subject;
    struct ConcreteObserver observer1 = {{ConcreteObserver_update}, 1};
    struct ConcreteObserver observer2 = {{ConcreteObserver_update}, 2};

    Subject_registerObserver(&subject, (struct Observer*) &observer1);
    Subject_registerObserver(&subject, (struct Observer*) &observer2);

    int value = 10;
    Subject_notifyObservers(&subject, value);

    return 0;
}