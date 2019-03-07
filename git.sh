#!/bin/sh
# create File
git init
git add .
git commit -m "$1"
git push -u origin master

