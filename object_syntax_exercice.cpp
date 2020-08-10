#include <iostream>
class DayBirth {
        private:
        int Day{1};
        int Month{1};
        int Year{1};

        public:
            void daybirth(int DD, int MM, int YYYY){
                // Constructeur
                day(DD);
                month(MM);
                year(YYYY);
            }
            int day(){ return Day;}
            void day(int DD){
              if(DD >= 1 && DD <= 31) Day = DD;
            }
            int month(){ return Month; }
            void month(int MM){
                if(MM >= 1 && MM <= 12) Month = MM;
            }
            int year(){ return Year; }
            void year(int YYYY){
                if(YYYY >= 1920 && YYYY <= 2020) Year = YYYY;
            }
    };

    struct identity {
        private:
        std::string status{"Civil"};
        public:
        std::string FirstName{"Tom"};
        std::string FamilyName{"Anonymous"};
        int Age{25};
        std::string Status(){ return status; };
        void Status( std::string s ){ status = s; }
        DayBirth date;
    };

int main(){
    identity folk1;

    /*folk1.FirstName = "Vincent";
    folk1.FamilyName = "CAS";
    folk1.Age = 18;*/

    folk1.Status("Militaire");
    //folk1.date()

    
    folk1.date.daybirth(05,07,1990);
    
    std::cout << folk1.FirstName << " " << folk1.FamilyName << std::endl;
    std::cout << folk1.Status() << std::endl;
    std::cout << folk1.date.day() << "/" << folk1.date.month() << "/" << folk1.date.year() << std::endl;    
}