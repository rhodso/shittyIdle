//Source file auto-generated using CPP-Getter-Setter-Generator

//Includes
#include "building.h"

//Constructor and Destructor
building::building(){}
building::~building(){}

//Getters and Setters
int building::getCount(){ return count; }
float building::getIpt(){ return ipt; }
float building::getMultiplier(){ return multiplier; }
int building::getPrice(){ return price; }
float building::getPriceIncrease(){ return priceIncrease; }
float building::getRefund(){ return refund; }
int building::getTier(){ return tier; }
std::string building::getName(){ return name; }

void building::setCount( int _count){ count = _count; }
void building::setIpt( float _ips){ ipt = _ips; }
void building::setMultiplier( float _multiplier){ multiplier = _multiplier; }
void building::setPrice( int _price){ price = _price; }
void building::setPriceIncrease( float _priceIncrease){ priceIncrease = _priceIncrease; }
void building::setRefund( float _refund){ refund = _refund; }
void building::setTier( int _tier){ tier = _tier; }
void building::setName( std::string _name){ name = _name; }

//Other methods
void building::buy(){}
void building::sell(){}
