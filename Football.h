#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
using namespace std;

Class Football {
public:
            Football(){
                year = 0;
                number = 0;
                      };
            void score(int goal1, int goal2) {
                if (goal1) goal1++; 
                else if (goal2) {goal2++;
                        cout<<goal1<<":"<<goal2<<endl;};
                else break;         }
            void show_country()  {
                 for (vector<string>::const_iterator i=country.begin();i!=country.end(); i++)
                 cout<<*i<<endl; };
private:
         vector<string> team = {"Real Madrid","Juventus","Manchester United","Barcelona","Chelsea","Liverpool","Atletico Madrid","AC Milan","Bayern Munich","Borussia Dortmund","Manchester City","Arsenal","P.S.G.","Ajax","Porto","Dynamo Kyiv","Shakhtar Donetsk","Inter Milan","Galatasaray"};
         vector<string> country = {"Afghanistan","Albania","Algeria","Andorra","Angola","Antigua and Barbuda","Argentina","Armenia","Australia","Austria","Azerbaijan","Bahamas, The","Bahrain","Bangladesh","Barbados","Belarus","Belgium","Belize","Benin","Bhutan","Bolivia","Bosnia and Herzegovina","Botswana","Brazil","Brunei","Bulgaria","Burkina Faso","Burma","Burundi","Cabo Verde","Cambodia","Cameroon","Canada","Central African Republic","Chad","Chile","China","Colombia","Comoros","Congo (Brazzaville)","Congo (Kinshasa)","Costa Rica","Cote d'Ivoire","Croatia","Cuba","Cyprus","Czechia","Denmark","Djibouti","Dominica","Dominican Republic","Ecuador","Egypt","El Salvador","Equatorial Guinea","Eritrea","Estonia","Eswatini","Ethiopia","Fiji","Finland","France","Gabon","Gambia, The","Georgia","Germany","Ghana","Greece","Grenada","Guatemala","Guinea","Guinea-Bissau","Guyana","Haiti","Holy See","Honduras","Hungary","Iceland","India","Indonesia","Iran","Iraq","Ireland","Israel","Italy","Jamaica","Japan","Jordan",
                                   "Kazakhstan","Kenya","Kiribati","Korea, North","Korea, South","Kosovo","Kuwait","Kyrgyzstan","Laos","Latvia","Lebanon","Lesotho","Liberia","Libya","Liechtenstein","Lithuania","Luxembourg","Madagascar","Malawi","Malaysia","Maldives","Mali","Malta","Marshall Islands","Mauritania","Mauritius","Mexico","Micronesia, Federated States of","Moldova","Monaco","Mongolia","Montenegro","Morocco","Mozambique","Namibia","Nauru","Nepal","Netherlands","New Zealand","Nicaragua","Niger","Nigeria","North Macedonia","Norway","Oman","Pakistan","Palau","Panama","Papua New Guinea","Paraguay","Peru","Philippines","Poland","Portugal","Qatar","Romania","Russia","Rwanda","Saint Kitts and Nevis","Saint Lucia","Saint Vincent and the Grenadines","Samoa","San Marino","Sao Tome and Principe","Saudi Arabia","Senegal","Serbia","Seychelles","Sierra Leone","Singapore","Slovakia","Slovenia","Solomon Islands","Somalia","South Africa","South Sudan","Spain","Sri Lanka","Sudan","Suriname","Sweden","Switzerland",
                                   "Syria","Tajikistan","Tanzania","Thailand","Timor-Leste","Togo","Tonga","Trinidad and Tobago","Tunisia","Turkey","Turkmenistan","Tuvalu","Uganda","Ukraine","United Arab Emirates","United Kingdom","United States","Uruguay","Uzbekistan","Vanuatu","Venezuela","Vietnam","Yemen","Zambia","Zimbabwe"};
         vector<string> tounament = {"UEFA Champions League","UEFA Europe Cup","UEFA Super Cup","Confederation Cup","Euro","FIFA World Cup","Libertadores Cup","CONCACAF Nations League"};
         short year;
         short number;
         string name;
         const char *player;
         const char *coach;
         };

Class Player:public Football {
public:
          void Add_Player_Team(name) {
          team.push_back(name);}
private:
              const char* team;
              const char* national_team;
              string citizenship;
              short number;
              int price;
              string BirthDay;
              int goal;
              string position;
 };

Class Stadium:public Football {
public: 
          void show_attend() {
               cout<<"Attendence on match: "<<attendance<<endl;
                      };
          void stadium(char[] name){
               this->name=name;  }
private:
              int attendance;
              char[] name;
              string country;
              string match_day;
};

Class Game:public Football {
public:
               void show_time() {
               time_t now = time(0);
               char *dt = ctime(&now);
               cout<<dt<<endl;
                               }
private:
              short Time;
              string referee;
                           };