#!/usr/bin/env python
# -*- coding: utf-8 -*    
  
import os
import time
import subprocess

os.system('ps -e | grep python >jincheng.txt')

#time.sleep(1)


with open('jincheng.txt','r') as f:
	lis=f.readlines()


for li in lis:
	try:
		string=int(li[0:5])
		string=str(string)
		subprocess.call(['kill','-2',string])
	except:
		print('没有杀死进程！！！')
#string=f.read()[1:5]

#pid = int(string)

#kill -SIGINT pid

#string='-SIGINT '+string

#subprocess.call(['kill','-2',string])

#f.close()

os.remove('./jincheng.txt')
