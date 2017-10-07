#!/usr/bin/env python
# -*- coding: utf-8 -*    
'''
结束单一的python脚本进程
'''
#导入包
import os
import time #定时模块
import subprocess #执行终端命令模块

#将当前系统中执行python脚本的进程信息输出到临时文件文件
os.system('ps -e | grep python >jincheng.txt')

#time.sleep(1)

#打开临时文件
f = open('jincheng.txt','r')
#读取临时文件并提取其中的数据
string=f.read()[1:5]

#pid = int(string)

#kill -SIGINT pid

#string='-SIGINT '+string

#杀死进程
subprocess.call(['kill','-2',string])

#关闭文件IO
f.close()

#删除临时文件
os.remove('./jincheng.txt')
