#include <iostream>
using namespace std; 
#include <bits/stdc++.h> 


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

        itreator(int _val):val(_val){}
        
        itreator& opreator ++() {
            ++val;
            return *this;
        }

        bool opreator!=(itreator& other ) const{
            return this.val == other.val;
        }

        int operator* (){
            return val;
        }  
    };

    itreator begin(){
        return itreator(first);
    }

    itreator(){
         return itreator(end);
    }





};

int main(int argc, const char * argv[]) {
    
    cout << "####  range:  ####";
	for (int i: range(5,9))
		cout << i << " ";   


    return 0;
}