#!/bin/bash

read input
printf `echo "$input" | bc -l`