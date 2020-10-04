#!/bin/tcsh

## Department of Physics
## 2013020014
## Kim Taiwoo


## set your arguments
set file_name = $1

## warning check
if ($# >= 2) then
        echo Warning! There are too many arguments.
        echo run method: homework1.csh file_name
        exit
else if ($# == 0) then
	echo Warning! please run your shellscript with an argument.
	echo run method: homework1.csh file_name
	exit
endif



## check and make file
if (! -e $file_name) then
        echo file $file_name does not exist!
        touch $file_name
        echo an empty file $file_name was created
else
        echo file $file_name exist!
        touch b
        echo an empty file 'b' was created
endif

