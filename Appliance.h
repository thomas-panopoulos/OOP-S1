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
    void set_isOn(bool on);
    int get_powerRating();
    void set_powerRating(int power);
    void turnOn();
    void turnOff();
};

#endif