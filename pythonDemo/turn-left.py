#!/usr/bin/env python
# -*- coding: utf-8 -*    

#p5 p6 left-machin xiadianjiqudong in3 in4
#p2 p3 right-machin xiadianjiqudong in1 in2
#p9 p10 up-down-machin shangdianjiqudong in2 in1 
  
import RPi.GPIO as GPIO  
import time  
import signal  
import atexit  
import sys
import time
  
atexit.register(GPIO.cleanup)    
  
servopin1 = 1
servopin2 = 2
servopin3 = 3
servopin4 = 4
servopin5 = 5
servopin6 = 6
servopin7 = 7
servopin8 = 8
servopin9 = 9
servopin10 = 10

GPIO.setmode(GPIO.BCM) 
 
GPIO.setup(servopin1, GPIO.OUT, initial=False)
GPIO.setup(servopin2, GPIO.OUT, initial=False)  
GPIO.setup(servopin3, GPIO.OUT, initial=False)
GPIO.setup(servopin4, GPIO.OUT, initial=False) 
GPIO.setup(servopin5, GPIO.OUT, initial=False)
GPIO.setup(servopin6, GPIO.OUT, initial=False)
GPIO.setup(servopin7, GPIO.OUT, initial=False)
GPIO.setup(servopin8, GPIO.OUT, initial=False)
GPIO.setup(servopin9, GPIO.OUT, initial=False)
GPIO.setup(servopin10, GPIO.OUT, initial=False)

p1 = GPIO.PWM(servopin1,50) #50HZ
p2 = GPIO.PWM(servopin2,50) #50HZ  
p3 = GPIO.PWM(servopin3,50) #50HZ   
p4 = GPIO.PWM(servopin4,50) #50HZ
p5 = GPIO.PWM(servopin5,50) #50HZ
p6 = GPIO.PWM(servopin6,50) #50HZ
p7 = GPIO.PWM(servopin7,50) #50HZ
p8 = GPIO.PWM(servopin8,50) #50HZ
p9 = GPIO.PWM(servopin9,50) #50HZ
p10 = GPIO.PWM(servopin10,50) #50HZ

p1.start(0)
p2.start(0)
p3.start(0)
p4.start(0)
p5.start(0)
p6.start(0)
p7.start(0)
p8.start(0)
p9.start(0)
p10.start(0)


time.sleep(0.02)  

pin1 = 1
pin2 = 2
pin3 = 3
pin4 = 4
pin5 = 5
pin6 = 6
pin7 = 7
pin8 = 8
pin9 = 9
pin10 = 10

 
GPIO.setwarnings(False)
GPIO.setup(pin1,GPIO.OUT)
GPIO.setup(pin2,GPIO.OUT)
GPIO.setup(pin3,GPIO.OUT)
GPIO.setup(pin4,GPIO.OUT)
GPIO.setup(pin5,GPIO.OUT)
GPIO.setup(pin6,GPIO.OUT)
GPIO.setup(pin7,GPIO.OUT)
GPIO.setup(pin8,GPIO.OUT)
GPIO.setup(pin9,GPIO.OUT)
GPIO.setup(pin10,GPIO.OUT)


while(True):
	#for i in range(0,100,1):
	#GPIO.output(pin5,False)             #left
	#GPIO.output(pin6,True)

	GPIO.output(pin1,True)                #light     
	GPIO.output(pin4,False)

	GPIO.output(pin2,False)               #right-machin
	GPIO.output(pin3,True)					#turn-left
 
	#GPIO.output(pin9,False)             #up down   
	#GPIO.output(pin10,True)

	#GPIO.output(pin9,True)              
	#GPIO.output(pin10,False)
	#time.sleep(0.01)
	#break


