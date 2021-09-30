#include <iostream>

struct sqr_share{ int p; };
struct rect_share{ int p, q; };
struct tri_shape{ int p, g, r; };
struct geoShape{
enum type{SQR, REC, TRI};
union shape{
sqr_share si;
rect_share s2;
tri_shape s3;
};
type t;
shape s;
};

int main(){
    struct geoShape shape;
    std::cout << sizeof(geoShape) << std::endl;
    std::cout << sizeof(int) << std::endl;
    return 0;
}

//16 ans