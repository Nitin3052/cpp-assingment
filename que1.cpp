#include<iostream>;
using namespace std;

class box{
    private:
    int length;
    int width;
    int height;

    public:
    box(int length, int width, int height){
        this->length = length;
        this->width = width;
        this->height = height;
    }

    void SetDimensions(int length, int width, int height){
    this->length = length;
    this->width = width;
    this->height = height;
    }

    int valume(){
        return length*width*height;
    }

};

// initilization assigns value when a  object is created.
// Assignment gives value after creation.