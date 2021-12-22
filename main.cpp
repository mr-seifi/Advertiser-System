#include <iostream>
#include "BaseAdvertising.h"

using namespace std;

int main() {

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
    cout << baseAdvertising1 << baseAdvertising2 << endl;

    return 0;
}
