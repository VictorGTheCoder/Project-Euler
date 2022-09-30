from importlib.resources import path


paths = [
'75',
'95 64',
'17 47 82',
'18 35 87 10',
'20 04 82 47 65',
'19 01 23 75 03 34',
'88 02 77 73 07 63 67',
'99 65 04 28 06 16 70 92',
'41 41 26 56 83 40 80 70 33',
'41 48 72 33 47 32 37 16 94 29',
'53 71 44 65 25 43 91 52 97 51 14',
'70 11 33 28 77 73 17 78 39 68 17 57',
'91 71 52 38 17 14 91 43 58 50 27 29 48',
'63 66 04 68 89 53 67 30 73 16 69 87 40 31',    
'04 62 98 27 23 09 70 98 73 93 38 53 60 04 23']

#print(paths)
paths = [row.split() for row in paths]
#print("-----------------------")
#print(paths)

paths = [[int(i) for i in row] for row in paths]
##print("-----------------------")
##print(paths[2][0])

##path[3][2] --> paths[4][2] and paths[4][3]
##path[4][2] --> paths[5][2] and paths[5][3]
##path[5][3] --> paths[6][3] and paths[6][4]



for i in range(len(paths) - 1, 0, -1):
    for j in range(len(paths[i]) - 1):
        
        paths[i-1][j] += max(paths[i][j], paths[i][j+1])
        print(paths[i])
        #print(paths[i-1][j])
    print("-----------------")
print(paths[0][0])


