#TODO ให้สร้างกล่องสี่เหลี่ยมขนาด 100*100 ที่เคลื่อนที่ในหน้าจอได้ด้วยการกดปุ่ม W A S D


class Rectangle:
    def __init__(self,x=0,y=0,w=0,h=0,c = []): #! add color as array for r g b
        self.x = x # Position X
        self.y = y # Position Y
        self.w = w # Width
        self.h = h # Height
        #self.c = c #* Color
        self.c = 0,0,0
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
        
        
########################################################################################################

import sys 
import pygame as pg
       
pg.init()
run = True
win_x, win_y = 800, 480

pos_x,pos_y = 20,20 #position
spd = .2 #speed
state = '' #for keyboard input
screen = pg.display.set_mode((win_x, win_y))
btn = Button(pos_x,pos_y,100,100)

while(run):        
    screen.fill((255, 255, 255))


    if state == 'W':
        pos_y -= spd
    elif state == 'S':
        pos_y += spd 
    elif state == 'A':
        pos_x -= spd
    elif state == 'D':
        pos_x += spd
    else:
        pass
    btn = Button(pos_x,pos_y,100,100)
    btn.draw(screen)
    
    pg.display.update()
    
    for event in pg.event.get():
        if event.type == pg.QUIT:
            pg.quit()
     
        if event.type == pg.KEYDOWN and event.key == pg.K_w:
            state = 'W'
        elif event.type == pg.KEYDOWN and event.key == pg.K_a:
            state = 'A'
        elif event.type == pg.KEYDOWN and event.key == pg.K_s:
            state = 'S'
        elif event.type == pg.KEYDOWN and event.key == pg.K_d:
            state = 'D'
        elif event.type == pg.KEYUP:
            state = 'STOP'



    