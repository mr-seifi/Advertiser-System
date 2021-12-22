#ifndef ADVERTISER_SYSTEM_AD_H
#define ADVERTISER_SYSTEM_AD_H

#include "BaseAdvertising.h"
#include "Advertiser.h"

class Ad : public BaseAdvertising
{
public:
    Ad();
    Ad(std::string, std::string, std::string);
    Ad(unsigned int, unsigned int, std::string, std::string, std::string);
    std::string getTitle() const;
    void setTitle(std::string);
    std::string getImgUrl() const;
    void setImgUrl(std::string);
    std::string getLink() const;
    void setLink(std::string);
    void setAdvertiser(Advertiser&);
    std::string describeMe() const final;
    void incClicks() final;
    void incViews() final;

private:
    unsigned int id;
    std::string title;
    std::string imgUrl;
    std::string link;
    Advertiser *advertiser;
    static unsigned int last_id;
};


#endif //ADVERTISER_SYSTEM_AD_H
