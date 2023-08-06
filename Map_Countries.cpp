
#include <iostream>
#include <map>
#include <string>
#include <vector>


std::map<std::string, std::string> CountriesCapitals()
{
    std::map<std::string, std::string> countries;
    std::map<std::string, std::string>::iterator it;

    countries.insert({ "Armenia", "Yerevan" });
    countries.insert({ "France", "Paris" });
    countries.insert({ "Spain", "Madrid" });
    countries.insert({ "China", "Beijing" });
    countries.insert({ "India", "Delhi" });
    countries.insert({ "Argentina", "Buenos Aires" });
    countries.insert({ "Russia", "Moscow" });

    std::cout << "size = " << countries.size() << std::endl;

    for (it = countries.begin(); it != countries.end(); ++it)
    {
        std::cout << it->first << ": " << it->second << std::endl;
    }

    return countries;
}


std::map<std::string, std::vector<std::string>> CountriesCities()
{
    std::map<std::string, std::vector<std::string>> countries{
    { "Armenia", {"Yerevan","Gyumri", "Kapan", "Stepanavan"} },
    { "France", {"Paris", "Marseille", "Lyon"}},
    { "Spain", {"Madrid", "Valencia", "Seville"}},
    { "China", {"Beijing", "Guangzhou", "Shanghai"}},
    { "India", {"Delhi", "Bengaluru", "Hyderabad"}},
    { "Argentina", {"Buenos Aires", "Mendoza", "Rosario"}},
    { "Russia", {"Moscow", "Samara", "Saint Petersburg"}},
    };
  
    return countries;
}


int main()
{
    CountriesCapitals();
    CountriesCities();

    return 0;
}
