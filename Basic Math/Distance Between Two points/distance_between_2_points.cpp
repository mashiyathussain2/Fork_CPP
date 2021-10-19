#include <iostream>
#include <cmath>

// For Calculating distance in 2 dimension
template <class T>
double distance(T x1,T y1,T x2,T y2){
    T disSquare = (x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1);
    return sqrt(disSquare);
}

// For Calculating distance in 3 dimension
template<class T>
double distance(T x1,T y1,T z1,T x2,T y2,T z2){
    T disSquare = (x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1) + (z2 - z1)*(z2 - z1);
    return sqrt(disSquare);
}

int main(){
    // Example for 2 dimension
    float dist1 = distance(10,5,7,8);
    std::cout<<"Distance Betweeen Point (10,5) and (7,8) is: "<<dist1<<"\n";

    // Example for 3 dimension
    float dist2 = distance(10,7,2,6,13,22);
    std::cout<<"Distance Between Point (10,7,2) and (6,13,22) is: "<<dist2<<"\n";

    return 0;
}