#TODO ลองเอา screen.fill((255, 255, 255)) ไว้นอก while สังเกตุและอธิบายผลที่เกิดขึ้น

import pygame as pg
pg.init()

win_x, win_y = 800, 480
screen = pg.display.set_mode((win_x, win_y))
posX, posY = 20, 20

#screen.fill((255, 255, 255))
#! มันเป็นเส้น เพราะไม่ได้เคลียร์ screen ใหม่ให้เป็นขาวหมด
while(1):
    screen.fill((255, 255, 255))
    pg.draw.circle(screen,(100,100,100),(posX,posY),20)
    
    posX += 1 # เพิ่มค่าตำแหน่ง X
    posY += 1 # เพิ่มค่าตำแหน่ง Y
    
    if(posX>win_x): # เมื่อค่าตำแหน่ง X เกินขนาดของหน้าจอ
        posX = 0
    if(posY>win_y): # เมื่อค่าตำแหน่ง Y เกินขนาดของหน้าจอ
        posY = 0
        
    pg.time.delay(1) #หน่วงเวลา
    
    pg.display.update()
    for event in pg.event.get():
        if event.type == pg.QUIT:
            pg.quit()
            exit()
            exit()