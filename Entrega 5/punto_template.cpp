#include <math.h>
#include "punto_template.h"

template <class T>
punto<T>::punto(){
    cx=0;
    cy=0;
    }

template <class T>    
punto<T>::punto(T x,T y){
    cx=x;
    cy=y;
    }

template <class T>    
void punto<T>::setX(T x){
    cx=x;
    }

template <class T>    
T punto<T>::getX(){
    return cx;
}

template <class T>    
void punto<T>::setY(T y){
    cy=y;
    }

template <class T> 
T punto<T>::getY(){
    return cy;
}

template <class T> 
void punto<T>::operator++(){
    cx++;cy++;
}

template <class T> 
void punto<T>::operator--(){
    cx--;cy--;
}

template <class T> 
punto<T> punto<T>::operator+(punto<T> q){
    punto<T> z(cx+q.cx,cy+q.cy);
    return z;
}

template <class T> 
punto<T> punto<T>::operator+(T j){
    punto<T> z(cx+j,cy+j);
    return z;
}

template <class T> 
punto<T> punto<T>::operator-(punto<T> q){
    punto<T> z(cx-q.cx,cy-q.cy);
    return z;
}

template <class T> 
punto<T> punto<T>::operator-(T j){
    punto z(cx-j,cy-j);
    return z;
}

template <class T> 
T punto<T>::angulo(){
    return atan(cy/cx);
}

template <class T> 
T punto<T>::modulo(){
    return sqrt(cx*cx+cy*cy);
}