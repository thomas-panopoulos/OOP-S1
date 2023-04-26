#ifndef APPLIANCE_H
#define APPLIANCE_H
class Appliance {
    protected:
    int powerRating;
    bool isOn;

    public:
    void turnOn();
    void turnOff();
    virtual double getPowerConsumption();
    Appliance();
    Appliance(int powerRating);
    bool get_isOn();
    int get_powerRating();
    void set_powerRating(int power);
};

#endif