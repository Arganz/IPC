#!/bin/bash

dzien=`date +%u`
./1

if [ $dzien -gt 2 ]; then # do zmiany
slowo=`./2`

litera=`echo $slowo | cut -c 1`

if [[ $litera == [a-zA-Z] ]] ; then
spr=`echo $slowo | aspell -l pl --list`
if [ -z $spr ]; then
echo "Slowo poprawne"
else
echo "Slowo nie poprawne"
fi
else
echo "Slowo nie poprawne"
fi
else
	echo "Nie ma weekendu wiec nie pracuje"
fi



ipcrm -Q 7
