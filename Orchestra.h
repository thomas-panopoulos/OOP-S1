#ifndef ORCHESTRA_H
#define ORCHESTRA_H
#include "Musician.h"
#include <string>

class Orchestra {
private:
    int size{0};
    Musician* musicians;
    int current_amount{0};

public:
    Orchestra();
    Orchestra(int len);
    int get_current_number_of_members();
    bool has_instrument(std::string instrument);
    Musician *get_members();
    bool add_musician(Musician new_musician);
    ~Orchestra();
};

#endif