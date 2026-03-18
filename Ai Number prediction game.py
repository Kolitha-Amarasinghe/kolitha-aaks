print("Think Your Favourite number in between 1 & 100")
L=1
H=100
avg=0
c=0
avg=(H+L)//2
print("Your number is ",avg)
s=input("Enter Too High or Too Low or Correct:")
while(c<6):
    if(s=="Too High"):
        L=avg
        avg=(H+L)//2
        print("Your number is ",avg)
        s=input("Enter Too High or Too Low or Correct:")
        c+=1
        
    elif(s=="Too Low"):
         H=avg
         avg=(H+L)//2
         print("Your number is ",avg)
         s=input("Enter Too High or Too Low or Correct:")
         c+=1
    elif( s=="Correct"):
        print("My Gusse correct in ",c+1,"time") 
        break
    
    else:
        print("Undefined Input Value You are insert")
        c+=1
        
    
