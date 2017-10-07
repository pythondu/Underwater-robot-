#!/usr/bin/env python
# -*- coding: utf-8 -*    
  
import os
import time
import subprocess

os.system('ps -e | grep python >jincheng.txt')

time.sleep(10)

f = open('jincheng.txt','r')

string=f.read()[1:5]

#pid = int(string)

subprocess.call(['kill',' -15 '+string])

f.close()

os.remove('./jincheng.txt')
