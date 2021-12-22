#include "Advertiser.h"

using namespace std;

unsigned int Advertiser::totalClicks = 0;
unsigned int Advertiser::last_id = 0;

Advertiser::Advertiser()
           :BaseAdvertising(), id(++last_id)
{
    setName("");
}

Advertiser::Advertiser(unsigned int c, unsigned int v)
           :BaseAdvertising(c, v), id(++last_id)
{
    if(c < 0 | v < 0)
        throw invalid_argument("Clicks or Views should be positive!");
    setName("");
}

Advertiser::Advertiser(unsigned int c, unsigned int v, string n)
           :BaseAdvertising(c, v), id(++last_id)
{
    if(c < 0 | v < 0)
        throw invalid_argument("Clicks or Views should be positive!");
    setName(n);
}

string Advertiser::getName() const
{
    return name;
}

void Advertiser::setName(string n)
{
    name = n;
}

void Advertiser::incClicks()
{
    ++clicks;
    ++totalClicks;
}

std::string Advertiser::describeMe() const
{
    return "ID: " + to_string(id) +
           "\tNAME: " + name +
           "\tCLICKS: " + to_string(getClicks()) +
           "\tVIEWS: " + to_string(getViews());
}

std::string Advertiser::help() const
{
    return name + "Company"
           "There is a long and varied history associated with the evolution of the concept of Corporate Social Responsibility (CSR)."
           " However, a historical review is missing in the academic literature that portrays the evolution of the academic understanding of"
           " the concept alongside with the public and international events that influenced the social expectations with regards to corporate behavior."
           " The aim of this paper is to provide a distinctive historical perspective on the evolution of CSR as a conceptual paradigm by reviewing"
           " the most relevant factors that have shaped its understanding and definition, such as academic contributions, international policies and"
           " significant social and political events. To do so, the method used is a comprehensive literature review that explores the most relevant"
           " academic contributions and public events that have influenced the evolutionary process of CSR and how they have done so. The findings show"
           " that the understanding of corporate responsibility has evolved from being limited to the generation of profit to include a broader"
           " set of responsibilities to the latest belief that the main responsibility of companies should be the generation of shared value. "
           "The findings also indicate that as social expectations of corporate behavior changed, so did the concept of Corporate Social Responsibility. "
           "The findings suggest that CSR continues to be relevant within the academic literature and can be expected to remain part of the business "
           "vocabulary at least in the short term and as a result, the authors present a plausible future for CSR that takes into consideration "
           "its historical evolution. Finally, this paper gives way for future academic research to explore how CSR can help address the latest social "
           "expectations of generating shared value as a main business objective, which in turn may have practical implications if CSR is implemented "
           "with this in mind.";
}

unsigned int Advertiser::getTotalClicks()
{
    return totalClicks;
}