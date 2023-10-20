#!/bin/bash

filename=$1
filepath=/home/patrick/Documents/PersonalProject/holodexDesktop/UI

cp ${filepath}/template/template.h ${filepath}/headers/"${filename}".h
cp ${filepath}/template/template.cpp ${filepath}/sources/"${filename}".cpp
cp ${filepath}/template/template.ui ${filepath}/ui_files/"${filename}".ui