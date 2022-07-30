import pygame
pygame.init()

screen = pygame.display.set_mode((1920,1080))


running = True

while running:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False
    # Fill the background with white
    screen.fill((255, 255, 255))

    x0 = 200 ; y0 = 200; x1 = 900; y1 = 200;

    dx = float(x1 - x0);
    dy = float(y1 - y0);

    if dx>=dy:
        steps = dx;

    else:
        steps = dy;

    dx = dx/steps;
    dy = dy/steps;

    x = x0;
    y = y0;

    i = 1;

    while i<= steps:
        pygame.draw.circle(screen, (0, 0, 255), (x, y), 1)
        x += dx;
        y += dy;
        i=i+1;


    pygame.display.flip()


# Done! Time to quit.

pygame.quit()
