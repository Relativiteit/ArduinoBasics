# Basics of arduino!
This repository hosts various small projects chronologically that will learn you the basics of arduino. 

- [Hardware prerequisites](#hardware-prerequisites)
- [Project Structure](#project-structure)
- [Project 1: Button LED](#project-1--button-led)
  * [BOM1 (Bill of Materials Button LED)](#bom1--bill-of-materials-button-led-)
- [Project 2: Light Dimmer](#project-2--light-dimmer)
  * [BOM2 (Bill of Materials Light Dimmer)](#bom2--bill-of-materials-light-dimmer-)
- [Project 3: LED Bar Chart](#project-3--led-bar-chart)
  * [BOM3 (Bill of Materials Led Bar Chart)](#bom3--bill-of-materials-led-bar-chart-)
- [Project 4: Strobe LED](#project-4--strobe-led)
  * [BOM4 (Bill of Materials Strobe LED)](#bom4--bill-of-materials-strobe-led-)
- [Project 5: Plant Humidity](#project-5--plant-humidity)
  * [BOM5 (Bill of Materials Plant Humidity)](#bom5--bill-of-materials-plant-humidity-)
- [Project 6: Ghost Detector](#project-6--ghost-detector)
  * [BOM6 (Bill of Material GhostDetector)](#bom6--bill-of-material-ghostdetector-)


[//]: # ( <small><i><a href='http://ecotrust-canada.github.io/markdown-toc/'>Table of contents generated with markdown-toc</a></i></small> )

## Hardware prerequisites 
For the projects the Elegoo complete starter pack is recommended however you can also only buy the necessarry parts for the projects you want to complete.
https://www.elegoo.com/collections/uno-r3-starter-kits/products/elegoo-uno-most-complete-starter-kit 

## Project Structure
The projects will have a small introduction on what is the expected outcome, and a Bill of Materials. 
You can search on project name, or project x and go up accordingly. 
* Projects 1-2 are LED projects
You can also search on BOM based on the projects, the BOMx corresponds with the project number. 



## Project 1: Button LED 
This is the "Hello World!" of electronics. 
`ButtonLedProject1` is your first program where a normally closed button is pressed so it switches to open and the Led will stop shining bright.

### BOM1 (Bill of Materials Button LED)
* Arduino Uno 
* Breadboard 
* Wires
* LED
* Digital button with 4 pins
* 10k ohm resistor 
* 220 ohm resistor 

## Project 2: Light Dimmer
Who doesn't like a good light dimmer while listing to Bruno Mars on a summers night. 
As the name `LightDimmerProject2` suggests the LED as seen in project 1 can now be controlled with an analog potentiometer. In the case of the humble LED you can't actually dimm the lumen(light power) but you can controll the frequency of the led turning on and off also called PWM (pulse width modulation). With our "inferior to robots" eyes this signal is kept high with a pulse, this will create the illusion of a dimming light source. 

### BOM2 (Bill of Materials Light Dimmer)
* Arduino Uno 
* Breadboard
* Wires
* Led
* 10k ohm potentiometer 
* 330 ohm resitor 

**Attention** If you dont have the exact resistor you can place them in series or paralell to get the correct or approximate required resistance. ! If all of this sounds new to you please check https://www.khanacademy.org/science/electrical-engineering/ee-circuit-analysis-topic/ee-resistor-circuits/a/ee-parallel-resistors so you can get up and running fast. 

## Project 3: LED Bar Chart 
A bar chart is a great visual tool to showcase a load, intensity, amplitude a whole host of things the sky is the limit but we will now limit to leds.
In `LedBarChartProject3` you will controll mutiple leds, it's almost the same as project2 but with more leds. 

### BOM3 (Bill of Materials Led Bar Chart)
* Arduino Uno
* Breadboard
* Wires
* 9 LED's
* 10k ohm potentiometer
* 9 x 220 ohm resistors 

## Project 4: Strobe LED
Whoop Whoop, it's the call of the police, `StrobeLEDproject4` will let you manipulate the led's with delays to get a stroboscobe effect.
This project will use the same potentiometer as in project 2 and project 3. 

### BOM4 (Bill of Materials Strobe LED)
* Arduino Uno
* Breadboard
* Wires
* 2 blue LEDS (can be any other colour)
* 2 red LEDS (can be any other color the world is your oyster)
* 10k ohm potentiometer 
* 4 x 220 ohm resistors 

## Project 5: Plant Humidity
In ```PlantHumidityProject5``` measure resistance in the soil to determine if a plant needs water, this is great project that you can combine with a valve lateron to give your plants water autonomously. 
This project will not be using the breadboard and will directly connect to the arduino. So be gentle with handeling components!!

## BOM5 (Bill of Materials Plant Humidity)
* Arduino Uno
* Breadboard
* Wires
* LED
* Water level Detection Sensor Module 
* Piezo Zoomer

## Project 6: Ghost Detector
Who you gonna call!! ```GhostDectorProject6``` yeah it does not roll of the tongue but it is what it is. 
With a wire we are going to detect changes in the electrical magnetic field in and around your dwelling. 
To make the whole project portable simply add a battery as a powersource and try to recreate blair which (please don't).

## BOM6 (Bill of Material GhostDetector) 
* Arduino Uno 
* Breadboard
* Wires
* 3 red LEDS
* 1 yellow LED
* 6 green LEDs
* 10 x 220-ohm resistors
* 20 cm wire with a single wirecore 
* 1M-ohm resistor 


add more projects 

