//Header file auto-generated using CPP-Getter-Setter-Generator
#ifndef BUILDING_H
#define BUILDING_H

//Includes
#include "debugger.h"
#include <string>

class building {
	public:
		//Constructor and Destructor
		building();
		~building();

		//Getters and Setters
		int getCount();
        float getIpt();
		float getMultiplier();
		int getPrice();
		float getPriceIncrease();
		float getRefund();
        int getTier();
        std::string getName();

		void setCount( int _count );
        void setIpt( float _ipt );
		void setMultiplier( float _multiplier );
		void setPrice( int _price );
		void setPriceIncrease( float _priceIncrease );
		void setRefund( float _refund );
        void setTier( int _tier );
        void setName( std::string _name );

		//Other methods
        void buy();
        void sell();

	private:
		//Variables
        int count;
        float ipt;
		float multiplier;
		int price;
		float priceIncrease;
		float refund;
        int tier;
        std::string name;

};
#endif
