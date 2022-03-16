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
    template <typename T>
    T myAbs(T value){
        if(value<0)return value*-1;
        else return value;
    }
    template <typename T>
    T SimpleUtilities::slew(T target, T &value, T threshold){
        if(myAbs(value-target)<=threshold){
            value = target;
            return value;
        }
        else {
            if(value<target)
                value+=threshold;
            else
                value-=threshold;
            return value;
        }
    }
}