#!/bin/tcsh

### Department of Physics
### 2013020014
### Kim Taiwoo


## set your argument
echo input your file or directory name
set file_name = $<

## file check
if (! -e $file_name) then
	echo "$file_name does not exist"
	exit
else

## eventloop start
	foreach i (`ls`)
		if ($i == $file_name) then
			echo "delete $file_name? input your answer y/n/q"
			set answer = $<
		
			switch ($answer)
			case [yY]:
				rm -rf $file_name
				echo deleted!
				breaksw
			case [nN]:
				echo not deleted!
				breaksw
			case [qQ]:
				echo quited!
				breaksw
			default:
				echo quited!
				breaksw
			endsw
		endif
	end
endif
## eventloop end
