import keyboard as kb
import time
import msvcrt
import sys

startingDigit = int(input("Thousand to start on (0 for default): "))
print("Ok. Press CTRL + C when code has been broken.")

time.sleep(3)

while True:
    for digit1 in range(startingDigit,10):
        for digit2 in range(0,10):
            for digit3 in range(0,10):
                for digit4 in range(0,10):

                    if kb.is_pressed('/'):
                        sys.exit()
                    
                    code = (str(digit1)+str(digit2)+str(digit3)+str(digit4))
                    print(code)
                    kb.write(code)
                    kb.send('enter')
                    time.sleep(0.01)
                    for i in range(0,5):
                        kb.send('backspace')
