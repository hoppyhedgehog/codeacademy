#include <iostream>
#include "profile.hpp"
using namespace std;
Profile::Profile(std::string new_name, int new_age, std::string new_city, std::string new_country, std::string new_pronouns)
  : name(new_name), age(new_age), city(new_city), country(new_country), pronouns(new_pronouns) {
}

string Profile::view_profile() {
  string bio = line + "\nName: " + tab + tab +  name;
  bio += "\nAge: " + tab + tab +std::to_string(age);
  bio += "\nCity: " + tab + tab + city;
  bio += "\nCountry: " + tab  +country;
  bio += "\nPronouns: " + tab + pronouns;

       if (hobbies.size() != 0)
      {
        for (int i=0;i<hobbies.size();i++)
        {
          bio += "\nHobbies: " + tab + hobbies[i];
        }
      }
  bio += "\n" + line +"\n";
  return age < 18 ? "You are not of age to view this profile": bio;
}

void Profile::add_hobby(std::string new_hobby){
  hobbies.push_back(new_hobby);
}

