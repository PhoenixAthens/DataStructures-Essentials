#include <boost/lambda/lambda.hpp>
#include <iostream>
#include <iterator>
#include <algorithm>


int main(){
    using namespace boost::lambda;
    typedef std::istream_iterator<int> in;
    std::for_each(in(std::cin), in(), std::cout << (_1*3) << " ");
    //to run this program, run the following command from the terminal
    
    //c++ -I path/to/boost_1_82_0 example.cpp -o example
    
    //once compiled
    // echo 1 2 3 | ./example
    // 3 6 9
    
}
