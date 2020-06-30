#!/bin/bash
awk -F '/'  '{
sign = 0;
if (substr($0,1,1)=="-") 
	{sign = 1};
gsub("-", "",$0);;
knuts = (($1*23 + $2)*17 + $3);
if (sign != 0)
{knuts = -knuts;}
print knuts;
}'
