#include <iostream>
#include <format>
using std::cout;
using std::cin;
using std::format;

int main(int argc, char** argv){
    char arr[100];
    cout << format("Enter a string: ");
    cin >> arr;
    cout << format("You entered {}\n",arr);
    //If we enter something like "Hello World"
    //OUPUT-> You entered Hello\200\361\337o\240z\260\371p\355\337o\240\356\337o\300
    //because `cin` uses ' ' (spaces), '\n' as the delimeter by default
    
    //In memory
    /*
     arr = char[100]
     [0]  = (char) 'H'
     [1]  = (char) 'e'
     [2]  = (char) 'l'
     [3]  = (char) 'l'
     [4]  = (char) 'o'
     [5]  = (char) '\0'
     [6]  = (char) '\xdf'
     [7]  = (char) 'o'
     [8]  = (char) '\x01'
     [9]  = (char) '\0'
     [10] = (char) '\0'
     */
    //You can see the garbase values in the array above
    
    //The way around this problem, is to use 'getline()'
    
    cin.getline(arr,100);
    cout << format("You entered {}\n",arr);
//    //You entered  World\200\361\337o\240z\260\371p\355\337o\240\356\337o\300
//    
    cout << "You entered "<<arr<<"\n";
//    //You entered  World
//    
//    //We got the output as shown above because, ' World' was lying in the buffer
//    
//    //If we comment out the cin at ln10, we get
//    //You entered Hello World\200\361\337o\240z\260\371p\355\337o\240\356\337o\300.W\215\272{
//    //You entered Hello World
//    
//    //We can limit .getline and change the default delimeter from '\n' to anything we like, like so
    cin.getline(arr,5);
    cout << format("You entered {}\n",arr); //format reads after '\0' if there are characters present
//    //You entered  Hell World\200\361\337o
//    
    cout << "You entered "<<arr<<"\n";
//    //You entered  Hell
    
    cin.getline(arr,5,'k');
    cout << format("You entered {}\n",arr);
    //You entered  ell World\200\361\337o
    
    cout << "You entered "<<arr<<"\n";
    //You entered
    
    //if we comment out all user-input statements before ln56, we get
    //You entered Hell\361...
    //You entered Hell
    
    //if we comment out all user-input statements before ln56 and change streamsize in getline to 100, we get
    //You can keep entering text for as long as you want, until you enter 'k'
    
    //OUTPUT->
    //(from 'format()')
    //You entered Hello World
    //Hello World
    //Hello World
    //\371p\355\337o\240\356\337o\300)\305\{\362\343&
    
    //(from plain-old 'cout')
    //You entered Hello World
    //Hello World
    //Hello World
    
    
    
}
