#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

class Shape{
protected:
    string mShape;
    float mArea;
public:
    virtual void print()=0;
    virtual void calculateArea()=0;
    float getArea(){
        return mArea;
    }
};

class Square: public Shape{
private:
    float mLength;
public:
    Square(float length){
        mLength = length;
        mShape = "square";
    }
    Square(){
        mLength=0;
        mShape="undefined";
    }
    void print() override{
        cout<<fixed<<setprecision(2)<<mShape<<" "<<mLength<<endl;
    }

    void calculateArea() override{
        mArea = mLength *mLength;
    }
};

class Rectangle: public Shape{
private:
    float  mLength, mWidth;
public:
    Rectangle (float length, float width){
        mLength=length;
        mWidth=width;
        mShape="rectangle";
    }
    Rectangle(){
        mLength=0;
        mWidth=0;
        mShape="undefined";
    }
    void print() override{
        cout<<fixed<<setprecision(2)<<mShape<<" "<<mLength<<" "<<mWidth<<endl;
    }
    void calculateArea() override{
        mArea=mLength*mWidth;
    }
};

class Circle:public Shape{
private:
    float mRadius;
public:
    Circle(float radius){
        mRadius =radius;
        mShape="circle";
    }
    Circle(){
        mRadius=0l;
        mShape="undefined";
    }
    void print() override{
        cout<<fixed<<setprecision(2)<<mShape<<" "<<mRadius<<endl;
    }
    void calculateArea() override{
        mArea = M_PI *mRadius *mRadius;
    }
};

bool is_bigger(Shape *s1, Shape *s2){
    s1->calculateArea();
    s2->calculateArea();
    if(s1->getArea() > s2->getArea()){
        return true;
    } return false;
}

int main() {
    int N;
    cout<<"Enter the number of shapes: ";
    cin>>N;
    string shape;
    float length, width, radius;
    vector<Shape*> shapes;
    for(int i=0;i<N;i++){
        cout<<"Enter the shape: ";
        cin>>shape;
        if(shape=="square"){
            cout<<"Enter the length: ";
            cin>>length;
            shapes.push_back(new Square(length));
        } else if(shape=="rectangle"){
            cout<<"Enter the length: ";
            cin>>length;
            cout<<"Enter the width: ";
            cin>>width;
            shapes.push_back(new Rectangle(length,width));
        } else if(shape=="circle"){
            cout<<"Enter the radius: ";
            cin>>radius;
            shapes.push_back(new Circle(radius));
        }
    }

    sort(shapes.begin(),shapes.end(), is_bigger);
    for(auto i:shapes){
        i->print();
    }
    return 0;
}
