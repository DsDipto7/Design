#include<bits/stdc++.h>
using namespace std;

class singleton{

public:
 virtual void draw()=0;
};

class rectangle : public singleton{
    public:
    void draw()
    {
        cout<<"This is  Rectangle"<<endl;
    }
};

class square : public singleton{
public:
    void draw()
    {
        cout<<"This is square"<<endl;
    }
};

class shapefactory{
    static shapefactory *obj;

    shapefactory(){}
public:
    static shapefactory* getinstance()
    {

        return obj;
    }

   singleton* getshape(string shapetype)
    {

      if(shapetype=="rectangle")
      {
          return new rectangle();
      }
      else if(shapetype=="square")
      {
          return new square();
      }
      else 
      {return nullptr;
      }
    }
};

shapefactory* shapefactory::obj=nullptr;

int main()
{
    shapefactory* shapefactory1 = shapefactory::getinstance();




    singleton *singleton1 = shapefactory1->getshape("rectangle");
    singleton1->draw();

   singleton *singleton2 = shapefactory1->getshape("square");
   singleton2->draw();

}

