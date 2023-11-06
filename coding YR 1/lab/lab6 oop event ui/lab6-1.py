#TODO จงสร้างปุ่มสีแดง เมื่อเอาเมาส์ไปวางบนปุ่มจะแสดงสีเทา
#TODO แต่ถ้ากดค้างบนปุ่มจะแสดงสีม่วง (แก้ไข class ได้)

class Rectangle:
    def __init__(self,x=0,y=0,w=0,h=0,c = []): #! add color as array for r g b
        self.x = x # Position X
        self.y = y # Position Y
        self.w = w # Width
        self.h = h # Height
        self.c = c #* Color
    def draw(self,screen):
        pg.draw.rect(screen,self.c,(self.x,self.y,self.w,self.h))
        
class Button(Rectangle): #* make it inheritance from Rectangle
    def __init__(self, x=0, y=0, w=0, h=0):
        Rectangle.__init__(self, x, y, w, h)
    def isMouseOn(self): #! ดูว่า ตน. mouse อยู่บนสี่เหลี่ยมมั้ย
        px = pg.mouse.get_pos()[0]
        py = pg.mouse.get_pos()[1]
        if px >= self.x and px <= self.x + self.w and py >= self.y and py <= self.y + self.h:
            return True
        else:
            return False
        
    def isMousePress(self):#?mouse press check
        px = pg.mouse.get_pos()[0]
        py = pg.mouse.get_pos()[1]
        if px >= self.x and px <= self.x + self.w and py >= self.y and py <= self.y + self.h:
            if pg.mouse.get_pressed()[0] == 1: #! เช็คเมาส์อยู่ในแล้วกดมั้ย
                return True
        else:
            return False
        
import sys 
import pygame as pg

pg.init()
run = True
win_x, win_y = 800, 480
screen = pg.display.set_mode((win_x, win_y))
btn = Button(20,20,100,100) # สร้าง Object จากคลาส Button ขึ้นมา

while(run):
    screen.fill((255, 255, 255))
    if btn.isMousePress(): #? mouse press
        btn.w = 100
        btn.h = 100
        btn.c = 128,0,128
    elif btn.isMouseOn(): #* from inheritance class
        btn.w = 100
        btn.h = 100
        btn.c = 128,128,128 
    else:
        btn.w = 100
        btn.h = 100
        btn.c = 255,0,0 #! no action color red
        
    btn.draw(screen)


    pg.display.update()
    for event in pg.event.get():
        if event.type == pg.QUIT:
            pg.quit()
            run = False