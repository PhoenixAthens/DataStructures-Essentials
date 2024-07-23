#include <iostream>
using std::cout;
struct Rect{
    int length;
    int breadth;
};
int main(){
    //creating a structure on stack
    struct Rect rectangle1 = {23, 44};
    //pointer to rectange1
    struct Rect* rectange1pointer = &rectangle1;
    
    //printing values of rectangle struct to stdout
    //approach 1 (using pointer notation)
    cout << "Length: "<<(*rectange1pointer).length<<", Breadth: "<<(*rectange1pointer).breadth<<"\n";
    
    //approach 2 (using arrow notation)
    cout << "Length: "<<rectange1pointer->length<<" Breadth: "<<rectange1pointer->breadth<<"\n";
    
    //creating a stack on heap
    struct Rect* rectange2 = (struct Rect*)malloc(sizeof(struct Rect));
    rectange2->length = 102;
    rectange2->breadth = 104;
    return 0;
}
