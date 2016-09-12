import sys, os, glob

modules = []
mnames = []
modulesdir = os.path.dirname(__file__) + "/modules/"

def init():
	print("Scanning for modules")
	for file in os.listdir(modulesdir):
		if file.endswith(".py"):
			modules.append(file)
			with open(modulesdir + file, "r") as f:
				n = f.readline()[10:].strip()
				mnames.append(n.lower())
				print("    " + n)
	
	print("\n" + str(len(modules)) + " found\n")
	
init()

if len(sys.argv) > 1:
	i = sys.argv[1]
else:
	#welcome()
	print("Enter module name for more options")
	i = raw_input("> ")
	print("")

try:
	m = modules[mnames.index(i.lower())]
	
	with open(modulesdir + m, "r") as f:
		print(f.readline()[10:].strip())
		print(f.readline()[13:].strip())
		a = f.readline()[11:].strip().split(",")
		
		inputs = []
		for i in a:
			t = i.strip().split(":")
			inputs.append("\"" + raw_input(t[0] + " (" + t[1] + "): ").replace("\"", "\"\"" if os.name == "nt" else "\\\"") + "\"")
		
		print("")
		
		arguments = " ".join(inputs)
		exc = modulesdir + m + " " + arguments
		print(exc)
		os.system(exc)
		
except:
	print("Invalid module name")
	sys.exit(1)