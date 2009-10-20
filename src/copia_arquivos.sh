#!/bin/bash

dir=$HOME/.gravit/pixmaps/;
cd $dir;

if [ -e lua.png ] && [ -e terra.png ] && [ -e marte.png ] && [ -e mercurio.png ] && [ -e objeto.png ] && [ -e jupiter.png ] && [ -e venus.png ] && [ -e saturno.png ] && [ -e urano.png ] && [ -e netuno.png ] && [ -e planeta_kayo.png ]; then
	 
	touch ../ok;
	echo "tudo certo" > ../ok;
else 

	rm ../ok;

fi

