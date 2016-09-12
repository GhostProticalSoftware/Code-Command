#MTModule: Hash
#Description: Returns the hash of a given string
#Arguments: algorithm:string, data:string

import sys, hashlib

if len(sys.argv) > 2:
	h = hashlib.new(sys.argv[1])
	h.update(sys.argv[2])
	print(h.hexdigest())
else:
	print("Usage: hash.py algo data\n")
	print("Supported algos:")
	print(" ".join(hashlib.algorithms_available))