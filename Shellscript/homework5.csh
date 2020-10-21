#!/bin/tcsh

### Department of Physics
### 2013020014
### Kim Taiwoo


## set your argument
set n1 = $1
set n2 = $2
set n3 = $3
set n4 = $4
set n5 = $5
set n6 = $6
set n7 = $7
set n8 = $8


## argument check start

## too many and no argument warning
if ($# >= 9) then
	echo there are too many argument
	exit
else if ($# == 0) then
	echo at least 1 argument required
	exit
endif

## natural number check
foreach i ($*)
	if ($i <= 0) then
		echo only natural number!
		exit
	endif
end

## argument check end


## summation
set z = 0
foreach i ($*)
	@ z += $i
end

echo summation is $z

## mean
set m = $z
foreach i ($*)
	@ m = $z / $#
end
echo mean is $m

## maxima value
foreach i ($*)
	if ($i >= $1) then
		if ($i >= $2) then
			if ($i >= $3) then
				if ($i >= $4) then
					if ($i >= $5) then
						if ($i >= $5) then
							if ($i >= $6) then
								if ($i >= $7) then
									if ($i >= $8) then
										echo maxima value is $i
									endif
								endif
							endif
						endif
					endif
				endif
			endif
		endif
	endif
end

## end of script	
