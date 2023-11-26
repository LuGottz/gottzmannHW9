"""
sumLines.py

Description: reads in the text file whose name is specified on the command line and reports the sum, number of elements, and average.

Command Line Arguments: file path

Example Invocation: python3 sumLines.py dataInput.txt

"""

import sys

def checkline():
    global line
    global wordsum
    global wordcount
    global wordaverage
    wordlist = line.split()
    for word in wordlist:
        wordsum += int(word)
    wordcount += len(wordlist)
    wordaverage = wordsum / wordcount

with open(sys.argv[1]) as file:
	wordsum = 0
	wordcount = 0
	wordaverage = 0
	filelines = file.readlines()
	for line in filelines:
		checkline()
	print (wordsum, wordcount, wordaverage)