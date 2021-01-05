#include "driver.h"


adriOled1306_driver::adriOled1306_driver() :  _display(128, 64, &Wire, -1) {
	if(_display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) { // Address 0x3D for 128x64
 		_isEnabled = true;
	}  
}