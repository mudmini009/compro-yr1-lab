#TODO ให้สร้างวงกลมไว้กลางหน้าต่าง ขยายขนาดขึ้นจนเต็มหน้าจอ จากนั้นหดลงเรื่อยๆจนหายไป ทำซ้ำแบบนี้วนไปเรื่อยๆ
#TODO ปล.เปลี่ยนสีลูกบอลด้วย เป็นสีที่ชอบเลย
import pygame as pg
pg.init()

win_x, win_y = 800, 480
screen = pg.display.set_mode((win_x, win_y))
sizeCircle = 1
circleBigger = True
while(1):
    screen.fill((71, 200, 192))
    pg.draw.circle(screen,(255,98,157),(win_x/2,win_y/2),sizeCircle)
    
    if circleBigger == True:
        sizeCircle += 1
        if sizeCircle >= win_y/2:
            circleBigger = False
    if circleBigger == False:
        sizeCircle -= 1
        if sizeCircle <= 1:
            circleBigger = True
    '''posX += 1 # เพิ่มค่าตำแหน่ง X
    posY += 1 # เพิ่มค่าตำแหน่ง Y
    
    if(posX>win_x): # เมื่อค่าตำแหน่ง X เกินขนาดของหน้าจอ
        posX = 0
    if(posY>win_y): # เมื่อค่าตำแหน่ง Y เกินขนาดของหน้าจอ
        posY = 0'''
        
    pg.time.delay(1) #หน่วงเวลา
    
    pg.display.update()
    for event in pg.event.get():
        if event.type == pg.QUIT:
            pg.quit()
            exit()