#!/usr/bin/python
#-*- coding:UTF-8 -*-

import os
import shutil

def moveFile():
	# 原文件目录
	url = '/home/tony/build-process_and_control-unknown-Debug/'
	# 目标目录
	desUrl = '/home/tony/picture/'
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
	#i = 0
	#原文件目录
	url = '/home/tony/build-process_and_control-unknown-Debug/'
	#目标目录
	desUrl = '/home/tony/picture/'
	#封装e判断目录
	file_names = os.listdir(url)
	for name in file_names:
	#	os.rename(url+name,url+'可疑图'+str(i)+'.jpg')
	#	i+=1	
		if name.startswith('可疑'):
	#实现文件转储
			shutil.move(url+name,desUrl+name)

	#bat文件转储＋格式修改
	moveFile()
if __name__=='__main__':
	main()
