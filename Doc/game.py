x = 0
y = 0
dead = False
while(not dead):
    print("position:",x,y)
    a = input("w, s, a, d?").strip()
    if a=='w':
        y +=1
    if a=='s':
        y -=1
    if a=='a':
        x -=1
    if a=='d':
        x +=1
    if (-0.5<=x<=-4.5 and -1.5<=y<=1.5):
        dead = True
print("GAME OVER")
        