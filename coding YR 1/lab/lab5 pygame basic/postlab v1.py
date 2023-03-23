#TODO ให้สร้างตัวแปรสำหรับกำหนด ตำแหน่ง ความเร็วต้น และมุมสำหรับยิงลูกบอล
#TODO ให้แสดงการเคลื่อนที่แบบ projectile (ใช้ความเร่งเดียวกับข้างบน)
#TODO เด้งต่อไปเรื่อยๆทะลุจอไป Toggle mouse หยุด/เล่น
import pygame as pg
import math
pg.init()

win_x, win_y = 800, 480
screen = pg.display.set_mode((win_x, win_y))
startX,startY = 30,300
posX,posY = startX,startY
sizeCircle = 4
degreeCircle = 80
#circleBigger = True
veloBall = 600
accelBall = 3000
timeX,timeY=0,0
#screen.fill((71, 200, 192))
mouseToggle = False
hasClick = False
#pg.mouse.get_pressed()[0]==0
while True:
    '''while pg.mouse.get_pressed()[0]==1:
        hasClick = True
    if hasClick == True:
        if mouseToggle == False:
            mouseToggle = True
            hasClick == False
        else:
            mouseToggle = False
            hasClick == False'''
    if pg.mouse.get_pressed()[0]==1:
        if mouseToggle == False:
            mouseToggle = True
        else:
            mouseToggle = False
    if mouseToggle==False:
        screen.fill((71, 200, 192))
        pg.draw.circle(screen,(255,98,157),(posX,posY),sizeCircle)
        posX = ((veloBall*math.cos(math.radians(degreeCircle)))*timeX)+startX
        posY = ((-veloBall*math.sin(math.radians(degreeCircle))*timeY)+(0.5*accelBall*(timeY**2)))+startY
        timeX += 1/1000
        if (posY>=startY)and(timeY!=0) :
            timeY = 0
        else:
            timeY += 1/1000
        while posX > win_x:
            posX-=win_x     
    pg.time.delay(1) #หน่วงเวลา
    pg.display.update()
    for event in pg.event.get():
        if event.type == pg.QUIT:
            pg.quit()
            exit()