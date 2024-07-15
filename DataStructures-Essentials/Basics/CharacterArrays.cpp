#include <iostream>
#include <format>
using std::format;
using std::cout;
using std::cin;
using std::endl;

int length(char[]);
int main(int argc, char** argv){
    char arr[10];
    //in memory
    /*
     [0] = (char) '\0'
     [1] = (char) '\0'
     [2] = (char) '\0'
     [3] = (char) '\0'
     [4] = (char) '\0'
     [5] = (char) '\0'
     [6] = (char) '\0'
     [7] = (char) '\0'
     [8] = (char) '\0'
     [9] = (char) '\0'
     */
    
    //Enter a string less than 10 in length
    cout << "Enter a string of length less than 10: ";
    cin >> arr;
    cout << format("You entered {}, of length {}\n",arr,length(arr));
    //-> You entered Jogging, of length 7
    //in memory
    /*
     [0] = (char) 'J'
     [1] = (char) 'o'
     [2] = (char) 'g'
     [3] = (char) 'g'
     [4] = (char) 'i'
     [5] = (char) 'n'
     [6] = (char) 'g'
     [7] = (char) '\0'
     [8] = (char) '\0'
     [9] = (char) '\0'
     */
    //cout stops printing the characters in a character array once it encounters a '\0'
    
    //if we do something like
    arr[8] = 'F';
    cout << format("You entered {}, of length {}\n",arr,length(arr));
    //-> You entered JoggingF, of length 7 (length function stops at first occurence of '\0')
    //even though we encoutered '\0' at index 7, since there were valid characters afterwards, they were printed while '\0' was
    //ignored
    
    //if we do something like
    arr[7] = 'E';
    cout << format("You entered {}, of length {}\n",arr,length(arr));
    //-> You entered JoggingEF, of length 9
    //since we encoutered '\0' at index 9
    
    
    cout << "Enter a string of length greater than 10: ";
    cin >> arr;
    cout << format("Only the following was stored in arr {}, length: {}\n",arr,length(arr));
    //-> You entered abcdefghi, of length: 9
    //in memory (IF for the above 'cin' prompt, we enter a string  >= 10 in length)
    /*
     [0] = (char) 'a'
     [1] = (char) 'b'
     [2] = (char) 'c'
     [3] = (char) 'd'
     [4] = (char) 'e'
     [5] = (char) 'f'
     [6] = (char) 'g'
     [7] = (char) 'h'
     [8] = (char) 'i'
     [9] = (char) '\0'
     */
    
    //in memory (IF for the above 'cin' prompt, we enter a string  < 10 in length)
    /*
     [0] = (char) 'a'
     [1] = (char) 'b'
     [2] = (char) 'c'
     [3] = (char) '\0' //automatically appended by the language runtime
     [4] = (char) 'i'  //from Jogging
     [5] = (char) 'n'  //from Jogging
     [6] = (char) 'g'  //from Jogging
     [7] = (char) 'E'  //from the changes we made to arr
     [8] = (char) 'F'  //from the changes we made to arr
     [9] = (char) '\0'
     */
    
    
    //How about
    int arr2[10];
    //in memory
    /*
     [0] = (int) 0
     [1] = (int) 0
     [2] = (int) 0
     [3] = (int) 0
     [4] = (int) 0
     [5] = (int) 0
     [6] = (int) 0
     [7] = (int) 0
     [8] = (int) 0
     [9] = (int) 1876947328
     */
    
    int arr3[10]{0};
    //in memory
    /*
     [0] = (int) 0
     [1] = (int) 0
     [2] = (int) 0
     [3] = (int) 0
     [4] = (int) 0
     [5] = (int) 0
     [6] = (int) 0
     [7] = (int) 0
     [8] = (int) 0
     [9] = (int) 0
     */
    
    return 0;
}

int length(char arr[]){
    int count {0};
    for(; arr[count]!='\0'; count++);
    return count;
}
