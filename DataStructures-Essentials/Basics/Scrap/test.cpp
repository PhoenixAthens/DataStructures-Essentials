#include <iostream>
#include <vector>
#include <iomanip>
#include <stdio.h>
using std::cout;
using std::vector;
using std::cin;
using std::string;
using std::max;
using std::setprecision;
void div(){
    double a,b;
    cin >> a >> b;
    cout << setprecision(16) << a/b << "\n";
}
void arithmetic(){
    int a,b;
    cin >> a >> b;
    cout << a + b << "\n";
    cout << a - b << "\n";
    cout << a * b << "\n";
    cout << a / b << "\n";
    cout << a % b << "\n";
}
void surprise(){
    string id;
    cin >> id;
    id.push_back('?');
    id.push_back('?');
    id.push_back('!');
    cout << id << "\n";
}
void buddhist_to_christian(){
    int year;
    cin >> year;
    cout << year - 543 << "\n";
}

void remain(){
    int a,b,c;
    cin >> a >> b >> c;
    cout << (a+b)%c << "\n";
    cout << ((a%c) + (b%c))%c << "\n";
    cout << (a*b)%c << "\n";
    cout << ((a%c)*(b%c))%c << "\n";
}
void multiplication(){
    string a;
    string b;
    cin >> a;
    cin >> b;
    vector<vector<char>> store;
    int tens=0;
    for(int i=b.size()-1;i>=0;i--){
        char c = b[i];
        vector<char> s1;
        int carry=0;
        for(int j=0;j<tens;j++)s1.push_back('0');
        for(int j=a.size()-1;j>=0;j--){
            int prod = ((c-'0') * (a[j]-'0'))+carry;
            s1.push_back('0'+(prod%10));
            carry = prod/10;
        }
        while(carry!=0){
            s1.push_back('0'+(carry%10));
            carry/=10;
        }
        for(int j=s1.size()-1;j>=tens;j--)cout<<s1[j];
        cout<<"\n";
        tens++;
        store.push_back(s1);
    }
    vector<int> result;
    int maxLen=0;
    for(auto a: store){
        maxLen=max((int)a.size(),maxLen);
    }
    for(auto& a: store){
        while(a.size()<maxLen){
            a.push_back('0');
        }
    }
    int carry=0;
    for(int i=0;i<maxLen;i++){
        int sum{0};
        for(int j=0;j<store.size();j++){
            sum+=(store[j][i]-'0');
        }
        sum+=carry;
        result.push_back(sum%10);
        carry=sum/10;
    }
    while(carry!=0){
        result.push_back(carry%10);
        carry/=10;
    }
    for(int i=result.size()-1;i>=0;i--){
        cout<<result[i];
    }
    cout<<"\n";
}
void multiplication_2(){
    int a;
    int b;
    cin >> a;
    cin >> b;
    int b_copy = b;
    while(b_copy!=0){
        cout << a*(b_copy%10);
        b_copy/=10;
        cout << "\n";
    }
    cout << a*b << "\n";
}
void print_a_cat(){
    cout << " \\ /\\" << "\n";
    cout << "  ) ( ')" << "\n";
    cout << " ( / )"   << "\n";
    cout << "  \\(__)|"<< "\n";
}
void print_a_dog(){
    printf("|\\_/|\n");
    printf("|q p|   /}\n");
    printf("( 0 )\"\"\"\\\n");
    printf("|\"^\"`    |\n");
    printf("||_/=\\\\__|\n");
}
void leap_year(){
    int year;
    cin >> year;
    if(year%400==0)cout<<1<<"\n";
    else if(year%4==0 && year%100!=0)cout<<1<<"\n";
    else cout<<0<<"\n";
}
void find_quadrant(){
    int x,y;
    cin >> x;
    cin >> y;
    if(x>=0 && y>=0)cout<<1<<"\n";
    else if(x<0 && y>=0)cout<<2<<"\n";
    else if(x<0 && y<0)cout<<3<<"\n";
    else cout<<4<<"\n";
}

void setAlarm(){
    int h, m;
    cin >> h >> m;
    if(h==0 && m<45){
        h=24;
    }
    int minutes = (h*60)+m;
    minutes-=45;
    cout << minutes/60 << " " << minutes%60 << "\n";
}

void cookTime(){
    int cu_h, cu_m, cook_m;
    cin >> cu_h >> cu_m;
    cin >> cook_m;
    int end = cook_m + cu_m;
    cu_h+=(end/60);
    end%=60;
    cout << cu_h%24 << " " << end << "\n";
}

void three_dice(){
    using std::max;
    using std::cout;
    using std::cin;
    int a,b,c;
    cin >> a >> b >> c;
    if(a==b && b==c){
        cout << 10000+a*1000 << "\n";
    }else if(a==b){
        cout << 1000+a*100 << "\n";
    }else if(b==c){
        cout << 1000+b*100 << "\n";
    }else if(c==a){
        cout << 1000+c*100 << "\n";
    }else{
        cout << max(a,max(b,c)) * 100 << "\n";
    }
}
void multiplication_table(){
    using std::cout;
    using std::cin;
    int n;
    cin >> n;
    for(int i=1;i<=9;i++){
        cout << n << " * " << i << " = " << n*i << "\n";
    }
}

void rep_add(){
    using std::cout;
    using std::cin;
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        cout << a+b << "\n";
    }
}
void sumOfIntegers(){
    using std::cout;
    using std::cin;
    double n;
    cin >> n;
    cout << (n/2)*(n+1) << "\n";
}

void receipt(){
    using std::cout;
    using std::cin;
    int total_amount;
    cin >> total_amount;
    int n;
    cin >> n;
    int query{0};
    for(int i=0;i<n;i++){
        int am, q;
        cin >> am >> q;
        query+=(am*q);
    }
    if(query==total_amount)cout<<"Yes\n";
    else cout<<"No\n";
}

void coding_in_psyED(){
    using std::cout;
    using std::cin;
    int n;
    cin >> n;
    int longs = n/4;
    for(int i=0;i<longs;i++){
        cout << "long ";
    }
    cout << "int\n";
}

void add_again(){
    int t;
    cin >> t;
    for(int i=1;i<=t;i++){
        int a,b;
        cin >> a >> b;
        cout << "Case #"<<i<<": "<<a<<" + "<<b<<" = "<<(a+b)<<"\n";
    }
}

void pattern(){
    int t;
        cin >> t;
        for(int i=1;i<=t;i++){
            for(int j=0;j<t-i;j++){
                cout << " ";
            }
            for(int j=0;j<i;j++){
                cout << "*";
            }
            cout << "\n";
        }
}
int main(){
    pattern();
}
/*
 
 \ /\
 ) ( ')
 ( / )
 \(__)|
 
 \ /\
  ) ( ')
 ( / )
  \(__)|
 
 
 */
