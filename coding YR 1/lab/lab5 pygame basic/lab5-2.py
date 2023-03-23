#TODO สร้างวงกลมที่ตำแหน่ง (200, 30) จากนั้นให้ตกสู่พื้นแบบ free fall
#TODO โดยมีความเร่ง 1 pixel/s^2 มื่อลูกบอลตกถึงพื้นให้ปิดหน้าต่างลง
import pygame as pg
pg.init()

win_x, win_y = 800, 480
screen = pg.display.set_mode((win_x, win_y))
startY = 30
sizeCircle = 20
#circleBigger = True
accelBall = 1
timeBall = 0
posY = startY
while posY <= win_y-(sizeCircle/2):
    screen.fill((71, 200, 192))
    pg.draw.circle(screen,(255,98,157),(200,posY),sizeCircle)
    posY = (0.5*accelBall*(timeBall**2))+startY
    timeBall += 1/1000
    

        
    pg.time.delay(1) #หน่วงเวลา
    
    pg.display.update()
    for event in pg.event.get():
        if event.type == pg.QUIT:
            pg.quit()
            exit()