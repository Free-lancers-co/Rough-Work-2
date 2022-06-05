from turtle import*
import random
colormode(255)
bgcolor('black')
pensize(1)
speed(0*10000)

a=1
while a<10:
  red=random.randrange(256)
  green=random.randrange(256)
  blue=random.randrange(256)
  tuColor1=(red,green,blue)
  x = random.randint(-500,500)
  y = random.randint(-1000,1000)
  setpos(x,y)
  pendown()
  b=1
  c=random.uniform(0.5,3.0)
  while b<200:
      color(tuColor1)
      right(b)
      forward(b*c)
      b=b+1    
  a=a+1
  write(str(x)+','+str(y)) 
  penup()
  getscreen()._root.mainloop()  
  