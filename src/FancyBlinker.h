#ifndef FANCYBLINKER_H
#define FANCYBLINKER_H

/* C++ class for blink logic */
class FancyBlinker {
public:
    FancyBlinker(int pin);

    void Setup();
    void BlinkyBlinky();

private: 
    int m_pin;
};

#endif 