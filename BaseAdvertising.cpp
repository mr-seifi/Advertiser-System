#include "BaseAdvertising.h"
#include <stdexcept>

using namespace std;

unsigned int BaseAdvertising::last_id = 0;

BaseAdvertising::BaseAdvertising()
{
    id = ++last_id;
    clicks = 0;
    views = 0;
}

BaseAdvertising::BaseAdvertising(unsigned int c, unsigned int v)
{
    if(c < 0 | v < 0)
        throw invalid_argument("Clicks or Views should be positive!");
    id = ++last_id;
    clicks = c;
    views = v;
}

void BaseAdvertising::incClicks()
{
    ++clicks;
}

unsigned int BaseAdvertising::getClicks() const
{
    return clicks;
}

void BaseAdvertising::incViews()
{
    ++views;
}

unsigned int BaseAdvertising::getViews() const
{
    return views;
}

string BaseAdvertising::describeMe() const
{
    return "ID: " + to_string(id) +
           "\tCLICKS: " + to_string(getClicks()) +
           "\tVIEWS: " + to_string(getClicks());
}

ostream &operator<<(ostream &output, const BaseAdvertising &baseAdvertising)
{
    output << baseAdvertising.describeMe() << endl;
    return output;
}