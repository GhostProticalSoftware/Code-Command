import sys, os, glob

modules = []
mnames = []

def init():
	print("Scanning for modules")
	for file in os.listdir("./modules"):
		if file.endswith(".py"):
			modules.append(file)
			with open("./modules/" + file, "r") as f:
				n = f.readline()[10:].strip()
				mnames.append(n)
				print("    " + n)
	
	print("\n" + str(len(modules)) + " found\n")
	
init()

if len(sys.argv) > 1:
	i = sys.argv[1]
else:
	#welcome()
	print("Enter module name for more options")
	i = raw_input("> ")

print(i)