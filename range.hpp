#include <iostream>
using namespace std;

namespace itertools{
class range{

private:
    int first,last;

public:
    range(int _first,int _last){
        first = _first;
        last = _last;
    }

    //begin , opreator++ , opreator != ,

    class itreator{

    private:
        int val;


    public:
        itreator(int _val):val(_val){}

        itreator& operator++() {
            ++val;
            return *this;
        }

        bool operator!=(itreator& other ) const{
            return this->val != other.val;
        }

        int operator* (){
            return val;
        }
    };

    itreator begin(){
        return itreator(first);
    }

    itreator end(){
        return itreator(last);
    }

};
}

