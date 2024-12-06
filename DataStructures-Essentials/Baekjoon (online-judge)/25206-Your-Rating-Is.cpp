#include <iostream>
#include <iomanip>
using std::cout;
using std::cin;
using std::string;

int main(){
    double sum{0};
    double grade_total{0};
    string s,rate;
    double grade;
    
    for(int i=0;i<20;i++){
        cin >> s >> grade >> rate;
        if(rate[0]!='P'){
            grade_total+=grade;
            if(rate[0]=='A'){
                if(rate[1]=='+'){
                    sum+=grade*4.5;
                }else{
                    sum+=grade*4.0;
                }
            }else if(rate[0]=='B'){
                if(rate[1]=='+'){
                    sum+=grade*3.5;
                }else{
                    sum+=grade*3.0;
                }
                
            }else if(rate[0]=='C'){
                if(rate[1]=='+'){
                    sum+=grade*2.5;
                }else{
                    sum+=grade*2.0;
                }
            }else if(rate[0]=='D'){
                if(rate[1]=='+'){
                    sum+=grade*1.5;
                }else{
                    sum+=grade*1.0;
                }
            }
        }
        cin.ignore();
    }
    cout << sum/grade_total << "\n";
}
