def find(x1,y1,x2,y2):
    #y=kx+b
    #b=y-kx y1=k*x1+y2-k*x2 y1=k*(x1-x2)+y2 k=(y1-y2)/(x1-x2)
    k=(y1-y2)/(x1-x2)
    b=y1-k*x1
    if b<0:
        if k==1:
            print("y=x"+str(b))
        elif k==-1:
            print("y=-x"+str(b))
        elif k==0:
            print("y="+str(b))
        else:
            print("y="+str(k)+"x"+str(b))
    if b>0:
        if k==1:
            print("y=x"+"+"+str(b))
        elif k==-1:
            print("y=-x"+"+"+str(b))
        elif k==0:
            print("y="+str(b))
        else:
            print("y="+str(k)+"x"+"+"+str(b))
    if b==0:
        if k==1:
            print("y=x")
        elif k==-1:
            print("y=-x")
        elif k==0:
            print("y=0")
        else:
            print("y="+str(k)+"x")
find(float(input("x1:")),float(input("y1:")),float(input("x2:")),float(input("y2:")))