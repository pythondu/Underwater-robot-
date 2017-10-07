#!/usr/bin/python
#-*- coding:UTF-8 -*-

import os
import shutil
import time

def moveFile():
	# 原文件目录
	url = '/home/zlm/build-process_and_control-unknown-Debug/'
	# 目标目录
	desUrl = '/home/zlm/picture/'
	# 封装e判断目录
	file_names = os.listdir(url)
	for name_bat in file_names:
		#	os.rename(url+name,url+'可疑图'+str(i)+'.jpg')
		#	i+=1
		if name_bat.endswith('.bat'):
			# 实现文件转储
			shutil.move(url + name_bat, desUrl + name_bat)
			name_avi = name_bat.split('.')[0]
			os.rename(url+name_bat,desUrl+name_avi+'.avi')

def main():
	#定义临时变量
	temp = 0
	#i = 0
	#原文件目录
	url = '/home/zlm/build-process_and_control-unknown-Debug/'
	#目标目录
	desUrl = '/home/zlm/picture/'
	#封装e判断目录
	file_names = os.listdir(url)
	#获取目标目录
	des_dir = os.listdir(desUrl)
	temp = len(des_dir)
	for name in file_names:
	#	os.rename(url+name,url+'可疑图'+str(i)+'.jpg')
	#	i+=1	
		if name.startswith('可疑'):
	#实现文件转储
			temp+=1
			shutil.move(url+name,desUrl+'可疑图'+str(temp)+'.'+name.split('.')[1])

	#bat文件转储＋格式修改
	moveFile()
if __name__=='__main__':
	main()
