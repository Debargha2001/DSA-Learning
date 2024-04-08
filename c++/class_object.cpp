#include <iostream>
using namespace std;

class Rectangle
{
    int length;
    int breadth;


    public:
    Rectangle(){
        this->length = 0;
        this->breadth = 0;
    }
    Rectangle(int length, int breadth){
        if(length < 0){
            this->length = 0;
        }
        if(breadth < 0) {
            this->breadth = 0;
        }
        this->length = length;
        this->breadth = breadth;
    }
    void setLength(int length){
        if(length<0){
            cout<<"length can not be negative"<<endl;
            this->length = 0;
            return;
        }
        this->length = length;
    }

    void setBreadth(int breadth){
        if(breadth<0){
            cout<<"breadth can not be negative"<<endl;
            this->breadth = 0;
            return;
        }
        this->breadth = breadth;
    }

    int getLength(){
        return this->length;
    }

    int getBreadth(){
        return this->breadth;
    }

    int perimeter(){
        return 2*(this->length + this->breadth);
    }
};

int main(){
    // Static/Compile-time allocation
    Rectangle r(10, 5);
    // r.length = -10;
    // r.breadth = 5;
    cout<<r.perimeter()<<endl;
    r.setLength(10);
    r.setBreadth(5);
    Rectangle r1;
    r1.setBreadth(3);
    r1.setLength(6);
    Rectangle r2 = r1;
    r2.setBreadth(10);
    cout<<r.perimeter()<<endl;
    cout<<r1.perimeter()<<endl;
    cout<<r2.perimeter()<<endl;

// Run-time / Dynamic allocation
    Rectangle* rp1 = new Rectangle();
    cout<<rp1->perimeter()<<endl;
    Rectangle* rp2 = new Rectangle(10, 5);
    
    Rectangle* rp3 = rp2;
    rp3->setBreadth(7);
    cout<<rp2->perimeter()<<endl;
    cout<<rp3->perimeter()<<endl;
}