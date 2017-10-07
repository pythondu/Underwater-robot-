#!/usr/bin/env python
# -*- coding: utf-8 -*    
'''
结束单一的python脚本进程
'''
#导入包
import os
import time
import subprocess

#将当前系统中执行python脚本的进程信息输出到临时文件文件
os.system('ps -e | grep python >jincheng.txt')
#睡眠10秒钟
time.sleep(10)

#打开文件
f = open('jincheng.txt','r')

#读取数据提取PID
string=f.read()[1:5]

#pid = int(string)

#杀死进程
subprocess.call(['kill',' -15 '+string])
#关闭文件
f.close()
#删除临时文件
os.remove('./jincheng.txt')
