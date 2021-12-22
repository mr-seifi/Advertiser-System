#ifndef ADVERTISER_SYSTEM_BASEADVERTISING_H
#define ADVERTISER_SYSTEM_BASEADVERTISING_H

#include <iostream>

class BaseAdvertising {
    friend std::ostream &operator<<(std::ostream&, const BaseAdvertising&);
public:
    BaseAdvertising();
    explicit BaseAdvertising(unsigned int, unsigned int = 0);
    void incClicks();
    unsigned int getClicks() const;
    void incViews();
    unsigned int getViews() const;
    virtual std::string describeMe() const;

private:
    unsigned int id;
    unsigned int clicks;
    unsigned int views;
    static unsigned int last_id;
};


#endif //ADVERTISER_SYSTEM_BASEADVERTISING_H
