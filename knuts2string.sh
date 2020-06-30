#!/bin/bash
awk '{
sign = "";
if (substr($0,1,1)=="-")
	{sign = "-"};
gsub("-","",$0);
num = $0;
galleons = int($0/(23*17));
num = (num %( 23 * 17));
cicles = int(num/17);
num = num - cicles*17; 
result = sign galleons "/" cicles "/" num;
print result;
}' 
