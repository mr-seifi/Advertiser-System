#include "Ad.h"

using namespace std;

unsigned int Ad::last_id = 0;

Ad::Ad()
   :BaseAdvertising(), id(++last_id)
{

}

Ad::Ad(string title, string imgUrl, string link)
   :BaseAdvertising(), id(++last_id)
{
    setTitle(title);
    setImgUrl(imgUrl);
    setLink(link);
}

Ad::Ad(unsigned int c, unsigned int v, string title, string imgUrl, string link)
   :BaseAdvertising(c, v), id(++last_id)
{
    setTitle(title);
    setImgUrl(imgUrl);
    setLink(link);
}

string Ad::getTitle() const
{
    return title;
}

void Ad::setTitle(string t)
{
    title = t;
}

string Ad::getImgUrl() const
{
    return imgUrl;
}

void Ad::setImgUrl(string i)
{
    imgUrl = i;
}

string Ad::getLink() const
{
    return link;
}

void Ad::setLink(string l)
{
    link = l;
}

void Ad::setAdvertiser(Advertiser &a)
{
    advertiser = &a;
}

string Ad::describeMe() const
{
    return "ID: " + to_string(id) +
           "\tTITLE: " + title +
           "\tIMG_URL: " + imgUrl +
           "\tLINK: " + link +
           "\tCLICKS: " + to_string(getClicks()) +
           "\tVIEWS: " + to_string(getViews()) +
           "\tADVERTISER NAME: " + advertiser->getName();
}

void Ad::incClicks()
{
    BaseAdvertising::incClicks();
    advertiser->incClicks();
}

void Ad::incViews()
{
    BaseAdvertising::incViews();
    advertiser->incViews();
}