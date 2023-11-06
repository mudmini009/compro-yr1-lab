#TODO ให้ทำความเข้าใจ Code input box และสร้างแบบฟอร์มที่ให้กรอกชื่อ ชื่อจริง และอายุ
#TODO โดยช่องอายุจะใส่ได้แค่ตัวเลขเท่านั้น และเมื่อกดปุ่ม submit ให้แสดง text ข้างล่างหน้าจอในรูปแบบ
#TODO Hello [firstname] [lastname]! You are [age] years old.

class Rectangle:
    def __init__(self,x=0,y=0,w=0,h=0,text="",c = []): #! add color as array for r g b
        self.rect = pg.Rect(x, y, w, h)
        self.x = x # Position X
        self.y = y # Position Y
        self.w = w # Width
        self.h = h # Height
        self.text = text #* text
        self.c = c #* Color
    def draw(self,screen):
        if self.text != "": #!if it not just free space
            itext = MFONT.render(self.text, True, (0,0,0))
            pg.draw.rect(screen,self.c,(self.x,self.y,itext.get_width()+20,itext.get_height()+20))
            screen.blit(itext, (self.x+10, self.y+10))
        else:
            pg.draw.rect(screen,self.c,(self.x,self.y,self.w,self.h))
            
class Button(Rectangle): #* make it inheritance from Rectangle
    def __init__(self, x=0, y=0, w=0, h=0,text="",c = []):
        Rectangle.__init__(self, x, y, w, h,text,c)
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
        
class InputBox:

    def __init__(self, x, y, w, h, num, head="", text=''):
        self.rect = pg.Rect(x, y, w, h)
        self.color = COLOR_INACTIVE
        self.text = text
        self.txt_surface = FONT.render(text, True, self.color)
        self.active = False
        self.num = num #*number
        self.head = head #*head

    def handle_event(self, event):
        
        if event.type == pg.MOUSEBUTTONDOWN:# ทำการเช็คว่ามีการคลิก Mouse หรือไม่
            if self.rect.collidepoint(event.pos): #!ทำการเช็คว่าตำแหน่งของ Mouse อยู่บน InputBox นี้หรือไม่
                # Toggle the active variable.
                self.active = not self.active
            else:
                self.active = False
            self.color = COLOR_ACTIVE if self.active else COLOR_INACTIVE # เปลี่ยนสีของ InputBox
            
        if event.type == pg.KEYDOWN:
            if self.active:
                if event.key == pg.K_RETURN:
                    print(self.text)
                    self.text = ''
                elif event.key == pg.K_BACKSPACE:
                    self.text = self.text[:-1]
                else:
                    self.text += event.unicode
                # Re-render the text.
                self.txt_surface = FONT.render(self.text, True, self.color)

    def update(self):
        # Resize the box if the text is too long.
        width = max(200, self.txt_surface.get_width()+10)
        self.rect.w = width

    def draw(self, Screen):
        
        if self.head != '':
            htext = MFONT.render(self.head, True, (0,0,0))
            Screen.blit(htext, (self.rect.x, self.rect.y-20))
            
            
        # Blit the text.
        Screen.blit(self.txt_surface, (self.rect.x+5, self.rect.y+5))
        # Blit the rect.
        pg.draw.rect(Screen, self.color, self.rect, 2)
        

import sys
import pygame as pg

pg.init()
win_x, win_y = 800, 480
screen = pg.display.set_mode((win_x, win_y))

COLOR_INACTIVE = pg.Color('lightskyblue3') # ตั้งตัวแปรให้เก็บค่าสี เพื่อนำไปใช้เติมสีให้กับกล่องข้อความตอนที่คลิกที่กล่องนั้นๆอยู่
COLOR_ACTIVE = pg.Color('dodgerblue2')     # ^^^
FONT = pg.font.Font(None, 32)
MFONT = pg.font.Font(None, 26)
input_box1 = InputBox(100, 100, 140, 32, False, 'Firstname') #* input firstname
input_box2 = InputBox(100, 200, 140, 32, False, 'Lastname') #* input lastname
input_box3 = InputBox(100, 300, 140, 32, True, 'Age') #* input age

input_boxes = [input_box1, input_box2, input_box3] # * เก็บค่าที่กรอกมาเป็น LIST

state = ''

btn = Button(100, 350, 100, 50, "enter", (	255, 192, 203))
run = True

while run:
    screen.fill((255, 255, 255))
    btn.draw(screen)
    btn.color = [255, 192, 203]
    for box in input_boxes: # ทำการเรียก InputBox ทุกๆตัว โดยการ Loop เข้าไปยัง list ที่เราเก็บค่า InputBox ไว้
        box.update() # เรียกใช้ฟังก์ชัน update() ของ InputBox
        box.draw(screen) # เรียกใช้ฟังก์ชัน draw() ของ InputBox เพื่อทำการสร้างรูปบน Screen

    if btn.isMousePress():
        btn.color = [127,127,127]
        if input_box1.text == '':
            state = 'Em'
            input_box1.color = [255,0,0]
        if input_box2.text == '':
            state = 'Em'
            input_box2.color = [255,0,0]
        if input_box3.text == '':
            state = 'Em'
            input_box3.color = [255,0,0]
        else:
            state = 'Ok'
            
    if state == 'Em':
        htext = MFONT.render("Box is Empty", True, (0,0,0))
        screen.blit(htext, (100, 400))
    elif state == 'Ok':
        #! กรอก ข้อมูล
        txt = 'Hello ' + str(input_box1.text) + ' ' + str(input_box2.text) + ' ! You are ' + str(input_box3.text) + ' years old.'
        htext = MFONT.render(txt, True, (0,0,0))
        screen.blit(htext, (100, 400))
        
    for event in pg.event.get():
        for box in input_boxes:
            box.handle_event(event)
        if event.type == pg.QUIT:
            pg.quit()
            run = False

    pg.time.delay(1)
    pg.display.update()
