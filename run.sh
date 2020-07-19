#!/bin/bash

for OUTPUT in $(ls | grep .cpp)
do
 echo $OUTPUT
 g++ $OUTPUT
done
