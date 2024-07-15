
#include <string.h>
#include <unistd.h>
//what's the purpose of unistd.h?

void main(){
    size_t len;
    int msg_len = 0;
    char buf[100];
    
    strncpy(buf, "This is writing to screen using write() system call instead of printf library function\n",99);
    msg_len = strlen(buf);
    len = write(1,buf,msg_len);
    //1 refers to stdout
    //2 refers to stderr
    //0 refers to stdin
}
//output: This is writing to screen using write() system call instead of printf library function
