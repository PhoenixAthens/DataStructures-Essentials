class DynamicArray {
private:
    int* arr;
    int length = 0;
    int tail = 0;
public:
    DynamicArray(int capacity) {
        arr = new int[capacity];
        length = capacity;
    }

    int get(int i) {
        return arr[i];
    }

    void set(int i, int n) {
        arr[i]=n;
    }

    void pushback(int n) {
        if(tail==length){
            int* tempArr = new int[length*2];
            for(int i = 0;i<length;i++){
                *(tempArr+i)=*(arr+i);
            }
            length*=2;
            delete []arr;
            arr = tempArr;
            
        }
        arr[tail++]=n;
    }

    int popback() {
        return *(arr+(--tail));
    }

    void resize() {
        int* tempArr = new int[length*2];
        for(int i = 0;i<length;i++){
            *(tempArr+i)=*(arr+i);
        }
        length*=2;
        delete []arr;
        arr = tempArr;
    }

    int getSize() {
        return tail;
    }

    int getCapacity() {
        return length;
    }
};

