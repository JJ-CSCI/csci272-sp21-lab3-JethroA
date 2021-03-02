//------------------------------
//  DO NOT MODIFY NEXT LINE
//------------------------------
#include "catch.hpp"
//------------------------------

// Put the assignment code here
//4 double tpes a b c d
//main has pqr
#include <iostream>
class Quaternion {
  public:
  double a, b, c, d;
Quaternion( double p,double q,double r){
  a = p;
  b = q;
  c = r;
}

//= operator
 bool operator=(const Quaternion){
if ((p->a==this->a)&&(p->b==this->b)&&(p->c==this->c)&&(p->d==this->d))
 return true;
 else
 return false;}

//+ operator
 Quaternion operator+(const Quaternion){

return Quaternion;}
 
//- operator
 Quaternion operator-(const Quaternion){

return Quaternion;}

//* operator
 Quaternion operator*(const Quaternion){

 return Quaternion;}
};



//------------------------------
//   DO NOT MODIFY TEST CASES
//------------------------------
TEST_CASE( "Assignment" ) {
    SECTION( "q1" ) {
        Quaternion q{1.0, 2.0, 3.0, 4.0};
        Quaternion p{1.0, 2.0, 3.0, 4.0};
        REQUIRE( q == p );
    }
    SECTION( "q2" ) {
        Quaternion q{1.0, 2.0, 3.0, 4.0};
        Quaternion p{1.0, 2.0, 3.0, 4.0};
        Quaternion r{2.0, 4.0, 6.0, 8.0};
        REQUIRE( (q + p) == r );
    }
    SECTION( "q3" ) {
        Quaternion q{1.0, 2.0, 3.0, 4.0};
        Quaternion p{1.0, 2.0, 3.0, 4.0};
        Quaternion r{0.0, 0.0, 0.0, 0.0};
        REQUIRE( (q - p) == r );
    }
    SECTION( "q3" ) {
        Quaternion q{1.0, 2.0, 3.0, 4.0};
        Quaternion r{2.0, 4.0, 6.0, 8.0};
        REQUIRE( (q * 2.0) == r );
    }
}
//------------------------------
