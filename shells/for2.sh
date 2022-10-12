#!/bin/bash

row="onn two three"
for man in $row; do
	for((i=0;i<=9;i++)) do
		echo "$mon $i"
	done
done
