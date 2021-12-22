#include <iostream>
#include "BaseAdvertising.h"

using namespace std;

int main() {

    BaseAdvertising baseAdvertising;
    baseAdvertising.incClicks();
    baseAdvertising.incClicks();
    baseAdvertising.incClicks();
    baseAdvertising.incViews();
    baseAdvertising.incViews();
    cout << baseAdvertising.getClicks() << ' ' << baseAdvertising.getViews();

    return 0;
}
