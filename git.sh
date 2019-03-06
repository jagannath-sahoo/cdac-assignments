#!/bin/sh
# create File
git init
git pull
git add .
git commit -m "$1"
git push -u origin master

