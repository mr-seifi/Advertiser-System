#ifndef ADVERTISER_SYSTEM_ADVERTISER_H
#define ADVERTISER_SYSTEM_ADVERTISER_H

#include <iostream>
#include "BaseAdvertising.h"

class Advertiser : public BaseAdvertising
{
public:
    Advertiser();
    explicit Advertiser(unsigned int, unsigned int = 0);
    Advertiser(unsigned int, unsigned int, std::string);
    std::string getName() const;
    void setName(std::string);
    void incClicks();
    virtual std::string describeMe() const;
    std::string help() const;
    static unsigned int getTotalClicks();

private:
    unsigned int id;
    std::string name;
    static unsigned int totalClicks;
    static unsigned int last_id;
};


#endif //ADVERTISER_SYSTEM_ADVERTISER_H
