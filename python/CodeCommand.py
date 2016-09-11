import sys
import os

def welcome():
	print("CodeCommand CLI")
	
	
if len(sys.argv) > 1:
	i = sys.argv[1]
else:
	welcome()
	i = raw_input("> ")

print(i)