#!/bin/bash
# Prompts the user for directory name and then create it
echo "New directory: "
read NEW_DIR

#save original directory
ORIG_DIR=$(pwd)

#check to make sure it doesn't already exist
[[ -d $NEW_DIR ]] && echo $NEW_DIR already exist, aborting && exit 
mkdir $NEW_DIR

cd $NEW_DIR
pwd

for n in 1 2 3 4
do 
    touch file$n
done 

ls file? 

for names in file? 
do  
    echo this file is named $names > $names
done

cat file?

cd $ORIG_DIR
rm -rf $NEW_DIR
echo "Goodbye and see you again!" 