

string = r"""
Choose a shape to calculate the volume of:

________________________________

1. Sphere [Type '1' for sphere]
  
   *******
 ******---**
*********-***
*************
 ***********
   *******
|--R--|

________________________________

2. Cylinder [Type '2' for cylinder]

   ---------------------     ---
 /     \                \     |
|       |                |    D
|       |                |    |
 \     /                /     |
   ---------------------     ---
|-------------H------------| 
 
________________________________

3. Cone [Type '3' for cone]

        A            ---
       / \            |
      /   \           |
     /     \          |
    /       \         |
   /         \        H
  /           \       |
 /___-------___\      |
/               \     |
 \      .      /      |
  \___________/       |
|---R---|            ---

"""


bigstring = """
2026 has been a big year for UFO news, driven mostly by government disclosure rather than a surge of new sightings. 
Beginning May 8, 2026, the Trump administration started releasing declassified records through a 
Pentagon-run site called the Presidential Unsealing and Reporting System for UAP Encounters (PURSUE), 
following an executive order signed in January directing the military and other agencies to produce more UFO documents. 
The fifth batch, released August 7, contained 41 files from the Pentagon, FBI, CIA, State Department and the 
Executive Office of the President, spanning 1950 to this year. Among the 2026 cases, one witness reported three separate 
sightings within five hours somewhere in the western U.S., and a civilian phone interview described similar incidents 
corroborated by a second witness. Many details are withheld, however: exact dates and locations were often redacted to 
protect witnesses and sensitive military sites. Most of the released footage is the grainy sensor and camera video typical 
of past disclosures. Several cases remain officially unresolved, but none of the files show evidence of extraterrestrial origin. 


"""

def loop(x):
    lineList = x.splitlines()
    
    output = []
    n = 0
    for p in lineList:
        if lineList[n] == '':
            lineList.pop(n)
        n += 1


    stringList = str(lineList)  
    iteration1 = stringList.replace("[", "{", 1)
    iteration2 = iteration1.replace("]", "}", -1)
    newList = iteration2.replace("'", "\"")
    
    print("\n\nThis is your array of lines formatted for a C++ array: \n\n")
    print(newList)
    length = newList.count(",")
    print(length + 1)
    return lineList

loop(bigstring)