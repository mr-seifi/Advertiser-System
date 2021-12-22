#include <iostream>
#include "BaseAdvertising.h"
#include "Advertiser.h"
#include "Ad.h"

using namespace std;

int main() {

    cout << "------------ Test BaseAdvertising ------------" << endl;
    BaseAdvertising baseAdvertising1, baseAdvertising2;
    baseAdvertising1.incClicks();
    baseAdvertising1.incClicks();
    baseAdvertising1.incClicks();
    baseAdvertising1.incViews();
    baseAdvertising1.incViews();
    baseAdvertising2.incViews();
    baseAdvertising2.incViews();
    baseAdvertising2.incViews();
    baseAdvertising2.incViews();
    baseAdvertising2.incClicks();
    baseAdvertising2.incClicks();
    cout << baseAdvertising1 << baseAdvertising2;

    cout << "------------ Test Advertiser ------------" << endl;
    Advertiser advertiser1, advertiser2;
    advertiser1.setName("Amin");
    advertiser2.setName("Hassan");
    advertiser1.incClicks();
    advertiser1.incClicks();
    advertiser1.incClicks();
    advertiser1.incClicks();
    advertiser2.incClicks();
    advertiser2.incClicks();
    cout << advertiser1 << advertiser2;
    cout << "Total Clicks: " << Advertiser::getTotalClicks() << endl;

    cout << "------------ Test Ad ------------" << endl;
    Ad ad;
    ad.setTitle("Kenwood_central_service");
    ad.setImgUrl("https://dam.kenwoodworld.com/562x468/assets/193626");
    ad.setLink("https://kenwoodcs.ir");
    ad.setAdvertiser(advertiser1);
    ad.incClicks();
    ad.incClicks();
    ad.incClicks();
    ad.incViews();
    ad.incViews();
    ad.incViews();
    ad.incViews();
    cout << ad;
    cout << advertiser1;

    return 0;
}
