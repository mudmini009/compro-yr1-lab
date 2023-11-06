#TODO ให้ทำความเข้าใจ Code input box และสร้างแบบฟอร์มที่ให้กรอกชื่อ ชื่อจริง และอายุ
#TODO โดยช่องอายุจะใส่ได้แค่ตัวเลขเท่านั้น และเมื่อกดปุ่ม submit ให้แสดง text ข้างล่างหน้าจอในรูปแบบ
#TODO Hello [firstname] [lastname]! You are [age] years old.

class InputBox:

    def __init__(self, x, y, w, h, text=''):
        self.rect = pg.Rect(x, y, w, h)
        self.color = COLOR_INACTIVE
        self.text = text
        self.txt_surface = FONT.render(text, True, self.color)
        self.active = False
        self.enter = False
    def handle_event(self, event):
        
        if event.type == pg.MOUSEBUTTONDOWN:# ทำการเช็คว่ามีการคลิก Mouse หรือไม่
            if self.rect.collidepoint(event.pos): #ทำการเช็คว่าตำแหน่งของ Mouse อยู่บน InputBox นี้หรือไม่
                # Toggle the active variable.
                self.active = not self.active
                self.enter = False
            else:
                self.active = False
            self.color = COLOR_ACTIVE if self.active else COLOR_INACTIVE # เปลี่ยนสีของ InputBox
            
        if event.type == pg.KEYDOWN:
            if self.active:
                if event.key == pg.K_RETURN :
                    if self.text != "" :
                        self.enter = True
                    self.color = COLOR_INACTIVE
                    self.active = False
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
        # Blit the text.
        Screen.blit(self.txt_surface, (self.rect.x+5, self.rect.y+5))
        # Blit the rect.
        pg.draw.rect(Screen, self.color, self.rect, 2)

import pygame as pg        
import sys 

pg.init()
win_x, win_y = 800, 480
screen = pg.display.set_mode((win_x, win_y))

COLOR_INACTIVE = pg.Color('lightskyblue3') # ตั้งตัวแปรให้เก็บค่าสี เพื่อนำไปใช้เติมสีให้กับกล่องข้อความตอนที่คลิกที่กล่องนั้นๆอยู่
COLOR_ACTIVE = pg.Color('dodgerblue2')     # ^^^
FONT = pg.font.Font(None, 32)

firstname = InputBox(150, 100, 140, 32) #* box for firsttname
lastname = InputBox(150, 200, 140, 32) #* box for lastname
age = InputBox(150, 300, 140, 32) #* box for age
input_boxes = [firstname,lastname,age] # เก็บ InputBox ไว้ใน list เพื่อที่จะสามารถนำไปเรียกใช้ได้ง่าย
run = True

while run:
    screen.fill((255, 192, 203))
    screen.blit(FONT.render("firstname ", True, (0,0,0)),(5,100))
    screen.blit(FONT.render("lastname ", True, (0,0,0)),(5,200))
    screen.blit(FONT.render("age ", True, (0,0,0)),(5,300))
    for box in input_boxes: # ทำการเรียก InputBox ทุกๆตัว โดยการ Loop เข้าไปยัง list ที่เราเก็บค่า InputBox ไว้
        box.update() # เรียกใช้ฟังก์ชัน update() ของ InputBox
        box.draw(screen) # เรียกใช้ฟังก์ชัน draw() ของ InputBox เพื่อทำการสร้างรูปบน Screen
    outn = "Your name is " + firstname.text + " " + lastname.text + "!"
    try :
        int(age.text) 
        outa = " You are " + age.text + " years old."
    except :
        if age.enter :
            screen.blit(font.render("Please enter numbers only", True, (200,0,0)),(410,235))
            age.text = ""
        
        outa = "None"
    
    if age.enter and firstname.enter and lastname.enter and outa != "None" :
        screen.blit(FONT.render(outn+outa, True, (0,0,0)),(100,380))
    
    for event in pg.event.get():
        for box in input_boxes:
            box.handle_event(event)
        if event.type == pg.QUIT:
            pg.quit()
            run = False

    pg.time.delay(1)
    pg.display.update()
    