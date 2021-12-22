#include <iostream>
#include "BaseAdvertising.h"
#include "Advertiser.h"
#include "Ad.h"

using namespace std;

int main()
{

    cout << "------------ Test Cases ------------" << endl;
    BaseAdvertising baseAdvertising;
    Advertiser advertiser1("name1"), advertiser2("name2");
    Ad ad1("title1", "img-url1", "link1", advertiser1),
       ad2("title2", "img-url2", "link2", advertiser2);
    cout << baseAdvertising
         << ad2
         << advertiser1;
    ad1.incViews();
    ad1.incViews();
    ad1.incViews();
    ad1.incViews();
    ad2.incViews();
    ad1.incClicks();
    ad1.incClicks();
    ad2.incClicks();
    cout << "Advertiser2 Name: " << advertiser2.getName() << endl;
    advertiser2.setName("new name");
    cout << "Advertiser2 Name: " << advertiser2.getName() << endl;
    cout << "Ad1 Clicks: " << ad1.getClicks() << endl;
    cout << "Advertiser2 Clicks: " << advertiser2.getClicks() << endl;
    cout << "Advertiser TotalClicks: " << Advertiser::getTotalClicks() << endl;
    cout << "Advertiser Help: " << Advertiser::help() << endl;

    return 0;
}
