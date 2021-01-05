#ifndef DRIVER_H
#define DRIVER_H 

#include <Adafruit_SSD1306.h>
#include <Wire.h>


class adriOled1306_driver 
{
public:
	Adafruit_SSD1306 	_display;
	boolean 			_isEnabled = false;
	adriOled1306_driver();
	~adriOled1306_driver(){};
	
};
#endif