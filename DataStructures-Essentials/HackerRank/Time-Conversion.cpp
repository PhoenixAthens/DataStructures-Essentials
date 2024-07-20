#include <iostream>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    if(s[s.length()-2]=='P'){
        int hr = stoi(s.substr(0,2));
        if(hr<12)hr += 12;
        return (to_string(hr) + s.substr(2,s.length()-4));
        
    }else{
        int hr = stoi(s.substr(0,2));
        hr%=12;
        if(hr<10 || hr==0) return (to_string(0) + to_string(hr) + s.substr(2,s.length()-4));
        return s;
    }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

