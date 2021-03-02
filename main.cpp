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
  //pqr in test cases 
Quaternion( double p,double q,double r){
  p = a;
  q = b;
  r = c;
}

// bool = operator
 bool operator=(const Quaternion& p){
if ((p->a == this->a) && (p -> b == this-> b)&&(p ->c == this-> c))

 return true;

 return false;}

//+ operator
 Quaternion operator+(const Quaternion){

Quaternion r;

r.a = p.a + this -> a;

r.b = p.b + this -> b;

r.c = p.c + this -> c;

return Quaternion;}
 
//- operator
 Quaternion operator-(const Quaternion){

Quaternion r;

r.a = p.a - this -> a;

r.b = p.b - this -> b;

r.c = p.c - this -> c;

return Quaternion;}

//* operator
 double operator*(const Quaternion){

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
