/* 
 * File:   Product.hh
 * Author: abaj
 *
 * Created on May 9, 2016, 3:33 PM
 */
#include <Wt/WTimer>
#include <Wt/WObject>

using namespace Wt;

#ifndef PRODUCT_HH
#define	PRODUCT_HH

class Product : public WObject{
private:
    double time;
    int amount;
    
    WTimer *timer;
    int timeWeed;
    
public:
    void seedWeed();
    void increaseWeed();
    void countTimeWeed();
    Product();
    int getAmount(){return amount;}
};
#endif	/* PRODUCT_HH */

/*
 * czas zbierania seedTime;
 * czas sprzedarzy sellTime;
 *
 * ilosc po zebranou seedAmount;
 *
 * timer
 *  
 */