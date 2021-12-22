#ifndef ADVERTISER_SYSTEM_BASEADVERTISING_H
#define ADVERTISER_SYSTEM_BASEADVERTISING_H

#include <iostream>

class BaseAdvertising {
    friend std::ostream &operator<<(std::ostream&, const BaseAdvertising&);
public:
    BaseAdvertising();
    explicit BaseAdvertising(unsigned int, unsigned int = 0);
    virtual void incClicks();
    virtual unsigned int getClicks() const;
    void incViews();
    virtual unsigned int getViews() const;
    virtual std::string describeMe() const;

protected:
    unsigned int clicks;

private:
    unsigned int id;
    unsigned int views;
    static unsigned int last_id;
};


#endif //ADVERTISER_SYSTEM_BASEADVERTISING_H
