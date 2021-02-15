# adri_oled1306
<pre>
Librairies
<details>
adri_oled1306                   = https://github.com/AdriLighting/adri_oled1306

Adafruit BusIO                  = https://github.com/adafruit/Adafruit_BusIO
Adafruit SSD1306                = https://github.com/adafruit/Adafruit_SSD1306
Adafruit GFX Library            = https://github.com/adafruit/Adafruit-GFX-Library

framework                       = https://github.com/esp8266/Arduino/tree/master/libraries
Wire                            = 
SPI                             = 

</details>
Dependency Graph
<details>
|-- [Adafruit BusIO] 1.4.1
|   |-- [Wire] 1.0
|   |-- [SPI] 1.0
|-- [Wire] 1.0
|-- [adri_oled1306] 1.0.0
|   |-- [Adafruit SSD1306] 2.4.0
|   |   |-- [Adafruit GFX Library] 1.10.2
|   |   |   |-- [Adafruit BusIO] 1.4.1
|   |   |   |   |-- [Wire] 1.0
|   |   |   |   |-- [SPI] 1.0
|   |   |   |-- [Wire] 1.0
|   |   |   |-- [SPI] 1.0
|   |   |-- [SPI] 1.0
|   |   |-- [Wire] 1.0
|   |-- [Adafruit GFX Library] 1.10.2
|   |   |-- [Adafruit BusIO] 1.4.1
|   |   |   |-- [Wire] 1.0
|   |   |   |-- [SPI] 1.0
|   |   |-- [Wire] 1.0
|   |   |-- [SPI] 1.0
|   |-- [SPI] 1.0
|   |-- [Wire] 1.0</details>
</pre>

<hr>

#### examples

adri_oled1306
<details>
<pre>
platformio.ini
<details>
[env:nodemcuv2]
platform=espressif8266
board=nodemcuv2
framework=arduino
lib_deps=Adafruit BusIO, Wire
lib_extra_dirs= ${env.lib_extra_dirs}
[platformio]
src_dir= ${env.src_dir}

</details>
</pre>
</details>
<hr>