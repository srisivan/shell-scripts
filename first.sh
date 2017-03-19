#!/bin/bash
# This is a comment

function chmd()
{
	echo enter your directory
	read my_directory
	
	echo enter the branch directory
	read my_branch

	echo enter filename
	read filename

	cd $my_directory/$my_branch
	
	vim $filename

	
}
