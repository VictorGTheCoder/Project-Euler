
paths =  [[]]
with open("text_files/p067_triangle.txt", "r") as f:
    paths = [line.split() for line in f]
    print(paths)
    paths = [[int(i) for i in row] for row in paths]
    print(paths)

f2 = open("text_files/result.txt", "w")
for p in paths:
    for c in p:
        f2.write(str(c))
        f2.write(", ")


for i in range(len(paths) - 1, 0, -1):
    for j in range(len(paths[i]) - 1):
        
        paths[i-1][j] += max(paths[i][j], paths[i][j+1])
        print(paths[i])
        #print(paths[i-1][j])
    print("-----------------")
print(paths[0][0])

