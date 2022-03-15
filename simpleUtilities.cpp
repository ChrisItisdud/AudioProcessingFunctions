#include "simpleUtilities.h"

namespace AudioProcessingAlgorithms {
    void SimpleUtilities::LRtoMS(float l, float r, float &m, float &s){
        s=(l-r)/2;
        m=r+l;
    }
    void SimpleUtilities::MStoLR(float m, float s, float &l, float &r){
        l = m+s;
        r = m-s;
    }
    void SimpleUtilities::LRtoMS(double l, double r, double &m, double &s){
        s=(l-r)/2;
        m=r+l;
    }
    void SimpleUtilities::MStoLR(double m, double s, double &l, double &r){
        l = m+s;
        r = m-s;
    }
}