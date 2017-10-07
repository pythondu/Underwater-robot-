#!/usr/bin/env python
# -*- coding: utf-8 -*    
"""
同时结束多个的python脚本进程
"""
#导入相关的包
import os
import time
import subprocess

#将当前系统中执行python脚本的进程信息输出到临时文件文件
os.system('ps -e | grep python >jincheng.txt')

#time.sleep(1)

#打开临时文件并读取每一行的数据
with open('jincheng.txt','r') as f:
	lis=f.readlines()

#遍历每一行的数据
for li in lis:
	try:
		#截取PID并将其杀死
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
#关闭文件io
os.remove('./jincheng.txt')
