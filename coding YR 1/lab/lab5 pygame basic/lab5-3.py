#TODO ให้สร้างตัวแปรสำหรับกำหนด ตำแหน่ง ความเร็วต้น และมุมสำหรับยิงลูกบอล
#TODO ให้แสดงการเคลื่อนที่แบบ projectile (ใช้ความเร่งเดียวกับข้างบน)
import pygame as pg
import math
pg.init()

win_x, win_y = 800, 480
screen = pg.display.set_mode((win_x, win_y))
startX,startY = 30,200
posX,posY = startX,startY
sizeCircle = 20
degreeCircle = 45
#circleBigger = True
veloBall = 20
accelBall = 1
timeBall = 0
#screen.fill((71, 200, 192))
while (posY <= win_y-(sizeCircle/2))and(posX <= win_x-(sizeCircle/2)):
    screen.fill((71, 200, 192))
    pg.draw.circle(screen,(255,98,157),(posX,posY),sizeCircle)
    
    posX = ((veloBall*math.cos(math.radians(degreeCircle)))*timeBall)+startX
    posY = ((-veloBall*math.sin(math.radians(degreeCircle))*timeBall)+(0.5*accelBall*(timeBall**2)))+startY
    timeBall += 1/1000
    

        
    pg.time.delay(1) #หน่วงเวลา
    
    pg.display.update()
    for event in pg.event.get():
        if event.type == pg.QUIT:
            pg.quit()
            exit()